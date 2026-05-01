/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B690
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x180022E10 (Windows--Internal--COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ea_180022E10.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x180022EA0 (Windows--Internal--COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d___ea_180022EA0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______ @ 0x180022F4C (Windows--Internal--COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e___ea_180022F4C.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002A48C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x18002A65C (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x180038250 (Windows--Internal--COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b___ea_180038250.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800382C0 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703___ea_1800382C0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180038330 (Windows--Internal--COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c___ea_180038330.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180041D90 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3___ea_180041D90.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180042AE0 (Windows--Internal--COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c___ea_180042AE0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B70C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
