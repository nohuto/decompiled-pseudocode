/*
 * XREFs of sub_1402A45CC @ 0x1402A45CC
 * Callers:
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 */

__int64 __fastcall sub_1402A45CC(__int64 a1)
{
  __int64 result; // rax

  result = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), 0, 0);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + 504), 1, 0);
  }
  return result;
}
