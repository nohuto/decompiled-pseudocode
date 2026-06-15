/*
 * XREFs of wil::details::ScopeExitFn__lambda_1d448a53601e1cc2f42e562aaac13616___::_ScopeExitFn__lambda_1d448a53601e1cc2f42e562aaac13616___ @ 0x18003BA2C
 * Callers:
 *     _OpenSessionKey_::_1_::dtor$0 @ 0x180049BF9 (_OpenSessionKey_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::ScopeExitFn__lambda_1d448a53601e1cc2f42e562aaac13616___::_ScopeExitFn__lambda_1d448a53601e1cc2f42e562aaac13616___(
        __int64 a1)
{
  _DWORD *v1; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_DWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    if ( !*v1 )
      LODWORD(v1) = RpcRevertToSelf();
  }
  return (int)v1;
}
