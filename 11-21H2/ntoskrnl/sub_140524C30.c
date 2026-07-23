/*
 * XREFs of sub_140524C30 @ 0x140524C30
 * Callers:
 *     sub_140524C10 @ 0x140524C10 (sub_140524C10.c)
 *     sub_140524E90 @ 0x140524E90 (sub_140524E90.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14023AF30 @ 0x14023AF30 (sub_14023AF30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140524C30(char a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  int LockArray_high; // ecx
  unsigned __int64 v9; // r12
  KSPIN_LOCK *v10; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // r9
  __int64 v13; // r15
  unsigned int v14; // ecx
  const void *v15; // rdx
  void *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  char v24; // [rsp+68h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 > 8 )
    return 3221225485LL;
  v7 = 278;
  if ( !_bittest(&v7, a3) || !a4 )
    return 3221225485LL;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( dword_140C0CA28 == LockArray_high )
  {
    v9 = qword_140C4A170;
    v10 = &qword_140C4A150;
  }
  else if ( dword_140C0CA2C == LockArray_high )
  {
    v9 = qword_140C4A160;
    v10 = (KSPIN_LOCK *)&qword_140C4A178;
  }
  else
  {
    v9 = qword_140C4A168;
    v10 = (KSPIN_LOCK *)&qword_140C4A158;
  }
  v24 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    v24 = 1;
  }
  KeAcquireSpinLockAtDpcLevel(v10);
  for ( ; v5; v5 -= v13 )
  {
    sub_14023AF30(v9, v6, 1);
    v13 = v5;
    v14 = 4096 - (v6 & 0xFFF);
    if ( v5 >= v14 )
      v13 = v14;
    if ( a1 )
    {
      v15 = (const void *)(v9 + (v6 & 0xFFF));
      v16 = v4;
    }
    else
    {
      v15 = v4;
      v16 = (void *)(v9 + (v6 & 0xFFF));
    }
    memmove(v16, v15, (unsigned int)v13);
    v6 += v13;
    v4 += v13;
  }
  KeReleaseSpinLockFromDpcLevel(v10);
  if ( v24 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
