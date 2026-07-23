/*
 * XREFs of sub_140529200 @ 0x140529200
 * Callers:
 *     sub_140527CF0 @ 0x140527CF0 (sub_140527CF0.c)
 *     sub_140527F70 @ 0x140527F70 (sub_140527F70.c)
 *     sub_140528320 @ 0x140528320 (sub_140528320.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140529200(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbp
  char v4; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  __int64 *i; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rdx
  __int64 **v16; // rax

  v2 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C4A110);
  for ( i = (__int64 *)qword_140C4A100; i != &qword_140C4A100; i = (__int64 *)*i )
  {
    v2 = i;
    if ( i[4] == a1 && i[5] == *(_QWORD *)(a1 + 24) && !*((_DWORD *)i + 6) )
    {
      v15 = *i;
      v4 = 1;
      v16 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v16 != i )
        __fastfail(3u);
      *v16 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A110);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 )
    *a2 = v2;
  return v4;
}
