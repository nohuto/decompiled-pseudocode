/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______ @ 0x180022F4C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x180022F10 (Windows--Internal--COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e___ea_180022F10.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002AA80.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B690 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______(
        _QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  void **result; // rax

  `eh vector destructor iterator'(
    a1 + 4,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
      v4,
      v2,
      v3);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  return result;
}
