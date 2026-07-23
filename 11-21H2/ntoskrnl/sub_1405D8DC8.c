/*
 * XREFs of sub_1405D8DC8 @ 0x1405D8DC8
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405C9F90 (PoSetPowerButtonHoldState.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405D8DC8(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F640);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140C1F784 + dword_140C1F788) & 0x3F);
  if ( a1 )
  {
    qword_140C1F790 |= v5;
    v3 = 1;
    ++dword_140C1F788;
  }
  else
  {
    qword_140C1F790 &= ~v5;
    ++dword_140C1F784;
  }
  if ( v3 != (xmmword_140C1F6F8 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140C1F6F8);
      LODWORD(xmmword_140C1F6F8) = xmmword_140C1F6F8 | 1;
    }
    else
    {
      LODWORD(xmmword_140C1F6F8) = 0;
    }
    sub_14036AAC4((__int64)&unk_140C1F6D0, CriticalWorkQueue);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F640);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
