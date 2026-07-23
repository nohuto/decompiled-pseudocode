/*
 * XREFs of sub_14063BE80 @ 0x14063BE80
 * Callers:
 *     sub_14063AFCC @ 0x14063AFCC (sub_14063AFCC.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     sub_14063B798 @ 0x14063B798 (sub_14063B798.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14063BE80(__int64 a1)
{
  _QWORD *v1; // rbx
  int v3; // esi
  unsigned int *Pool2; // rdi
  unsigned int v5; // esi
  _WNF_STATE_NAME *v6; // r15
  __int64 v7; // r8
  unsigned int *v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int i; // r9d
  __int64 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // r10
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v25; // r8
  int v26; // eax
  bool v27; // zf
  unsigned int j; // edx
  __int64 v29; // rax
  ULONG_PTR v30; // rcx
  unsigned int k; // ebx
  ULONG_PTR v32; // rcx
  __int64 v34; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = 0LL;
  v3 = sub_14063B798();
  if ( v3 >= 0 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 56LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 64, 1819242320LL);
    if ( Pool2 )
    {
      v5 = 0;
      *Pool2 = *(_DWORD *)(a1 + 4);
      if ( *(_DWORD *)(a1 + 4) )
      {
        while ( 1 )
        {
          v6 = (_WNF_STATE_NAME *)ExAllocatePool2(64LL, 112LL, 1819242320LL);
          v7 = 14LL * v5;
          *(_QWORD *)&Pool2[v7 + 2] = v6;
          if ( !v6 )
            break;
          v6[1] = (_WNF_STATE_NAME)*(unsigned int *)(48LL * v5 + a1 + 8);
          v8 = &Pool2[v7 + 6];
          v9 = (__int64 *)(48LL * v5 + a1 + 24);
          v10 = 2LL;
          do
          {
            *((_QWORD *)v8 - 1) = *(v9 - 1);
            v11 = *v9;
            v9 += 2;
            *(_QWORD *)v8 = v11;
            v8 += 6;
            --v10;
          }
          while ( v10 );
          StateName = 0LL;
          if ( ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeSystem, 0, 0LL, 4u, &unk_140CE1E50) >= 0 )
            v6[8] = StateName;
          if ( ++v5 >= *(_DWORD *)(a1 + 4) )
            goto LABEL_11;
        }
        v3 = -1073741670;
      }
      else
      {
LABEL_11:
        KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
        for ( i = 0; i < *Pool2; ++i )
        {
          v13 = 14LL * i;
          v14 = (unsigned int)dword_140CE1E44 >> 5;
          v15 = -1LL << (dword_140CE1E44 & 0x1F);
          v16 = *(_QWORD **)&Pool2[v13 + 2];
          v17 = v16 + 1;
          v18 = (_DWORD)v16[1] & (unsigned int)v15;
          if ( (unsigned int)dword_140CE1E44 >> 5 )
          {
            v19 = qword_140CE1E48
                + 8LL
                * ((37
                  * (BYTE6(v18)
                   + 37
                   * (BYTE5(v18)
                    + 37
                    * (BYTE4(v18)
                     + 37
                     * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                  + HIBYTE(v18)) & (v14 - 1));
            while ( 1 )
            {
              v19 = *(_QWORD *)v19;
              if ( (v19 & 1) != 0 )
                break;
              if ( v18 == (v15 & *(_QWORD *)(v19 + 8)) )
              {
                if ( !v19 )
                  break;
                *v17 = v1;
                v1 = v16 + 1;
                *(_QWORD *)&Pool2[v13 + 2] = v19;
                goto LABEL_20;
              }
            }
          }
          v34 = *v17 & v15;
          v20 = qword_140CE1E48;
          v21 = (37
               * (BYTE6(v34)
                + 37
                * (BYTE5(v34)
                 + 37
                 * (BYTE4(v34)
                  + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
               + HIBYTE(v34)) & (v14 - 1);
          *v16 = *(_QWORD *)(qword_140CE1E48 + 8 * v21);
          *(_QWORD *)(v20 + 8 * v21) = v16;
          ++dword_140CE1E40;
LABEL_20:
          ;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v25 = *((_QWORD *)CurrentPrcb + 4375);
              v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
              *(_DWORD *)(v25 + 20) &= v26;
              if ( v27 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        KeGenericCallDpc((__int64)sub_14063B690, (__int64)Pool2);
        for ( j = 0; j < *Pool2; *(_QWORD *)&Pool2[14 * v29 + 2] = 0LL )
          v29 = j++;
        v3 = 0;
        while ( v1 )
        {
          v30 = (ULONG_PTR)(v1 - 1);
          v1 = (_QWORD *)*v1;
          sub_140348B40(v30);
        }
      }
      for ( k = 0; k < *Pool2; ++k )
      {
        v32 = *(_QWORD *)&Pool2[14 * k + 2];
        if ( v32 )
          sub_140348B40(v32);
      }
      sub_140348B40((ULONG_PTR)Pool2);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
