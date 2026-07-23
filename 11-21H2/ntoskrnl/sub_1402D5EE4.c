/*
 * XREFs of sub_1402D5EE4 @ 0x1402D5EE4
 * Callers:
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751A80 @ 0x140751A80 (sub_140751A80.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D5EE4(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C22410);
  if ( a1 )
  {
    _InterlockedExchangeAdd(&dword_140C22434, -dword_140C22430);
    dword_140C22430 = 0;
  }
  else
  {
    _InterlockedAdd(&dword_140C22434, 0xFFFFFFFF);
  }
  if ( !dword_140C22434 )
  {
    qword_140C22438 = 0LL;
    sub_1402D6004(3LL);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C22410);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
