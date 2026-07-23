/*
 * XREFs of sub_14025013C @ 0x14025013C
 * Callers:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1405C9E88 @ 0x1405C9E88 (sub_1405C9E88.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 * Callees:
 *     sub_1402501A0 @ 0x1402501A0 (sub_1402501A0.c)
 */

__int64 __fastcall sub_14025013C(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C240C4);
  v2 = _InterlockedOr(&dword_140C240C4, 1 << a1);
  _m_prefetchw(&stru_140C24040);
  LODWORD(result) = stru_140C24040.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&stru_140C24040, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) == 0 )
    return sub_1402501A0(v4, 2LL);
  return result;
}
