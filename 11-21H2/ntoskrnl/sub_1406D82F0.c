/*
 * XREFs of sub_1406D82F0 @ 0x1406D82F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406D82F0(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  signed __int32 v4; // ett

  v2 = a2 << 7;
  _m_prefetchw((const void *)(a1 + 632));
  do
  {
    v4 = *(_DWORD *)(a1 + 632);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 632), v2 | v4 & 0xFFFFF87F, v4);
  }
  while ( v4 != (_DWORD)result );
  return result;
}
