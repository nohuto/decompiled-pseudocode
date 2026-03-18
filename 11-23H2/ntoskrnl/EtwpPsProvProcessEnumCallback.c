/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1409EFA60
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1409EF9D4 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140297C80 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PsSetProcessTelemetryAppState @ 0x1407516EC (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     EtwpQueryProcessOtherInfo @ 0x140754DC4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x140754E04 (EtwpQueryTokenPackageInfo.c)
 *     EtwpIsProcessZombie @ 0x140820780 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  _QWORD *v5; // rcx
  bool v6; // zf
  ULONG_PTR v7; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12[104]; // [rsp+70h] [rbp-90h] BYREF

  v10 = 0LL;
  v4 = 0;
  memset(&v11, 0, sizeof(v11));
  memset(v12, 0, 0x198uLL);
  if ( !EtwpIsProcessZombie((__int64)BugCheckParameter1) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0
        && BugCheckParameter1 != PsIdleProcess
        && (HIDWORD(BugCheckParameter1[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        PsSetProcessTelemetryAppState(v5, 5);
      }
    }
    else
    {
      v6 = BugCheckParameter1 == PsIdleProcess;
      a2[8] = 0;
      if ( !v6
        && KeGetCurrentThread()->ApcState.Process != BugCheckParameter1
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v11);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v9 = 0;
        v7 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
        EtwpQueryTokenPackageInfo(v7, (__int64)v12, &v9);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v10);
        ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[1].Affinity.StaticBitmap[5], v7, 0x746C6644u);
        EtwpPsProvTraceProcess((__int64)BugCheckParameter1, v9, v12, (int *)&v10, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess(&v11);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
