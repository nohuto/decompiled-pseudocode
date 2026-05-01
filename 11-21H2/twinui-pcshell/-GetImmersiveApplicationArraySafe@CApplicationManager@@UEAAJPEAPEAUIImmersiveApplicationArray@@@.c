/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801240B0
 * Callers:
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180123D50 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180125240 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1802E2F70 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rsi
  int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  int v18; // [rsp+88h] [rbp+48h]
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF
  _QWORD *v20; // [rsp+98h] [rbp+58h]

  *a2 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    *v5 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>::`vftable';
    *((_DWORD *)v5 + 5) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v8[1] = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v8[3] = 0LL;
    v4 = v8;
    v20 = v8;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = -2147024882;
  if ( v8 )
  {
    v4[3] = 0LL;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      *v10 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
      v10[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
      v10[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
      *((_DWORD *)v10 + 6) = 1;
      *((_DWORD *)v10 + 7) = 4;
      *((_DWORD *)v10 + 8) = 0;
      v10[5] = 0LL;
      v10[6] = 0LL;
      v10[7] = 0LL;
      v10[8] = 0LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v10)(
             v10,
             &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
             v4 + 3);
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v4)(
               v4,
               &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
               &v19);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  v18 = v9;
  v12 = v19;
  if ( v9 >= 0 )
  {
    v13 = v19;
    v14 = v19;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, v6, v7);
      v12 = v19;
    }
    v15 = *((_QWORD *)this + 49);
    v16 = 0LL;
    if ( v15 )
    {
      do
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 64LL))(
               v14,
               *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v16));
        v18 = v9;
        if ( v9 < 0 )
          break;
        ++v16;
      }
      while ( v16 < v15 );
      v12 = v19;
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = v19;
      v9 = v18;
    }
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplicationArray **))v12)(
             v12,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
      v12 = v19;
    }
  }
  if ( v12 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v9;
}
