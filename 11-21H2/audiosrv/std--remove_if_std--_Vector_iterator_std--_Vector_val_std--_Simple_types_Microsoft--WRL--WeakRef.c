/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800DEF04
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E0F34 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800DF5F4 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 **result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, j) )
      {
        v7 = 0LL;
        if ( &v10 != j )
        {
          v7 = *j;
          *j = 0LL;
        }
        v8 = *i;
        *i = v7;
        v10 = v8;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
        ++i;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
