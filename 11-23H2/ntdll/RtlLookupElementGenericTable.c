/*
 * XREFs of RtlLookupElementGenericTable @ 0x180062D10
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180062D58 (FindNodeOrParent.c)
 *     RtlSplay @ 0x180062E00 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &Links) != 1 )
    return 0LL;
  v3 = Links;
  Table->TableRoot = RtlSplay(Links);
  return &v3[1].RightChild;
}
