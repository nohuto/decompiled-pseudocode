/*
 * XREFs of sub_140528C60 @ 0x140528C60
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140528C60(__int64 a1, int a2, char a3, _QWORD *a4)
{
  char v4; // bp
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // r9
  __int64 i; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax

  v4 = 0;
  if ( !byte_140C4BCBC || !byte_140C4BCBD )
    return 3221225659LL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C4A110);
  for ( i = qword_140C4A100; (__int64 *)i != &qword_140C4A100; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 16) == a1 && *(_DWORD *)(i + 24) == a2 )
    {
      v9 = *(_QWORD *)(i + 32);
      v4 = 1;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A110);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v4 )
    return 3221225485LL;
  if ( a3 )
    *(_QWORD *)(v9 + 64) = *a4;
  *(_QWORD *)(v9 + 64) = 0LL;
  result = 3221225474LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  return result;
}
