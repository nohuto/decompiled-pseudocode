/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x1407DC0D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetAvailablePagesBelowPriority @ 0x1402633C4 (MmGetAvailablePagesBelowPriority.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfpPrefetchSharedStart @ 0x1406AF0D4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x1406AF220 (PfpPrefetchSharedInitialize.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1406BEE5C (PfSnPreallocatePrefetchHeader.c)
 *     PfSnAsyncContextCleanup @ 0x1406DED34 (PfSnAsyncContextCleanup.c)
 *     PfSnPowerBoost @ 0x1406E18A0 (PfSnPowerBoost.c)
 *     PfSnAsyncPrefetchStep @ 0x1407D74C4 (PfSnAsyncPrefetchStep.c)
 *     PfSnLogAsyncWorker @ 0x1407DC3D0 (PfSnLogAsyncWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnCleanupPrefetchHeader @ 0x1407DFE00 (PfSnCleanupPrefetchHeader.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(_QWORD *P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  _DWORD *v6; // r9
  int DefaultPagePriority; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v9; // rax
  __int64 Pool2; // rax
  int v11; // ebx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16[4]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v17[16]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v18[3]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = P[26];
  v16[0] = 0;
  v3 = 0;
  memset(v18, 0, sizeof(v18));
  v4 = 0;
  memset(v17, 0, sizeof(v17));
  v5 = *((_DWORD *)P + 59);
  v17[4] = (__int64)&v17[3];
  v17[0] = v1;
  v17[3] = (__int64)&v17[3];
  v17[6] = (__int64)&v17[5];
  v17[5] = (__int64)&v17[5];
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  if ( (P[30] & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5, 1);
    v4 = 1;
  }
  KiStackAttachProcess((_KPROCESS *)P[27], 0LL, (__int64)v18, v6);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    LODWORD(v17[12]) = v5;
    HIDWORD(v17[12]) = v5;
  }
  else
  {
    LODWORD(v17[12]) = DefaultPagePriority - 1;
    HIDWORD(v17[12]) = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v17) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v17[12]) + 1);
    v9 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v17[13] = v9;
    if ( v9 )
    {
      Pool2 = ExAllocatePool2(64LL, 144LL, 1129539152LL);
      v17[1] = Pool2;
      if ( Pool2 )
      {
        PfpPrefetchSharedInitialize(Pool2);
        *(_QWORD *)(v17[1] + 32) = v17;
        *(_DWORD *)(v17[1] + 60) = 250;
        *(_DWORD *)(v17[1] + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v17[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v17, v16) >= 0 )
        {
          v11 = v16[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v11 = v16[0] | 1;
            v16[0] |= 1u;
          }
          if ( (dword_140C544F0 & 4) != 0 )
          {
            v13 = 0;
            v11 &= ~2u;
            v16[0] = v11;
            goto LABEL_20;
          }
          v12 = 1;
          if ( (v11 & 1) != 0 )
          {
            v13 = *(_DWORD *)(v1 + 124);
            v12 = (1 << v13) - 1;
            if ( 1 << v13 == 1 )
            {
LABEL_19:
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)P[4]);
              v3 = 1;
              PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
LABEL_20:
              if ( v13 < *(_DWORD *)(v1 + 124) && (v11 & 2) == 0 )
              {
                _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 5000);
                while ( v13 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep((__int64)P, v17, 1 << v13) >= 0 )
                  ++v13;
              }
              goto LABEL_21;
            }
          }
          else
          {
            v13 = 1;
          }
          if ( (int)PfSnAsyncPrefetchStep((__int64)P, v17, v12) < 0 )
            goto LABEL_21;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 0);
  v14 = P[28];
  if ( v14 )
  {
    *(_QWORD *)(v14 + 472) = v17[14];
    v15 = P[28];
    v17[14] = 0LL;
    *(_DWORD *)(v15 + 480) = v17[15];
  }
  PfSnCleanupPrefetchHeader(v17);
  _InterlockedDecrement(&dword_140C546F0);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5, 0);
  KiUnstackDetachProcess((__int64)v18, 0LL);
  if ( !v3 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)P[4]);
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
