/*
 * XREFs of ?query_interface@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7108
 * Callers:
 *     ?QueryInterface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B6120 (-QueryInterface@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@U.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8 (-make_weak_ref@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  void *weak_ref; // rax

  v3 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v12 = *((_QWORD *)v3 + 1);
    while ( v12 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(v3 + 1, v12 + 1, v12);
      v13 = v12 == v15;
      v12 = v15;
      if ( v13 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
    v12 = *((_QWORD *)v3 + 1);
    while ( v12 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(v3 + 1, v12 + 1, v12);
      v13 = v12 == v16;
      v12 = v16;
      if ( v13 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      return winrt::impl::make_marshaler(v17, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v8, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 56))(v3);
      v12 = *((_QWORD *)v3 + 1);
      while ( v12 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(v3 + 1, v12 + 1, v12);
        v13 = v12 == v18;
        v12 = v18;
        if ( v13 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !(unsigned __int8)winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))v3)(v3, a2, a3);
        weak_ref = winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref(v3);
        *a3 = (__int64)weak_ref;
        return weak_ref == 0LL ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      v12 = *((_QWORD *)v3 + 1);
      while ( v12 >= 0 )
      {
        v14 = _InterlockedCompareExchange64(v3 + 1, v12 + 1, v12);
        v13 = v12 == v14;
        v12 = v14;
        if ( v13 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
  return 0LL;
}
