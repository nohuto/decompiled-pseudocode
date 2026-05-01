/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179218
 * Callers:
 *     ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179420 (-MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017978C (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 *v10; // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rsi
  __int64 *v13; // rdi
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v24[7]; // [rsp+31h] [rbp-4Fh] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x261,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v27 = 0LL;
  v26 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v27, &v28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v21 = 614LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v28);
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v30,
         v10);
  v5 = v9;
  if ( v9 < 0 )
  {
    v21 = 615LL;
    goto LABEL_15;
  }
  v23 = 0;
  v9 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216, &v23);
  v5 = v9;
  if ( v9 < 0 )
  {
    v21 = 618LL;
    goto LABEL_15;
  }
  v11 = v26;
  v25 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v26 + 136LL);
  v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
  LOBYTE(v14) = v23;
  v15 = v12(v11, v14, v13);
  v5 = v15;
  if ( v15 < 0 )
  {
    v22 = 622LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_8;
  }
  v16 = v27;
  v17 = v25;
  v24[0] = 0;
  v18 = *v27;
  v30 = 0LL;
  v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v18 + 80);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PrelaunchActivated", 0x13u, 0x12u);
  v15 = v19(v16, v30, v17, v24);
  v5 = v15;
  if ( v15 < 0 )
  {
    v22 = 624LL;
    goto LABEL_18;
  }
  v5 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
  return v5;
}
