/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800E74A0
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8700 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800124FC (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
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
    if ( lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()((__int64)a1, (__int64)i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()((__int64)a1, (__int64)j) )
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
