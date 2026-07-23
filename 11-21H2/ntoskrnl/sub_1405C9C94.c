/*
 * XREFs of sub_1405C9C94 @ 0x1405C9C94
 * Callers:
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 * Callees:
 *     sub_1405CB970 @ 0x1405CB970 (sub_1405CB970.c)
 *     sub_140858820 @ 0x140858820 (sub_140858820.c)
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 */

__int64 __fastcall sub_1405C9C94(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&stru_140C24040, 0xA00u);
    LOBYTE(a3) = 1;
    return sub_14098C0DC(&stru_140C24040, &dword_140C24078, a3);
  }
  else
  {
    sub_1405CB970();
    dword_140C24258 = 0;
    _InterlockedAnd((volatile signed __int32 *)&stru_140C24040, 0xFFFFC1C7);
    result = (unsigned int)dword_140C24070;
    if ( (dword_140C24070 & 4) != 0 )
      return sub_140858820(&stru_140C24040);
  }
  return result;
}
