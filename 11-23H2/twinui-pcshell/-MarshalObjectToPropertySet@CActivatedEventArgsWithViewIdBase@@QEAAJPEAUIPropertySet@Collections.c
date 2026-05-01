/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017978C
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179218 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179B58 (-MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rsi
  __int64 *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, __int64 *); // rsi
  __int64 *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 (__fastcall *v28)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, __int64 *); // rsi
  __int64 *v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 (__fastcall *v37)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v38; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 (__fastcall *v45)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v46; // rdx
  __int64 v47; // rdx
  _BYTE v48[8]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v49; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v50; // [rsp+40h] [rbp-39h] BYREF
  __int64 v51; // [rsp+48h] [rbp-31h] BYREF
  __int64 v52; // [rsp+50h] [rbp-29h] BYREF
  __int64 v53; // [rsp+58h] [rbp-21h] BYREF
  __int64 v54; // [rsp+60h] [rbp-19h] BYREF
  __int64 v55; // [rsp+68h] [rbp-11h] BYREF
  __int64 v56; // [rsp+70h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  __int64 v58; // [rsp+90h] [rbp+17h]
  __int64 v59; // [rsp+98h] [rbp+1Fh] BYREF
  char v60; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = CActivatedEventArgsBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v49 = 0LL;
  v51 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v49, &v53);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v40 = 548LL;
  }
  else
  {
    v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v51, &v53);
    v58 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v58,
           v10);
    v5 = v9;
    if ( v9 < 0 )
    {
      v40 = 549LL;
    }
    else
    {
      v50 = 0;
      v9 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this + 19) + 48LL))((char *)this + 152, &v50);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v52 = 0LL;
        v11 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 20) + 48LL))((char *)this + 160, &v52);
        v5 = v11;
        if ( v11 < 0 )
        {
          v41 = 555LL;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 21) + 64LL))((char *)this + 168, &v59);
          v5 = v11;
          if ( v11 >= 0 )
          {
            v12 = v51;
            v56 = 0LL;
            v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v51 + 80LL);
            v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v56, &v53);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
            v15 = v13(v12, v50, v14);
            v5 = v15;
            if ( v15 < 0 )
            {
              v42 = 562LL;
            }
            else
            {
              v16 = v49;
              v17 = v56;
              v48[0] = 0;
              v18 = *v49;
              v58 = 0LL;
              v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v18 + 80);
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"CurrentlyShownApplicationViewId",
                0x20u,
                0x1Fu);
              v15 = v19(v16, v58, v17, v48);
              v5 = v15;
              if ( v15 >= 0 )
              {
                v20 = v52;
                if ( v52 )
                {
                  v43 = v49;
                  v44 = *v49;
                  v58 = 0LL;
                  v45 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v44 + 80);
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"ViewSwitcher",
                    0xDu,
                    0xCu);
                  v15 = v45(v43, v58, v20, v48);
                  v5 = v15;
                  if ( v15 < 0 )
                  {
                    v42 = 568LL;
                    goto LABEL_34;
                  }
                }
                v21 = v51;
                v55 = 0LL;
                v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v51 + 104LL);
                v23 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                    (__int64)&v55,
                                    &v53);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v23);
                v24 = v22(v21, v59, v23);
                v5 = v24;
                if ( v24 < 0 )
                {
                  v46 = 572LL;
                }
                else
                {
                  v25 = v49;
                  v26 = v55;
                  v27 = *v49;
                  v58 = 0LL;
                  v28 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v27 + 80);
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"MultiView:AamActivationId",
                    0x1Au,
                    0x19u);
                  v24 = v28(v25, v58, v26, v48);
                  v5 = v24;
                  if ( v24 >= 0 )
                  {
                    v29 = v51;
                    v54 = 0LL;
                    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v51 + 136LL);
                    v31 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                        (__int64)&v54,
                                        &v53);
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
                    LOBYTE(v32) = v60;
                    v33 = v30(v29, v32, v31);
                    v5 = v33;
                    if ( v33 < 0 )
                    {
                      v47 = 576LL;
                    }
                    else
                    {
                      v34 = v49;
                      v35 = v54;
                      v36 = *v49;
                      v58 = 0LL;
                      v37 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v36 + 80);
                      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                        &hstringHeader,
                        L"IsApplicationMultiviewActivationPolicyEnabled",
                        0x2Eu,
                        0x2Du);
                      v33 = v37(v34, v58, v35, v48);
                      v5 = v33;
                      if ( v33 >= 0 )
                      {
                        v5 = 0;
LABEL_15:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v54);
LABEL_16:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v55);
LABEL_17:
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v56);
                        goto LABEL_18;
                      }
                      v47 = 577LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v47,
                      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                      (const char *)(unsigned int)v33);
                    goto LABEL_15;
                  }
                  v46 = 573LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v46,
                  (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                  (const char *)(unsigned int)v24);
                goto LABEL_16;
              }
              v42 = 564LL;
            }
LABEL_34:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v42,
              (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
              (const char *)(unsigned int)v15);
            goto LABEL_17;
          }
          v41 = 558LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
          (const char *)(unsigned int)v11);
LABEL_18:
        v38 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
        goto LABEL_20;
      }
      v40 = 552LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v40,
    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)v9);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v49);
  return v5;
}
