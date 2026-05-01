/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1804AF7D4
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AFD80 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x1800DDC18 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rbx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v19; // eax
  __int64 (__fastcall *v20)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 *); // rdi
  __int64 *v23; // rax
  int v24; // eax
  int v26; // [rsp+20h] [rbp-39h] BYREF
  __int64 v27; // [rsp+28h] [rbp-31h] BYREF
  __int64 v28; // [rsp+30h] [rbp-29h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-19h] BYREF
  __int64 v31; // [rsp+48h] [rbp-11h] BYREF
  __int64 v32; // [rsp+50h] [rbp-9h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER v34; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0;
  v33 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)off_1807B8740, v7);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
          (HSTRING)v8[1].Reserved.Reserved1,
          v9,
          &v30);
  if ( v10 >= 0 )
  {
    v11 = v30;
    v29 = 0LL;
    v12 = *((_QWORD *)this + 27);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
    v10 = v13(v12, v11, &v29);
    if ( v10 >= 0 )
    {
      v28 = 0LL;
      v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v29;
      v15 = **v29;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      v10 = v15(v14, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v28);
      if ( v10 >= 0 )
      {
        v32 = 0LL;
        v16 = v28;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v32);
        v19 = v17(v16, AddressOf);
        v10 = v19;
        if ( v19 >= 0 )
        {
          v27 = 0LL;
          v20 = **a2;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          v10 = v20((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v27);
          if ( v10 >= 0 )
          {
            v31 = 0LL;
            v21 = v27;
            v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL);
            v23 = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v31);
            v24 = v22(v21, v23);
            v10 = v24;
            if ( v24 >= 0 )
            {
              v26 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v31 + 104LL))(v31, v32, &v26) >= 0 && v26 )
                *a4 = 1;
              v10 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x672,
                (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v24);
            }
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x66C,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v19);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
  return (unsigned int)v10;
}
