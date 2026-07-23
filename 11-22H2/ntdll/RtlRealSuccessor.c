/*
 * XREFs of RtlRealSuccessor @ 0x1800632D0
 * Callers:
 *     RtlEnumerateGenericTable @ 0x180062A40 (RtlEnumerateGenericTable.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x180063270 (RtlEnumerateGenericTableWithoutSplaying.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
