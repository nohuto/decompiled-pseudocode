/*
 * XREFs of sub_14059DF58 @ 0x14059DF58
 * Callers:
 *     sub_14026CF88 @ 0x14026CF88 (sub_14026CF88.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 *     sub_1405C48E0 @ 0x1405C48E0 (sub_1405C48E0.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14096FEDC @ 0x14096FEDC (sub_14096FEDC.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14096FE9C @ 0x14096FE9C (sub_14096FE9C.c)
 */

__int64 __fastcall sub_14059DF58(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // r12
  unsigned __int64 v4; // rsi
  __int64 *v5; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned __int64 *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // edx
  unsigned __int8 v20; // cl
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 result; // rax
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 *v27; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+90h] [rbp+18h]
  volatile LONG *v30; // [rsp+98h] [rbp+20h]

  v27 = a1;
  v2 = a1;
  v26 = *a1;
  v3 = (volatile LONG *)(*a1 + 72);
  v30 = v3;
  v4 = ExAcquireSpinLockExclusive(v3);
  v5 = a2;
  v29 = v4 + 1;
  while ( 1 )
  {
    if ( --*((_DWORD *)v2 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = (*(_DWORD *)(v7 + 20) & 0xFFFF0007) == 0;
          *(_DWORD *)(v7 + 20) &= 0xFFFF0007;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      __writecr8(2uLL);
      v9 = *((_DWORD *)v2 + 11);
      v10 = 0;
      v11 = (unsigned __int64 *)v2[1];
      if ( v9 )
      {
        do
        {
          v12 = sub_1402738F0(v11, 0LL);
          sub_140273FD0(v12, v13, v14, v15);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v10 & 0xF) == 0 && v10 != v9 && KeShouldYieldProcessor() )
          {
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
                {
                  v17 = KeGetCurrentPrcb();
                  v18 = *((_QWORD *)v17 + 4375);
                  v19 = ~(unsigned __int16)(-1LL << v29);
                  v8 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                  *(_DWORD *)(v18 + 20) &= v19;
                  if ( v8 )
                    sub_140418E4C((__int64)v17);
                }
              }
            }
            __writecr8(v4);
            v20 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v20 <= 0xFu )
            {
              v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v21 + 20) |= (-1 << (v20 + 1)) & 4;
            }
          }
          ++v11;
        }
        while ( v10 < v9 );
        v2 = v27;
        v3 = v30;
      }
      sub_14096FE9C(v2, 0LL);
      ExAcquireSpinLockExclusive(v3);
      --*((_DWORD *)v2 + 27);
      v22 = sub_140287B04(v26, 512);
      sub_1402879F8(v22);
      v5 = a2;
    }
    if ( v2 == v5 )
      break;
    v2 = (__int64 *)v2[2];
    v27 = v2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        result = ~(unsigned __int16)(-1LL << v29);
        v8 = ((unsigned int)result & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C((__int64)v24);
      }
    }
  }
  __writecr8(v4);
  return result;
}
