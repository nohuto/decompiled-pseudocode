/*
 * XREFs of sub_140519B94 @ 0x140519B94
 * Callers:
 *     sub_140511600 @ 0x140511600 (sub_140511600.c)
 *     sub_1405157F0 @ 0x1405157F0 (sub_1405157F0.c)
 *     sub_140515FD0 @ 0x140515FD0 (sub_140515FD0.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140519B94(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r10
  _QWORD **v8; // rdi
  char v9; // bp
  _QWORD *v10; // rax
  _QWORD **v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf
  _QWORD *v18; // rdx

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 5LL * *(unsigned int *)(a1 + 372);
  v4 = *(unsigned __int8 *)(v2 + 176);
  v5 = *(_QWORD *)(v2 + 56) + 32 * v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 360) + 168LL));
  v8 = (_QWORD **)(v5 + 144);
  v9 = 0;
  v10 = *v8;
  if ( *v8 != v8 )
  {
    while ( 1 )
    {
      v11 = (_QWORD **)*v10;
      if ( v10 == (_QWORD *)(a1 + 200) )
        break;
      v10 = (_QWORD *)*v10;
      if ( v11 == v8 )
        goto LABEL_9;
    }
    v18 = (_QWORD *)v10[1];
    if ( v11[1] != v10 || (_QWORD *)*v18 != v10 )
      __fastfail(3u);
    *v18 = v11;
    v9 = 1;
    v11[1] = v18;
  }
LABEL_9:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 360) + 168LL));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
