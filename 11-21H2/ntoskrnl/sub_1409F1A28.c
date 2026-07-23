/*
 * XREFs of sub_1409F1A28 @ 0x1409F1A28
 * Callers:
 *     sub_1406373B8 @ 0x1406373B8 (sub_1406373B8.c)
 *     sub_1409F1A68 @ 0x1409F1A68 (sub_1409F1A68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F1A28(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( *(_QWORD *)(a2 + 64) == 2LL && !*(_DWORD *)(a2 + 132) )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1124));
  return result;
}
