/*
 * XREFs of ?_DeleteTrie@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV?$CTrieNode@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@@Z @ 0x1801978B8
 * Callers:
 *     ?Flush@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ @ 0x18003CD70 (-Flush@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ.c)
 *     ?_DeleteTrie@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV?$CTrieNode@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@@Z @ 0x1801978B8 (-_DeleteTrie@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV-$CTrieNode@W4TOKEN_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?_DeleteTrie@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV?$CTrieNode@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@@Z @ 0x1801978B8 (-_DeleteTrie@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV-$CTrieNode@W4TOKEN_.c)
 */

void __fastcall CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::_DeleteTrie(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      if ( v2[2] )
      {
        CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::_DeleteTrie(a1);
        v2[2] = 0LL;
      }
      v4 = (_QWORD *)v2[1];
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
