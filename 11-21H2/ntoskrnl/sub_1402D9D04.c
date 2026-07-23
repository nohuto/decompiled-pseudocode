/*
 * XREFs of sub_1402D9D04 @ 0x1402D9D04
 * Callers:
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     sub_1402D9DB4 @ 0x1402D9DB4 (sub_1402D9DB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402D9D04(PCUNICODE_STRING SourceString, __int64 a2)
{
  _STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)sub_1402D9DB4(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
