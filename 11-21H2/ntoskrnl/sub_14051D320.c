/*
 * XREFs of sub_14051D320 @ 0x14051D320
 * Callers:
 *     sub_14051DAC0 @ 0x14051DAC0 (sub_14051DAC0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14051D320(__int64 a1, int a2, int a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf

  v6 = sub_140252344(&qword_140C4B0D0);
  v7 = qword_140C4B0C0;
  v8 = 0LL;
  v9 = v6;
  while ( (__int64 *)v7 != &qword_140C4B0C0 )
  {
    if ( *(_DWORD *)(v7 + 16) == a2 && *(_DWORD *)(v7 + 20) == a3 && *(_QWORD *)(v7 + 48) == a1 )
    {
      v8 = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 112));
      break;
    }
    v7 = *(_QWORD *)v7;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4B0D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v8;
}
