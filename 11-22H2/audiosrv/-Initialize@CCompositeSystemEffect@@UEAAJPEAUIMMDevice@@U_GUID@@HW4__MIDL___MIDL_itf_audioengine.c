/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002B1C0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0FC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v9; // edi
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // r12
  int v14; // eax
  __int64 *v15; // r14
  int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // ebx
  struct IAudioSystemEffects2 **v21; // r15
  __int64 (__fastcall ****v22)(_QWORD, GUID *, __int64 **); // rax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 **); // rdi
  __int64 (__fastcall *v24)(_QWORD, GUID *, __int64 **); // rbx
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // r8
  int v28; // edi
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rax
  LPVOID *v32; // rdx
  LPVOID v33; // rcx
  unsigned int v34; // edx
  struct IAudioProcessingObject **v35; // rdi
  struct IAudioProcessingObject **v36; // rbx
  bool v38; // sf
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r13d
  int v42; // r12d
  char *v43; // rdi
  int v44; // r15d
  int v45; // r14d
  int v46; // esi
  LPVOID v47; // rcx
  struct IAudioSystemEffects2 **v48; // rbx
  __int64 v49; // rdx
  int v50; // [rsp+28h] [rbp-A1h]
  char *v51; // [rsp+30h] [rbp-99h]
  unsigned __int64 v52; // [rsp+38h] [rbp-91h]
  LPVOID pv; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v54; // [rsp+90h] [rbp-39h] BYREF
  char *v55; // [rsp+98h] [rbp-31h]
  struct _GUID v56; // [rsp+A8h] [rbp-21h] BYREF
  char *v57; // [rsp+B8h] [rbp-11h]
  int v58; // [rsp+C0h] [rbp-9h]
  int v59; // [rsp+C4h] [rbp-5h]
  __int64 v60[8]; // [rsp+C8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+47h]
  int v62; // [rsp+118h] [rbp+4Fh] BYREF
  struct _GUID *v63; // [rsp+128h] [rbp+5Fh]
  int v64; // [rsp+130h] [rbp+67h]

  v64 = a4;
  v63 = a3;
  v9 = 0;
  if ( *((int *)this + 24) <= 0 )
  {
    v15 = (__int64 *)((char *)this + 104);
    v13 = (_QWORD *)((char *)this + 88);
    v57 = (char *)this + 88;
LABEL_15:
    v20 = 0;
    v62 = 0;
    v21 = a7;
    if ( *((int *)this + 28) > 0 )
    {
      while ( 1 )
      {
        v54 = 0LL;
        pv = 0LL;
        v22 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                                       v15,
                                                                       (unsigned int)v20);
        v23 = *v22;
        v24 = ***v22;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
        LODWORD(v55) = v24(v23, &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6, &v54);
        if ( (int)v55 < 0 )
          break;
        v25 = *v54;
        v26 = v62;
        v27 = *v13 + 16LL * v62;
        v56 = *v63;
        v52 = (unsigned __int64)&pv & -(__int64)(v21 != 0LL);
        v50 = v64;
        LODWORD(v55) = (*(__int64 (__fastcall **)(__int64 *, struct IMMDevice *, __int64, struct _GUID *))(v25 + 24))(
                         v54,
                         a2,
                         v27,
                         &v56);
        if ( (int)v55 < 0 )
          goto LABEL_57;
        v28 = *((_DWORD *)this + 32);
        v29 = *((_DWORD *)this + 33);
        if ( v28 == v29 )
        {
          if ( v29 )
          {
            v38 = (v28 & 0x40000000) != 0;
            v30 = 2 * v28;
            if ( v38 )
              goto LABEL_55;
          }
          else
          {
            v30 = 1;
          }
          if ( v30 > 0xFFFFFFFuLL || (v31 = _o__recalloc(*((_QWORD *)this + 15), v30, 8LL)) == 0 )
          {
LABEL_55:
            v12 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x314,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              v50);
            Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&pv);
            goto LABEL_59;
          }
          *((_DWORD *)this + 33) = v30;
          *((_QWORD *)this + 15) = v31;
        }
        v32 = (LPVOID *)(*((_QWORD *)this + 15) + 8LL * *((int *)this + 32));
        if ( v32 )
        {
          *v32 = pv;
          v33 = pv;
          if ( pv )
          {
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 8LL))(pv);
            v33 = pv;
          }
        }
        else
        {
          v33 = pv;
        }
        ++*((_DWORD *)this + 32);
        if ( v33 )
        {
          pv = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
        v20 = v26 + 1;
        v62 = v20;
        if ( v20 >= *((_DWORD *)this + 28) )
          goto LABEL_30;
      }
      v26 = v62;
