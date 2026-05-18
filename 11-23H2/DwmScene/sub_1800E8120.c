/*
 * XREFs of sub_1800E8120 @ 0x1800E8120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001249C @ 0x18001249C (sub_18001249C.c)
 */

__int64 __fastcall sub_1800E8120(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return sub_18001249C();
  }
  return result;
}
