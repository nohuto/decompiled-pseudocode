/*
 * XREFs of ?OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800AF370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180003110 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIWindowChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ABDDC (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIW.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AF9BC (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CUIHierarchy::OnWindowRemoved(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs>::Window(
         a3,
         v9);
  v7 = (unsigned int)*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                        v6,
                        &v11);
  if ( v9[0] )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v9);
  CUIHierarchy::RemoveWindow(a1, &v10, v7);
  result = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  if ( *a2 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return result;
}
