/*
 * XREFs of wil::details::lambda_call__lambda_184b61f680f02fd487f020fa6450c992___::_lambda_call__lambda_184b61f680f02fd487f020fa6450c992___ @ 0x1805D0390
 * Callers:
 *     _Utils::ProtocolLauncher::TryGetForUriScheme_::_1_::dtor$1 @ 0x18021FF1F (_Utils--ProtocolLauncher--TryGetForUriScheme_--_1_--dtor$1.c)
 * Callees:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_184b61f680f02fd487f020fa6450c992___::_lambda_call__lambda_184b61f680f02fd487f020fa6450c992___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    tip::details::test_common_data<0>::complete(*(_QWORD *)(v1 + 48) + 8LL);
  }
}
