/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1402A3840
 * Callers:
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     sub_1402A6980 @ 0x1402A6980 (sub_1402A6980.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = sub_1402A3A14(a1, 6LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
