/*
 * XREFs of sub_1800E5D03 @ 0x1800E5D03
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001249C @ 0x18001249C (sub_18001249C.c)
 */

__int64 __fastcall sub_1800E5D03(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    return sub_18001249C();
  }
  return result;
}
