/*
 * XREFs of sub_140527130 @ 0x140527130
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140527B98 @ 0x140527B98 (sub_140527B98.c)
 */

__int64 __fastcall sub_140527130(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // r9
  KSPIN_LOCK *v6; // r14
  _QWORD *v7; // rdx
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  _QWORD *j; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx

  v3 = *a1;
  if ( byte_140C4BCBC )
    sub_140527B98(a2[5]);
  else
    sub_14042A5E0(*(_QWORD *)(a2[3] + 16LL), a2[5]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v6 = (KSPIN_LOCK *)(v3 + 24);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 24));
  v7 = 0LL;
  for ( i = *(_QWORD **)(v3 + 32); i != (_QWORD *)(v3 + 32); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i[2] == a2[3] )
      break;
  }
  v9 = 0LL;
  for ( j = (_QWORD *)v7[3]; j != v7 + 3; j = (_QWORD *)*j )
  {
    v9 = j;
    if ( (_QWORD *)j[5] == a2 )
      break;
  }
  v11 = *v9;
  v12 = (_QWORD *)v9[1];
  if ( *(_QWORD **)(*v9 + 8LL) != v9
    || (_QWORD *)*v12 != v9
    || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = *a2, v14 = (_QWORD *)a2[1], *(_QWORD **)(*a2 + 8LL) != a2)
    || (_QWORD *)*v14 != a2 )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  KeReleaseSpinLockFromDpcLevel(v6);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = (unsigned int)CurrentIrql + 1;
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  sub_1403B1B5C(v15, (__int64)a2);
  v22 = v9[2056];
  if ( v22 )
    sub_1403B1B5C(v21, v22);
  sub_1403B1B5C(v21, (__int64)v9);
  return 0LL;
}
