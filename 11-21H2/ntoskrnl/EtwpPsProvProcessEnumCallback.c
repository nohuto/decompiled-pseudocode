/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1409EB400
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1409EB374 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     EtwpQueryTokenPackageInfo @ 0x14070B934 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14070BACC (EtwpQueryProcessOtherInfo.c)
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 *     EtwpIsProcessZombie @ 0x140814978 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  _QWORD *v5; // rcx
  bool v6; // zf
  _DWORD *v7; // r9
  unsigned __int64 v8; // r14
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13[104]; // [rsp+70h] [rbp-90h] BYREF

  v11 = 0LL;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0x198uLL);
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
        && ExAcquireRundownProtection((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v12, v7);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
        EtwpQueryTokenPackageInfo(v8, (__int64)v13, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v11);
        ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[1].Affinity.StaticBitmap[5], v8, 0x746C6644u);
        EtwpPsProvTraceProcess((__int64)BugCheckParameter1, v10, v13, (int *)&v11, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v12, 0LL);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
