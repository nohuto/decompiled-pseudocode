/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14093760C
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2E0 (DbgkCopyProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140937310 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140938348 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 *v3; // rdx
  __int16 v4; // ax
  __int64 v6; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 v7; // [rsp+28h] [rbp-40h] BYREF

  memset(&v7, 0, sizeof(v7));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v7);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v3 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v3 )
      {
        v4 = *(_WORD *)(BugCheckParameter1 + 2412);
        if ( v4 == 332 || v4 == 452 )
        {
          v6 = *v3;
          if ( v6 )
            *(_BYTE *)(v6 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess(&v7);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
