/*
 * XREFs of ??R_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEBAXXZ @ 0x18042F824
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@X$$V@Details@Platform@@UEAAXXZ @ 0x1804357E0 (-Invoke@-$__abi_FunctorCapture@V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@X$$V@Details@Platform.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1800F4710 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::operator()(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, __int64, __int64 *); // rdi
  __int64 (__fastcall ***v21)(_QWORD, __int64, __int64 *); // rsi
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rcx
  RTL_SRWLOCK *v25; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, __int64, __int64 *); // [rsp+58h] [rbp+10h]
  __int64 (__fastcall ***v27)(_QWORD, __int64, __int64 *); // [rsp+60h] [rbp+18h]
  __int64 v28; // [rsp+68h] [rbp+20h]

  wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 224LL));
  v2 = *(_QWORD **)(a1 + 8);
  v3 = v2[17];
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 216LL))(v3, v2[19]);
    if ( v4 < 0 )
    {
      __abi_WinRTraiseException(v4);
      __debugbreak();
    }
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v5 + 152) = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 136) + 88LL))(
           *(_QWORD *)(v5 + 136),
           *(_QWORD *)(v5 + 160));
    if ( v6 < 0 )
    {
      __abi_WinRTraiseException(v6);
      __debugbreak();
    }
    v7 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v7 + 160) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 136) + 168LL))(
           *(_QWORD *)(v7 + 136),
           *(_QWORD *)(v7 + 192));
    if ( v8 < 0 )
    {
      __abi_WinRTraiseException(v8);
      __debugbreak();
    }
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v9 + 192) = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 136) + 104LL))(
            *(_QWORD *)(v9 + 136),
            *(_QWORD *)(v9 + 168));
    if ( v10 < 0 )
    {
      __abi_WinRTraiseException(v10);
      __debugbreak();
    }
    v11 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v11 + 168) = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 136) + 120LL))(
            *(_QWORD *)(v11 + 136),
            *(_QWORD *)(v11 + 176));
    if ( v12 < 0 )
    {
      __abi_WinRTraiseException(v12);
      __debugbreak();
    }
    v13 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v13 + 176) = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 136) + 136LL))(
            *(_QWORD *)(v13 + 136),
            *(_QWORD *)(v13 + 184));
    if ( v14 < 0 )
    {
      __abi_WinRTraiseException(v14);
      __debugbreak();
    }
    v2 = *(_QWORD **)(a1 + 8);
    v2[23] = 0LL;
  }
  v15 = v2[18];
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 272LL))(v15, v2[27]);
    if ( v16 < 0 )
    {
      __abi_WinRTraiseException(v16);
      __debugbreak();
    }
    v2 = *(_QWORD **)(a1 + 8);
    v2[27] = 0LL;
  }
  v17 = v2[16];
  if ( v17 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 104LL))(v17, v2[25]);
    if ( v18 < 0 )
    {
      __abi_WinRTraiseException(v18);
      __debugbreak();
    }
    v19 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v19 + 200) = 0LL;
    v20 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(*(_QWORD *)(v19 + 128));
    v26 = v20;
    v21 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_cast_to(
                                                                  0,
                                                                  v20,
                                                                  (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v27 = v21;
    v22 = __abi_winrt_cast_to(
            0,
            v21,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v28 = v22;
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 328LL))(
            v22,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL));
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v21)[2])(v21);
    if ( v20 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v20)[2])(v20);
    v2 = *(_QWORD **)(a1 + 8);
    v2[26] = 0LL;
  }
  v24 = v2[6];
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
}
