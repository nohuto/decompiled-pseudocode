/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C864
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C300 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013CC24 (-MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013D2EC (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64); // rdi
  _QWORD *v14; // rax
  __int64 AddressOf; // rax
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 (__fastcall *v20)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rdi
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int64, __int64); // rdi
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 (__fastcall *v40)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v41; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  _QWORD *v46; // rbx
  __int64 v47; // rax
  __int64 (__fastcall *v48)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v49; // rdx
  __int64 v50; // rdx
  _BYTE v51[8]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v52; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-39h] BYREF
  __int64 v54; // [rsp+48h] [rbp-31h] BYREF
  __int64 v55; // [rsp+50h] [rbp-29h] BYREF
  __int64 v56; // [rsp+58h] [rbp-21h] BYREF
  __int64 v57; // [rsp+60h] [rbp-19h] BYREF
  __int64 v58; // [rsp+68h] [rbp-11h] BYREF
  __int64 v59; // [rsp+70h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  __int64 v61; // [rsp+90h] [rbp+17h]
  __int64 v62; // [rsp+98h] [rbp+1Fh] BYREF
  char v63; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = CActivatedEventArgsBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v52 = 0LL;
  v54 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v52, &v56);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v43 = 548LL;
  }
  else
  {
    v10 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v54, &v56);
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v61,
           v10);
    v5 = v9;
    if ( v9 < 0 )
    {
      v43 = 549LL;
    }
    else
    {
      v53 = 0;
      v9 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this + 19) + 48LL))((char *)this + 152, &v53);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v55 = 0LL;
        v11 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 20) + 48LL))((char *)this + 160, &v55);
        v5 = v11;
        if ( v11 < 0 )
        {
          v44 = 555LL;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 21) + 64LL))((char *)this + 168, &v62);
          v5 = v11;
          if ( v11 >= 0 )
          {
            v12 = v54;
            v59 = 0LL;
            v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v54 + 80LL);
            v14 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v59, &v56);
            AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v14);
            v16 = v13(v12, v53, AddressOf);
            v5 = v16;
            if ( v16 < 0 )
            {
              v45 = 562LL;
            }
            else
            {
              v17 = v52;
              v18 = v59;
              v51[0] = 0;
              v19 = *v52;
              v61 = 0LL;
              v20 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v19 + 80);
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"CurrentlyShownApplicationViewId",
                0x20u,
                0x1Fu);
              v16 = v20(v17, v61, v18, v51);
              v5 = v16;
              if ( v16 >= 0 )
              {
                v21 = v55;
                if ( v55 )
                {
                  v46 = v52;
                  v47 = *v52;
                  v61 = 0LL;
                  v48 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v47 + 80);
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"ViewSwitcher",
                    0xDu,
                    0xCu);
                  v16 = v48(v46, v61, v21, v51);
                  v5 = v16;
                  if ( v16 < 0 )
                  {
                    v45 = 568LL;
                    goto LABEL_34;
                  }
                }
                v22 = v54;
                v58 = 0LL;
                v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v54 + 104LL);
                v24 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v58, &v56);
                v25 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v24);
                v26 = v23(v22, v62, v25);
                v5 = v26;
                if ( v26 < 0 )
                {
                  v49 = 572LL;
                }
                else
                {
                  v27 = v52;
                  v28 = v58;
                  v29 = *v52;
                  v61 = 0LL;
                  v30 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v29 + 80);
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"MultiView:AamActivationId",
                    0x1Au,
                    0x19u);
                  v26 = v30(v27, v61, v28, v51);
                  v5 = v26;
                  if ( v26 >= 0 )
                  {
                    v31 = v54;
                    v57 = 0LL;
                    v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v54 + 136LL);
                    v33 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v57, &v56);
                    v34 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v33);
                    LOBYTE(v35) = v63;
                    v36 = v32(v31, v35, v34);
                    v5 = v36;
                    if ( v36 < 0 )
                    {
                      v50 = 576LL;
                    }
                    else
                    {
                      v37 = v52;
                      v38 = v57;
                      v39 = *v52;
                      v61 = 0LL;
                      v40 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v39 + 80);
                      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                        &hstringHeader,
                        L"IsApplicationMultiviewActivationPolicyEnabled",
                        0x2Eu,
                        0x2Du);
                      v36 = v40(v37, v61, v38, v51);
                      v5 = v36;
                      if ( v36 >= 0 )
                      {
                        v5 = 0;
LABEL_15:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v57);
LABEL_16:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v58);
LABEL_17:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v59);
                        goto LABEL_18;
                      }
                      v50 = 577LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v50,
                      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                      (const char *)(unsigned int)v36);
                    goto LABEL_15;
                  }
                  v49 = 573LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v49,
                  (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                  (const char *)(unsigned int)v26);
                goto LABEL_16;
              }
              v45 = 564LL;
            }
LABEL_34:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v45,
              (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
              (const char *)(unsigned int)v16);
            goto LABEL_17;
          }
          v44 = 558LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
          (const char *)(unsigned int)v11);
LABEL_18:
        v41 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        goto LABEL_20;
      }
      v43 = 552LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v43,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)v9);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
  return v5;
}
