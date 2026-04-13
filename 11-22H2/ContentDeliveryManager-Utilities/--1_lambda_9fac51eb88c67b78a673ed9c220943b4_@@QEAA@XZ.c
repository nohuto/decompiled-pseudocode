/*
 * XREFs of ??1_lambda_9fac51eb88c67b78a673ed9c220943b4_@@QEAA@XZ @ 0x18002B498
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180041640 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__Windows::Internal::CHSTRINGResult_::COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__Windows::Internal::CHSTRINGResult___lambda_9fac51eb88c67b78a673ed9c220943b4____::_1_::dtor$1 @ 0x1800D4F78 (_Windows--Internal--COperationLambdaVar_0__lambda_9fac51eb88c67b78a673ed9c220943b4__ea_1800D4F78.c)
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800D5F26 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_9fac51eb88c67b78a673ed9c220943b4_::~_lambda_9fac51eb88c67b78a673ed9c220943b4_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
