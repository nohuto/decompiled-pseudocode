/*
 * XREFs of ?Flush@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ @ 0x18003CD70
 * Callers:
 *     ?EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ @ 0x18003D640 (-EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ.c)
 *     ?Unlock@?$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXXZ @ 0x18009590C (-Unlock@-$IdentifierParser@$00W4TOKEN_TYPE@Composition@UI@Windows@@@Composition@UI@Windows@@QEAA.c)
 *     ??_E?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAPEAXI@Z @ 0x1801974A0 (--_E-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_DeleteTrie@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV?$CTrieNode@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@@Z @ 0x1801978B8 (-_DeleteTrie@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@IEAAXPEAV-$CTrieNode@W4TOKEN_.c)
 */

__int64 __fastcall CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::Flush(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    result = CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::_DeleteTrie();
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 42) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
