/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1803D2908
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D2EB4 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  __int64 *v19; // rax
  int v20; // eax
  __int64 (__fastcall *v21)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64 *); // rdi
  __int64 *v24; // rax
  int v25; // eax
  int v27; // [rsp+20h] [rbp-39h] BYREF
  __int64 v28; // [rsp+28h] [rbp-31h] BYREF
  __int64 v29; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-21h] BYREF
  __int64 v31; // [rsp+40h] [rbp-19h] BYREF
  __int64 v32; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-1h] BYREF
  _BYTE v35[32]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0;
  v34 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v35, (const WCHAR **)off_18061DB90, v7);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v34, *(_QWORD *)(v8 + 24), v9, &v30);
  if ( v10 >= 0 )
  {
    v11 = v30;
    v33 = 0LL;
    v12 = *((_QWORD *)this + 28);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v33);
    v10 = v13(v12, v11, AddressOf);
    if ( v10 >= 0 )
    {
      v29 = 0LL;
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
      v16 = **v33;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      v10 = v16(v15, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v29);
      if ( v10 >= 0 )
      {
        v32 = 0LL;
        v17 = v29;
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL);
        v19 = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v32);
        v20 = v18(v17, v19);
        v10 = v20;
        if ( v20 >= 0 )
        {
          v28 = 0LL;
          v21 = **a2;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
          v10 = v21((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v28);
          if ( v10 >= 0 )
          {
            v31 = 0LL;
            v22 = v28;
            v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
            v24 = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v31);
            v25 = v23(v22, v24);
            v10 = v25;
            if ( v25 >= 0 )
            {
              v27 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v31 + 104LL))(v31, v32, &v27) >= 0 && v27 )
                *a4 = 1;
              v10 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x67E,
                (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v25);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x678,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v33);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
  return (unsigned int)v10;
}
