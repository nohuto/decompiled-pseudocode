/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013CC24
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C864 (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013D2EC (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CActivatedEventArgsBase::MarshalObjectToPropertySet(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  unsigned int Ptr; // esi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rdi
  _QWORD *v12; // rax
  __int64 AddressOf; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v17; // rdi
  unsigned int Ptr_high; // esi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64); // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, PVOID, __int64); // rdi
  _QWORD *v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v34; // rdi
  PVOID v35; // rsi
  PVOID v36; // rsi
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, __int64, __int64); // rdi
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(__int64, __int64, __int64); // rdi
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rbx
  __int64 (__fastcall *v53)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 (__fastcall *v56)(__int64, __int64, __int64); // rdi
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rbx
  __int64 (__fastcall *v62)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 (__fastcall *v65)(__int64, PVOID, __int64); // rdi
  _QWORD *v66; // rax
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rbx
  __int64 (__fastcall *v70)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v71; // rdi
  __int64 v72; // rbx
  __int64 (__fastcall *v73)(__int64, HSTRING_HEADER *, __int64); // rdi
  _QWORD *v74; // rax
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rbx
  __int64 (__fastcall *v78)(__int64, __int64, __int64, _BYTE *); // rsi
  __int64 v79; // rdi
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 (__fastcall *v86)(__int64, __int64, PVOID, _BYTE *); // rdi
  __int64 v87; // rbx
  __int64 (__fastcall *v88)(__int64, __int64, PVOID, _BYTE *); // rdi
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  _BYTE v94[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v95; // [rsp+38h] [rbp-61h] BYREF
  __int64 v96; // [rsp+40h] [rbp-59h] BYREF
  __int64 v97; // [rsp+48h] [rbp-51h] BYREF
  __int64 v98; // [rsp+50h] [rbp-49h] BYREF
  __int64 v99; // [rsp+58h] [rbp-41h] BYREF
  __int64 v100; // [rsp+60h] [rbp-39h] BYREF
  __int64 v101; // [rsp+68h] [rbp-31h] BYREF
  __int64 v102; // [rsp+70h] [rbp-29h] BYREF
  __int64 v103; // [rsp+78h] [rbp-21h] BYREF
  __int64 v104; // [rsp+80h] [rbp-19h] BYREF
  __int64 v105; // [rsp+88h] [rbp-11h] BYREF
  RTL_SRWLOCK *v106[2]; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v108; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v95 = 0LL;
  v96 = 0LL;
  v4 = **a2;
  v5 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v95, v106);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  v6 = v4((struct Windows::Foundation::Collections::IPropertySet *)a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v81 = 53LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_30;
  }
  v8 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v96, v106);
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v108,
         v8);
  v7 = v6;
  if ( v6 < 0 )
  {
    v81 = 54LL;
    goto LABEL_33;
  }
  AcquireSRWLockShared(this + 18);
  v106[0] = this + 18;
  v105 = 0LL;
  Ptr = (unsigned int)this[9].Ptr;
  v10 = v96;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v96 + 88LL);
  v12 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v105, &v97);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v12);
  v14 = v11(v10, Ptr, AddressOf);
  v7 = v14;
  if ( v14 < 0 )
  {
    v82 = 60LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v82,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_29;
  }
  v94[0] = 0;
  v15 = v95;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v17 = v105;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ActivationKind", 0xFu, 0xEu);
  v14 = v16(v15, v108, v17, v94);
  v7 = v14;
  if ( v14 < 0 )
  {
    v82 = 62LL;
    goto LABEL_36;
  }
  v104 = 0LL;
  Ptr_high = HIDWORD(this[9].Ptr);
  v19 = v96;
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v96 + 88LL);
  v21 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v104, &v97);
  v22 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v21);
  v23 = v20(v19, Ptr_high, v22);
  v7 = v23;
  if ( v23 < 0 )
  {
    v83 = 66LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v83,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_28;
  }
  v24 = v95;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v26 = v104;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PreviousExecutionState", 0x17u, 0x16u);
  v23 = v25(v24, v108, v26, v94);
  v7 = v23;
  if ( v23 < 0 )
  {
    v83 = 67LL;
    goto LABEL_39;
  }
  v103 = 0LL;
  v27 = v96;
  v28 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v96 + 104LL);
  v29 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v103, &v97);
  v30 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v29);
  v31 = v28(v27, this[13].Ptr, v30);
  v7 = v31;
  if ( v31 < 0 )
  {
    v84 = 70LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v84,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_27;
  }
  v32 = v95;
  v33 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v34 = v103;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UserContext", 0xCu, 0xBu);
  v31 = v33(v32, v108, v34, v94);
  v7 = v31;
  if ( v31 < 0 )
  {
    v84 = 71LL;
    goto LABEL_46;
  }
  v35 = this[11].Ptr;
  if ( v35 )
  {
    v85 = v95;
    v86 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _BYTE *))(*(_QWORD *)v95 + 80LL);
    v108 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SplashScreen", 0xDu, 0xCu);
    v31 = v86(v85, v108, v35, v94);
    v7 = v31;
    if ( v31 < 0 )
    {
      v84 = 75LL;
      goto LABEL_46;
    }
  }
  v36 = this[10].Ptr;
  if ( v36 )
  {
    v87 = v95;
    v88 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _BYTE *))(*(_QWORD *)v95 + 80LL);
    v108 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ActivationValueSetReference",
      0x1Cu,
      0x1Bu);
    v31 = v88(v87, v108, v36, v94);
    v7 = v31;
    if ( v31 < 0 )
    {
      v84 = 80LL;
      goto LABEL_46;
    }
  }
  v102 = 0LL;
  v37 = v96;
  v38 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v96 + 136LL);
  v39 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v102, &v97);
  v40 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v39);
  LOBYTE(v41) = BYTE6(this[12].Ptr);
  v42 = v38(v37, v41, v40);
  v7 = v42;
  if ( v42 < 0 )
  {
    v89 = 84LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v89,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v42);
    goto LABEL_26;
  }
  v43 = v95;
  v44 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v45 = v102;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsForeground", 0xDu, 0xCu);
  v42 = v44(v43, v108, v45, v94);
  v7 = v42;
  if ( v42 < 0 )
  {
    v89 = 85LL;
    goto LABEL_49;
  }
  v101 = 0LL;
  v46 = v96;
  v47 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v96 + 136LL);
  v48 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v101, &v97);
  v49 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v48);
  LOBYTE(v50) = this[14].Ptr;
  v51 = v47(v46, v50, v49);
  v7 = v51;
  if ( v51 < 0 )
  {
    v90 = 88LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v90,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v51);
    goto LABEL_25;
  }
  v52 = v95;
  v53 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v54 = v101;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsHolographic", 0xEu, 0xDu);
  v51 = v53(v52, v108, v54, v94);
  v7 = v51;
  if ( v51 < 0 )
  {
    v90 = 89LL;
    goto LABEL_52;
  }
  v100 = 0LL;
  v55 = v96;
  v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v96 + 136LL);
  v57 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v100, &v97);
  v58 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v57);
  LOBYTE(v59) = BYTE5(this[12].Ptr);
  v60 = v56(v55, v59, v58);
  v7 = v60;
  if ( v60 < 0 )
  {
    v91 = 92LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v91,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v60);
    goto LABEL_24;
  }
  v61 = v95;
  v62 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v63 = v100;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsInitialized", 0xEu, 0xDu);
  v60 = v62(v61, v108, v63, v94);
  v7 = v60;
  if ( v60 < 0 )
  {
    v91 = 93LL;
    goto LABEL_55;
  }
  v99 = 0LL;
  v64 = v96;
  v65 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v96 + 104LL);
  v66 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v99, &v97);
  v67 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v66);
  v68 = v65(v64, this[15].Ptr, v67);
  v7 = v68;
  if ( v68 < 0 )
  {
    v92 = 96LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v92,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v68);
    goto LABEL_23;
  }
  v69 = v95;
  v70 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v71 = v99;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AamActivationId", 0x10u, 0xFu);
  v68 = v70(v69, v108, v71, v94);
  v7 = v68;
  if ( v68 < 0 )
  {
    v92 = 97LL;
    goto LABEL_58;
  }
  v98 = 0LL;
  v72 = v96;
  v73 = *(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64))(*(_QWORD *)v96 + 160LL);
  v74 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v98, &v97);
  v75 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v74);
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)&this[16].Ptr;
  v76 = v73(v72, &hstringHeader, v75);
  v7 = v76;
  if ( v76 < 0 )
  {
    v93 = 100LL;
LABEL_61:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v93,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v76);
    goto LABEL_22;
  }
  v77 = v95;
  v78 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v95 + 80LL);
  v79 = v98;
  v108 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AamActivityId", 0xEu, 0xDu);
  v76 = v78(v77, v108, v79, v94);
  v7 = v76;
  if ( v76 < 0 )
  {
    v93 = 101LL;
    goto LABEL_61;
  }
  v7 = 0;
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v98);
LABEL_23:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v99);
LABEL_24:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v100);
LABEL_25:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v101);
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v102);
LABEL_27:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v103);
LABEL_28:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v104);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v105);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v106);
LABEL_30:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v96);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v95);
  return v7;
}
