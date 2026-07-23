/*
 * XREFs of sub_14029CB9C @ 0x14029CB9C
 * Callers:
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 * Callees:
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 */

__int64 __fastcall sub_14029CB9C(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  _InterlockedExchange64((volatile __int64 *)(v3 + 16), *(_QWORD *)(v3 + 32));
  _InterlockedExchange64((volatile __int64 *)(v3 + 24), *(_QWORD *)(v3 + 40));
  _InterlockedExchange64((volatile __int64 *)(v3 + 32), *a2);
  result = _InterlockedExchange64((volatile __int64 *)(v3 + 40), *a2 + a3);
  if ( (*(_DWORD *)(v4 + 152) & 0x200000) != 0 )
  {
    result = *(_DWORD *)(v3 + 24) >> 12;
    if ( (unsigned int)((*(_DWORD *)(v3 + 32) >> 12) - result) > 1 )
      return sub_14023C5D4(v4, 0x200000, 0);
  }
  return result;
}
