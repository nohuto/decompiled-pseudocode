/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_81c5145ef34e7f56f193ed620fca7ca3___ @ 0x18067946C
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067BCE0 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_81c5145ef34e7f56f193ed620fca7ca3_::operator() @ 0x18067A324 (_lambda_81c5145ef34e7f56f193ed620fca7ca3_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_81c5145ef34e7f56f193ed620fca7ca3___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( (unsigned __int8)lambda_81c5145ef34e7f56f193ed620fca7ca3_::operator()(a1, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !(unsigned __int8)lambda_81c5145ef34e7f56f193ed620fca7ca3_::operator()(a1, j) )
      {
        std::shared_ptr<KBViewInfo>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
