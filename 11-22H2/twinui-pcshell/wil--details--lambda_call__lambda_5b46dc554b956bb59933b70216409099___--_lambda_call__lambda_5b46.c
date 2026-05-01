/*
 * XREFs of wil::details::lambda_call__lambda_5b46dc554b956bb59933b70216409099___::_lambda_call__lambda_5b46dc554b956bb59933b70216409099___ @ 0x1804B1F04
 * Callers:
 *     __lambda_1e2111a03014b93961ed011eca3e3935_::operator()_::_1_::dtor$1 @ 0x1804B23A8 (__lambda_1e2111a03014b93961ed011eca3e3935_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804B5AEC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_5b46dc554b956bb59933b70216409099___::_lambda_call__lambda_5b46dc554b956bb59933b70216409099___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
