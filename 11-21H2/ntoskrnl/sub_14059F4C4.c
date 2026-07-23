/*
 * XREFs of sub_14059F4C4 @ 0x14059F4C4
 * Callers:
 *     sub_14059EF54 @ 0x14059EF54 (sub_14059EF54.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059F874 @ 0x14059F874 (sub_14059F874.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 */

__int64 __fastcall sub_14059F4C4(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  volatile LONG *v5; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  __int64 v26; // r8
  volatile LONG *SpinLock; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+88h] [rbp+10h]

  v5 = (volatile LONG *)(*a2 + 72LL);
  v28 = 1;
  SpinLock = v5;
  v8 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockShared(v5);
    v10 = sub_14059F874(a2, a3);
    v11 = v10;
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 32) != 0x8000000000000000uLL )
        break;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( !a4 || !v28 )
    {
      if ( !v11 )
        return 3221225626LL;
      result = 3221227273LL;
      if ( *(_QWORD *)(v11 + 32) != 0x8000000000000000uLL )
        return 3221225626LL;
      return result;
    }
    result = sub_14096F8CC((ULONG_PTR)a2, 2, -1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v28 = 0;
    }
    v5 = SpinLock;
  }
  v18 = a2[1];
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v19 = sub_1403342D0((__int64)a2, v18, 0xFFFFFFFF);
  v20 = *(_QWORD *)(v11 + 32);
  v21 = (a3 - v19) >> 12;
  if ( v20 == 0x8000000000000000uLL )
  {
    v22 = 0x8000000000000000uLL;
  }
  else
  {
    v8 = v20 + *(_QWORD *)(v11 + 40);
    v22 = v20 + (unsigned int)v21 - (unsigned __int64)*(unsigned int *)(v11 + 24);
  }
  *(_QWORD *)(a1 + 16) = v22;
  *(_QWORD *)(a1 + 24) = v8;
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v26 = *((_QWORD *)v24 + 4375);
        v16 = (v25 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v25;
        if ( v16 )
          sub_140418E4C((__int64)v24);
      }
    }
  }
  __writecr8(v9);
  return 0LL;
}