LABEL_57:
      v58 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v13, v26) + 15);
      v59 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v13, v26) + 14);
      v56.Data1 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         v13,
                                         v26)
                                     + 13);
      v41 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v13, v26) + 12);
      v42 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v13, v26) + 11);
      v43 = v57;
      v44 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v57, v26) + 10);
      v45 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v43, v26) + 9);
      v46 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v43, v26) + 8);
      LODWORD(v43) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                             v43,
                                             v26)
                                         + 6);
      LODWORD(v52) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                             v57,
                                             v26)
                                         + 4);
      LODWORD(v51) = *(_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                  v57,
                                  (unsigned int)v62);
      v12 = (unsigned int)v55;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x318,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v55,
        (unsigned __int64)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v51,
        v52,
        (_DWORD)v43,
        v46,
        v45,
        v44,
        v42,
        v41,
        v56.Data1,
        v59,
        v58);
      v47 = pv;
      if ( pv )
      {
        pv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v47 + 16LL))(v47);
      }
LABEL_59:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
      return v12;
    }
LABEL_30:
    v60[0] = 0LL;
    if ( (**(int (__fastcall ***)(CCompositeSystemEffect *, GUID *, __int64 *))this)(
           this,
           &GUID_25385759_3236_4101_a943_25693dfb5d2d,
           v60) >= 0 )
      *((_DWORD *)this + 19) = 1;
    if ( *((_DWORD *)this + 28) == 1 )
    {
      v35 = a6;
      if ( a6 )
      {
        v36 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                  v15,
                                                  0LL);
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v36);
        *v35 = *v36;
      }
      if ( v21 )
      {
        if ( *((int *)this + 32) <= 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v34);
          __debugbreak();
        }
        v48 = (struct IAudioSystemEffects2 **)*((_QWORD *)this + 15);
        if ( *v48 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))(*v48)->lpVtbl->AddRef)(*v48);
        *v21 = *v48;
      }
      goto LABEL_36;
    }
    if ( a6
      && (v39 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
                  this,
                  &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10),
          v12 = v39,
          v39 < 0) )
    {
      v49 = 814LL;
    }
    else
    {
      if ( !v21
        || (v39 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                    this,
                    &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                    v21),
            v12 = v39,
            v39 >= 0) )
      {
LABEL_36:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v60);
        return 0LL;
      }
      v49 = 817LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v39,
      v50);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v60);
    return v12;
  }
  while ( 1 )
  {
    *(_QWORD *)&v56.Data1 = 0LL;
    pv = 0LL;
    GetId = a2->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv);
    v12 = v11;
    if ( v11 < 0 )
    {
      v40 = 768LL;
      goto LABEL_49;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v56);
    v13 = (_QWORD *)((char *)this + 88);
    v57 = (char *)this + 88;
    v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)this + 88, v9);
    v62 = *((_DWORD *)this + 18);
    v54 = (__int64 *)pv;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
            &v56,
            (__int64 *)&v54,
            (unsigned int *)&v62,
            v14);
    v12 = v11;
    if ( v11 < 0 )
    {
      v40 = 770LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v11,
        v50);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      goto LABEL_50;
    }
    v15 = (__int64 *)((char *)this + 104);
    v16 = *((_DWORD *)this + 28);
    if ( v16 == *((_DWORD *)this + 29) )
      break;
LABEL_10:
    v19 = (_QWORD *)(*((_QWORD *)this + 13) + 8LL * *((int *)this + 28));
    if ( v19 )
    {
      *v19 = *(_QWORD *)&v56.Data1;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v19);
    }
    ++*((_DWORD *)this + 28);
    if ( pv )
      CoTaskMemFree(pv);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v56);
    if ( (signed int)++v9 >= *((_DWORD *)this + 24) )
      goto LABEL_15;
  }
  if ( *((_DWORD *)this + 29) )
  {
    v38 = (v16 & 0x40000000) != 0;
    v17 = 2 * v16;
    if ( v38 )
      goto LABEL_45;
  }
  else
  {
    v17 = 1;
  }
  if ( v17 <= 0xFFFFFFFuLL )
  {
    v18 = _o__recalloc(*v15, v17, 8LL);
    if ( v18 )
    {
      *((_DWORD *)this + 29) = v17;
      *v15 = v18;
      goto LABEL_10;
    }
  }
LABEL_45:
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x304,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v50);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_50:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v56);
  return v12;
}
