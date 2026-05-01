/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___::Run @ 0x180091BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18008E660 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1801271E0 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180312B9C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___::Run(
        __int64 a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  struct IImmersiveApplication **AddressOf; // rax
  int Application; // eax
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64, GUID *, __int64 *); // rdi
  unsigned __int16 **v9; // r8
  struct HWND__ v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF
  EdpHelpers *v16; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v10[0].unused = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v15 = 0LL;
    v4 = *(_QWORD *)(a1 + 16);
    AddressOf = (struct IImmersiveApplication **)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v15);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(v4 + 152), AddressOf);
    if ( Application >= 0 )
    {
      v14 = 0LL;
      v7 = v15;
      v8 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      if ( v8(v7, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v14) >= 0
        && (*(int (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v14 + 32LL))(v14, &v16) >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v10);
        v11 = -1LL;
        v12 = -1LL;
        if ( (int)EdpHelpers::GetEnterpriseIdForWindow(v16, v10, v9) >= 0 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
          v2 = *(unsigned __int16 **)&v10[0].unused;
          goto LABEL_2;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
LABEL_10:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v10);
    return;
  }
LABEL_2:
  v3 = CApplicationViewBase::SetEnterpriseId((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL), v2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_10;
  }
  if ( v2 )
    CoTaskMemFree(v2);
}
