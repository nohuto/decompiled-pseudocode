/*
 * XREFs of ?Translation@?$consume_Windows_UI_Xaml_IUIElement9@UBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat3@Numerics@Foundation@Windows@3@@Z @ 0x18065C8A0
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::Controls::Border>::Translation(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD *),
        __int64 *a2)
{
  void (__fastcall ***v3)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rbx
  void (__fastcall **v5)(_QWORD, void *, _QWORD *); // rax
  signed int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  void (__fastcall ***v9)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v10)(_QWORD, void *, _QWORD *); // [rsp+48h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v9 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement9>, &v9);
    v3 = v9;
    v4 = v9;
  }
  else
  {
    v4 = 0LL;
  }
  v10 = v3;
  v5 = *v3;
  v7 = *a2;
  v8 = *((_DWORD *)a2 + 2);
  v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *), __int64 *))v5[11])(v3, &v7);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
}
