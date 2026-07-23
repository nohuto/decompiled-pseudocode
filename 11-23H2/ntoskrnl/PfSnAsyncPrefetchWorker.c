/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x14074DE90
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402F5C8C (MmGetAvailablePagesBelowPriority.c)
 *     MmGetDefaultPagePriority @ 0x1402F61F4 (MmGetDefaultPagePriority.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchSharedInitialize @ 0x14074BFC4 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x14074C00C (PfpPrefetchSharedStart.c)
 *     PfSnPreallocatePrefetchHeader @ 0x14074C15C (PfSnPreallocatePrefetchHeader.c)
 *     PfSnAsyncPrefetchStep @ 0x14074CCE8 (PfSnAsyncPrefetchStep.c)
 *     PfSnAsyncContextCleanup @ 0x14074D218 (PfSnAsyncContextCleanup.c)
 *     PfSnLogAsyncWorker @ 0x14074E16C (PfSnLogAsyncWorker.c)
 *     PfSnCleanupPrefetchHeader @ 0x14075D0A0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnPowerBoost @ 0x1407E702C (PfSnPowerBoost.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(_QWORD *P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  int DefaultPagePriority; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // rax
  __int64 Pool2; // rax
  int v10; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15[4]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v16[16]; // [rsp+38h] [rbp-89h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v17; // [rsp+B8h] [rbp-9h] BYREF

  v1 = P[26];
  v15[0] = 0;
  v3 = 0;
  memset(&v17, 0, sizeof(v17));
  v4 = 0;
  memset(v16, 0, sizeof(v16));
  v5 = *((_DWORD *)P + 59);
  v16[4] = (__int64)&v16[3];
  v16[0] = v1;
  v16[3] = (__int64)&v16[3];
  v16[6] = (__int64)&v16[5];
  v16[5] = (__int64)&v16[5];
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  if ( (P[30] & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess((_KPROCESS *)P[27], 0, (__int64)&v17);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    LODWORD(v16[12]) = v5;
    HIDWORD(v16[12]) = v5;
  }
  else
  {
    LODWORD(v16[12]) = DefaultPagePriority - 1;
    HIDWORD(v16[12]) = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v16) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v16[12]) + 1);
    v8 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v16[13] = v8;
    if ( v8 )
    {
      Pool2 = ExAllocatePool2(64LL, 144LL, 1129539152LL);
      v16[1] = Pool2;
      if ( Pool2 )
      {
        PfpPrefetchSharedInitialize(Pool2);
        *(_QWORD *)(v16[1] + 32) = v16;
        *(_DWORD *)(v16[1] + 60) = 250;
        *(_DWORD *)(v16[1] + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v16[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v16, v15) >= 0 )
        {
          v10 = v15[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v10 = v15[0] | 1;
            v15[0] |= 1u;
          }
          if ( (dword_140C64F80 & 4) != 0 )
          {
            v12 = 0;
            v10 &= ~2u;
            v15[0] = v10;
            goto LABEL_19;
          }
          v11 = 1;
          if ( (v10 & 1) != 0 )
          {
            v12 = *(_DWORD *)(v1 + 124);
            v11 = (1 << v12) - 1;
            if ( 1 << v12 == 1 )
            {
LABEL_18:
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)P[4]);
              v3 = 1;
              PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
LABEL_19:
              if ( v12 < *(_DWORD *)(v1 + 124) && (v10 & 2) == 0 )
              {
                _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 5000);
                while ( v12 < *(_DWORD *)(v1 + 124)
                     && (int)PfSnAsyncPrefetchStep((__int64)P, (__int64)v16, 1 << v12) >= 0 )
                  ++v12;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v12 = 1;
          }
          if ( (int)PfSnAsyncPrefetchStep((__int64)P, (__int64)v16, v11) < 0 )
            goto LABEL_20;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_20:
  _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 0);
  v13 = P[28];
  if ( v13 )
  {
    *(_QWORD *)(v13 + 472) = v16[14];
    v14 = P[28];
    v16[14] = 0LL;
    *(_DWORD *)(v14 + 480) = v16[15];
  }
  PfSnCleanupPrefetchHeader(v16);
  _InterlockedDecrement(&dword_140C6A670);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess(&v17);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)P[4]);
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
