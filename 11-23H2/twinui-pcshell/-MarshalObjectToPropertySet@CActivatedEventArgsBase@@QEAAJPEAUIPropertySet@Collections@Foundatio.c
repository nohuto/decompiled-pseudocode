/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179B58
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017978C (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::MarshalObjectToPropertySet(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rbx
  unsigned int Ptr; // r14d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rsi
  __int64 *v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v16; // rdi
  unsigned int Ptr_high; // r14d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 *); // rsi
  __int64 *v20; // rdi
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, PVOID, __int64 *); // rsi
  __int64 *v27; // rdi
  int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v31; // rdi
  PVOID v32; // rsi
  PVOID v33; // rsi
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64, __int64 *); // rsi
  __int64 *v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, __int64, __int64 *); // rsi
  __int64 *v44; // rdi
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rbx
  __int64 (__fastcall *v48)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, __int64, __int64 *); // rsi
  __int64 *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rbx
  __int64 (__fastcall *v56)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  __int64 (__fastcall *v59)(__int64, PVOID, __int64 *); // rsi
  __int64 *v60; // rdi
  int v61; // eax
  __int64 v62; // rbx
  __int64 (__fastcall *v63)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 (__fastcall *v66)(__int64, HSTRING_HEADER *, __int64 *); // rsi
  __int64 *v67; // rdi
  int v68; // eax
  __int64 v69; // rbx
  __int64 (__fastcall *v70)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v71; // rdi
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 (__fastcall *v78)(__int64, __int64, PVOID, _BYTE *); // rdi
  __int64 v79; // rbx
  __int64 (__fastcall *v80)(__int64, __int64, PVOID, _BYTE *); // rdi
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  _BYTE v86[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v87; // [rsp+38h] [rbp-61h] BYREF
  __int64 v88; // [rsp+40h] [rbp-59h] BYREF
  __int64 v89; // [rsp+48h] [rbp-51h] BYREF
  __int64 v90; // [rsp+50h] [rbp-49h] BYREF
  __int64 v91; // [rsp+58h] [rbp-41h] BYREF
  __int64 v92; // [rsp+60h] [rbp-39h] BYREF
  __int64 v93; // [rsp+68h] [rbp-31h] BYREF
  __int64 v94; // [rsp+70h] [rbp-29h] BYREF
  __int64 v95; // [rsp+78h] [rbp-21h] BYREF
  __int64 v96; // [rsp+80h] [rbp-19h] BYREF
  __int64 v97; // [rsp+88h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-9h] BYREF
  __int64 v99; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v87 = 0LL;
  v88 = 0LL;
  v4 = **a2;
  v5 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v87, &v89);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  v6 = v4((struct Windows::Foundation::Collections::IPropertySet *)a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v73 = 53LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_31;
  }
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v88, &v89);
  v99 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v99,
         v8);
  v7 = v6;
  if ( v6 < 0 )
  {
    v73 = 54LL;
    goto LABEL_34;
  }
  AcquireSRWLockShared(this + 18);
  v97 = 0LL;
  Ptr = (unsigned int)this[9].Ptr;
  v10 = v88;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v88 + 88LL);
  v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v97, &v89);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
  v13 = v11(v10, Ptr, v12);
  v7 = v13;
  if ( v13 < 0 )
  {
    v74 = 60LL;
  }
  else
  {
    v86[0] = 0;
    v14 = v87;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
    v16 = v97;
    v99 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ActivationKind", 0xFu, 0xEu);
    v13 = v15(v14, v99, v16, v86);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v96 = 0LL;
      Ptr_high = HIDWORD(this[9].Ptr);
      v18 = v88;
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v88 + 88LL);
      v20 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v96, &v89);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
      v21 = v19(v18, Ptr_high, v20);
      v7 = v21;
      if ( v21 < 0 )
      {
        v75 = 66LL;
      }
      else
      {
        v22 = v87;
        v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
        v24 = v96;
        v99 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"PreviousExecutionState",
          0x17u,
          0x16u);
        v21 = v23(v22, v99, v24, v86);
        v7 = v21;
        if ( v21 >= 0 )
        {
          v95 = 0LL;
          v25 = v88;
          v26 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v88 + 104LL);
          v27 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v95, &v89);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v27);
          v28 = v26(v25, this[13].Ptr, v27);
          v7 = v28;
          if ( v28 < 0 )
          {
            v76 = 70LL;
          }
          else
          {
            v29 = v87;
            v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
            v31 = v95;
            v99 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UserContext", 0xCu, 0xBu);
            v28 = v30(v29, v99, v31, v86);
            v7 = v28;
            if ( v28 >= 0 )
            {
              v32 = this[11].Ptr;
              if ( v32 )
              {
                v77 = v87;
                v78 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _BYTE *))(*(_QWORD *)v87 + 80LL);
                v99 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SplashScreen", 0xDu, 0xCu);
                v28 = v78(v77, v99, v32, v86);
                v7 = v28;
                if ( v28 < 0 )
                {
                  v76 = 75LL;
                  goto LABEL_47;
                }
              }
              v33 = this[10].Ptr;
              if ( v33 )
              {
                v79 = v87;
                v80 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _BYTE *))(*(_QWORD *)v87 + 80LL);
                v99 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                  &hstringHeader,
                  L"ActivationValueSetReference",
                  0x1Cu,
                  0x1Bu);
                v28 = v80(v79, v99, v33, v86);
                v7 = v28;
                if ( v28 < 0 )
                {
                  v76 = 80LL;
                  goto LABEL_47;
                }
              }
              v94 = 0LL;
              v34 = v88;
              v35 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v88 + 136LL);
              v36 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&v94,
                                  &v89);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v36);
              LOBYTE(v37) = BYTE6(this[12].Ptr);
              v38 = v35(v34, v37, v36);
              v7 = v38;
              if ( v38 < 0 )
              {
                v81 = 84LL;
              }
              else
              {
                v39 = v87;
                v40 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
                v41 = v94;
                v99 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsForeground", 0xDu, 0xCu);
                v38 = v40(v39, v99, v41, v86);
                v7 = v38;
                if ( v38 >= 0 )
                {
                  v93 = 0LL;
                  v42 = v88;
                  v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v88 + 136LL);
                  v44 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                      (__int64)&v93,
                                      &v89);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v44);
                  LOBYTE(v45) = this[14].Ptr;
                  v46 = v43(v42, v45, v44);
                  v7 = v46;
                  if ( v46 < 0 )
                  {
                    v82 = 88LL;
                  }
                  else
                  {
                    v47 = v87;
                    v48 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
                    v49 = v93;
                    v99 = 0LL;
                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                      &hstringHeader,
                      L"IsHolographic",
                      0xEu,
                      0xDu);
                    v46 = v48(v47, v99, v49, v86);
                    v7 = v46;
                    if ( v46 >= 0 )
                    {
                      v92 = 0LL;
                      v50 = v88;
                      v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v88 + 136LL);
                      v52 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                          (__int64)&v92,
                                          &v89);
                      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v52);
                      LOBYTE(v53) = BYTE5(this[12].Ptr);
                      v54 = v51(v50, v53, v52);
                      v7 = v54;
                      if ( v54 < 0 )
                      {
                        v83 = 92LL;
                      }
                      else
                      {
                        v55 = v87;
                        v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
                        v57 = v92;
                        v99 = 0LL;
                        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                          &hstringHeader,
                          L"IsInitialized",
                          0xEu,
                          0xDu);
                        v54 = v56(v55, v99, v57, v86);
                        v7 = v54;
                        if ( v54 >= 0 )
                        {
                          v91 = 0LL;
                          v58 = v88;
                          v59 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v88 + 104LL);
                          v60 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                              (__int64)&v91,
                                              &v89);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v60);
                          v61 = v59(v58, this[15].Ptr, v60);
                          v7 = v61;
                          if ( v61 < 0 )
                          {
                            v84 = 96LL;
                          }
                          else
                          {
                            v62 = v87;
                            v63 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
                            v64 = v91;
                            v99 = 0LL;
                            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                              &hstringHeader,
                              L"AamActivationId",
                              0x10u,
                              0xFu);
                            v61 = v63(v62, v99, v64, v86);
                            v7 = v61;
                            if ( v61 >= 0 )
                            {
                              v90 = 0LL;
                              v65 = v88;
                              v66 = *(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v88 + 160LL);
                              v67 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                                  (__int64)&v90,
                                                  &v89);
                              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v67);
                              *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)&this[16].Ptr;
                              v68 = v66(v65, &hstringHeader, v67);
                              v7 = v68;
                              if ( v68 < 0 )
                              {
                                v85 = 100LL;
                              }
                              else
                              {
                                v69 = v87;
                                v70 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v87 + 80LL);
                                v71 = v90;
                                v99 = 0LL;
                                Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                  &hstringHeader,
                                  L"AamActivityId",
                                  0xEu,
                                  0xDu);
                                v68 = v70(v69, v99, v71, v86);
                                v7 = v68;
                                if ( v68 >= 0 )
                                {
                                  v7 = 0;
LABEL_22:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v90);
LABEL_23:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v91);
LABEL_24:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v92);
LABEL_25:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v93);
LABEL_26:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v94);
LABEL_27:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v95);
LABEL_28:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v96);
                                  goto LABEL_29;
                                }
                                v85 = 101LL;
                              }
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v85,
                                (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                                (const char *)(unsigned int)v68);
                              goto LABEL_22;
                            }
                            v84 = 97LL;
                          }
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v84,
                            (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                            (const char *)(unsigned int)v61);
                          goto LABEL_23;
                        }
                        v83 = 93LL;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v83,
                        (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                        (const char *)(unsigned int)v54);
                      goto LABEL_24;
                    }
                    v82 = 89LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v82,
                    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                    (const char *)(unsigned int)v46);
                  goto LABEL_25;
                }
                v81 = 85LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v81,
                (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
                (const char *)(unsigned int)v38);
              goto LABEL_26;
            }
            v76 = 71LL;
          }
LABEL_47:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v76,
            (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
            (const char *)(unsigned int)v28);
          goto LABEL_27;
        }
        v75 = 67LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v75,
        (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_28;
    }
    v74 = 62LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v74,
    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v97);
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockShared(this + 18);
LABEL_31:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v87);
  return v7;
}
