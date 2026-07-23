/*
 * XREFs of sub_1405DB13C @ 0x1405DB13C
 * Callers:
 *     sub_1405DA68C @ 0x1405DA68C (sub_1405DA68C.c)
 *     sub_1405DA9A8 @ 0x1405DA9A8 (sub_1405DA9A8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1405DB13C(PCEVENT_DESCRIPTOR EventDescriptor, struct _EVENT_DATA_DESCRIPTOR *a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *Pool2; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v21; // xmm0
  int v22; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER v23; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  _DWORD *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  v23.QuadPart = 0LL;
  if ( byte_140C5AE30 )
  {
    if ( EtwEventEnabled(qword_140C1F580, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(a3 + 28);
        if ( v6 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20 * v6, 1699565648LL);
          if ( Pool2 )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
            v9 = KeQueryInterruptTimePrecise(&v23);
            v10 = 0LL;
            v22 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                Pool2[5 * v10] = v14;
                *(_QWORD *)&Pool2[5 * v22 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&Pool2[5 * v22 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v15 = *(_QWORD *)(v11 + v13 + 32);
                if ( v15 )
                  *(_QWORD *)&Pool2[5 * v22 + 3] += v9 - v15;
                v10 = (unsigned int)++v22;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v18 = *((_QWORD *)CurrentPrcb + 4375);
                  v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                  *(_DWORD *)(v18 + 20) &= v19;
                  if ( v20 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
            v21 = *a2;
            v27 = 0;
            v30 = 0;
            v25 = &v22;
            UserData = v21;
            v26 = 4;
            v28 = Pool2;
            v29 = 20 * v22;
            EtwWriteEx(qword_140C1F580, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            ExFreePoolWithTag(Pool2, 0x654D5050u);
          }
        }
      }
    }
  }
}
