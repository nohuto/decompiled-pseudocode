/*
 * XREFs of sub_1402500D4 @ 0x1402500D4
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_1403A6D44 @ 0x1403A6D44 (sub_1403A6D44.c)
 *     sub_14056205C @ 0x14056205C (sub_14056205C.c)
 *     sub_1405C9BF0 @ 0x1405C9BF0 (sub_1405C9BF0.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_1409959F8 @ 0x1409959F8 (sub_1409959F8.c)
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 * Callees:
 *     sub_1402501A0 @ 0x1402501A0 (sub_1402501A0.c)
 */

__int64 __fastcall sub_1402500D4(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C240C4);
  v2 = _InterlockedAnd(&dword_140C240C4, ~(1 << a1));
  _m_prefetchw(&stru_140C24040);
  LODWORD(result) = stru_140C24040.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&stru_140C24040, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return sub_1402501A0(v4, 2LL);
  return result;
}
