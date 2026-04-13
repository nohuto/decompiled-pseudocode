/*
 * XREFs of ??1_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@QEAA@XZ @ 0x1800281D8
 * Callers:
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_bd2c9ce24b7a5ce2e1d9cd7856918807____::_1_::dtor$2 @ 0x1800EE327 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800EE327.c)
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800EF1AB (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_::~_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
