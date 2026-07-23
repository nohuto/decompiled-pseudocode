/*
 * XREFs of sub_14051D24C @ 0x14051D24C
 * Callers:
 *     sub_14051D1A0 @ 0x14051D1A0 (sub_14051D1A0.c)
 *     sub_14051D410 @ 0x14051D410 (sub_14051D410.c)
 *     sub_14051D768 @ 0x14051D768 (sub_14051D768.c)
 *     sub_140909678 @ 0x140909678 (sub_140909678.c)
 *     sub_140909764 @ 0x140909764 (sub_140909764.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14051D24C(unsigned int a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v2 = sub_140252344(&qword_140C4B0D0);
  v3 = qword_140C4B0C0;
  v4 = v2;
  v5 = 0LL;
  while ( (__int64 *)v3 != &qword_140C4B0C0 )
  {
    v6 = *(_DWORD *)(v3 + 16);
    if ( a1 >= v6 && a1 < v6 + *(_DWORD *)(v3 + 20) )
    {
      v5 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 112));
      break;
    }
    v3 = *(_QWORD *)v3;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4B0D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
