/*
 * XREFs of ?OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z @ 0x1800594E4
 * Callers:
 *     ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x1800587C0 (-OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594AC (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::OnSessionStatusNotification(
        InputProviderManager *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  while ( v5 != v6 )
  {
    v10 = 0LL;
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 16);
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v10);
    if ( v8(v7, &GUID_a78e6167_d56f_4297_8f03_6a5ea7fe3025, &v10) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a2, a3);
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v10);
    v5 += 24LL;
  }
  return 0LL;
}
