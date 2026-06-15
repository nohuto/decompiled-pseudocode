/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800053E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001CF90 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C8FE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  int v7; // r14d
  struct IMMDevice *v8; // r12
  int v10; // edi
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // esi
  struct IMMDevice *v15; // rcx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  struct IMMDevice **v21; // rdx
  unsigned int v22; // edi
  int v23; // eax
  struct IAudioSystemEffects2 **v24; // r15
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(LPVOID, struct IMMDevice *, __int64, struct _GUID *); // r11
  LPVOID *v27; // rax
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // r14d
  __int64 v31; // rax
  _QWORD *v32; // r8
  LPVOID v33; // rcx
  LPVOID v34; // rcx
  struct IAudioProcessingObject **v35; // rdi
  struct IAudioProcessingObject **v36; // rsi
  struct IAudioProcessingObject *v37; // rcx
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned int v43; // ebx
  char *v44; // rbx
  int v45; // r13d
  int v46; // r12d
  int v47; // r15d
  int v48; // r14d
  int v49; // esi
  int v50; // edi
  LPVOID v51; // rcx
  struct IAudioSystemEffects2 **v52; // rbx
  int v53; // eax
  unsigned int v54; // ebx
  int v55; // [rsp+20h] [rbp-91h]
  char *v56; // [rsp+28h] [rbp-89h]
  __int64 v57; // [rsp+30h] [rbp-81h]
  struct IMMDevice *v58; // [rsp+80h] [rbp-31h] BYREF
  LPVOID v59; // [rsp+88h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-21h] BYREF
  int v61; // [rsp+98h] [rbp-19h]
  int v62; // [rsp+9Ch] [rbp-15h]
  int v63; // [rsp+A0h] [rbp-11h]
  struct _GUID v64; // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]
  unsigned int v66; // [rsp+100h] [rbp+4Fh] BYREF
  struct _GUID *v67; // [rsp+110h] [rbp+5Fh]
  int v68; // [rsp+118h] [rbp+67h]

  v68 = a4;
  v67 = a3;
  v7 = a4;
  v8 = a2;
  v10 = 0;
  if ( *((int *)this + 18) <= 0 )
  {
LABEL_23:
    v22 = 0;
    v66 = 0;
    v23 = *((_DWORD *)this + 22);
    v24 = a7;
    if ( v23 <= 0 )
    {
LABEL_46:
      if ( v23 == 1 )
      {
        v35 = a6;
        if ( a6 )
        {
          if ( *((int *)this + 22) <= 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
            __debugbreak();
          }
          v36 = (struct IAudioProcessingObject **)*((_QWORD *)this + 10);
          v37 = *v36;
          if ( *v36 )
          {
            ((void (__fastcall *)(struct IAudioProcessingObject *))v37->lpVtbl->AddRef)(v37);
            v37 = *v36;
          }
          *v35 = v37;
        }
        if ( v24 )
        {
          if ( *((int *)this + 26) <= 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
            __debugbreak();
          }
          v52 = (struct IAudioSystemEffects2 **)*((_QWORD *)this + 12);
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v52);
          *v24 = *v52;
        }
      }
      else
      {
        if ( a6 )
        {
          v39 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
                  this,
                  &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10);
          v40 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x31C,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v39,
              v55);
            return v40;
          }
        }
        if ( v24 )
        {
          v53 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                  this,
                  &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                  v24);
          v54 = v53;
          if ( v53 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x31F,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v53,
              v55);
            return v54;
          }
        }
      }
      return 0LL;
    }
    v25 = 0LL;
    while ( 1 )
    {
      pv = 0LL;
      v59 = 0LL;
      if ( (v22 & 0x80000000) != 0 || (signed int)v22 >= *((_DWORD *)this + 22) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        __debugbreak();
      }
      v61 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, LPVOID *))(v25 + *((_QWORD *)this + 10)))(
              *(_QWORD *)(v25 + *((_QWORD *)this + 10)),
              &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6,
              &pv);
      if ( v61 < 0 )
        break;
      v26 = *(__int64 (__fastcall **)(LPVOID, struct IMMDevice *, __int64, struct _GUID *))(*(_QWORD *)pv + 24LL);
      if ( v24 )
        v27 = &v59;
      else
        HIDWORD(v27) = 0;
      v28 = *((_QWORD *)this + 8) + 16LL * (int)v22;
      v64 = *v67;
      HIDWORD(v57) = HIDWORD(v27);
      v55 = v7;
      v61 = v26(pv, v8, v28, &v64);
      if ( v61 < 0 )
        break;
      LODWORD(a2) = *((_DWORD *)this + 26);
      v29 = *((_DWORD *)this + 27);
      if ( (_DWORD)a2 == v29 )
      {
        if ( v29 )
        {
          v30 = 2 * (_DWORD)a2;
          if ( ((unsigned int)a2 & 0x40000000) != 0 )
            goto LABEL_71;
        }
        else
        {
          v30 = 1;
        }
        if ( v30 > 0xFFFFFFFuLL || (v31 = _o__recalloc(*((_QWORD *)this + 12), v30, 8LL)) == 0 )
        {
LABEL_71:
          v43 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v55);
          goto LABEL_73;
        }
        *((_DWORD *)this + 27) = v30;
        *((_QWORD *)this + 12) = v31;
        LODWORD(a2) = *((_DWORD *)this + 26);
        v7 = v68;
      }
      v32 = (_QWORD *)(*((_QWORD *)this + 12) + 8LL * (int)a2);
      if ( v32 )
      {
        *v32 = v59;
        v33 = v59;
        if ( v59 )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v59 + 8LL))(v59);
          v33 = v59;
        }
        LODWORD(a2) = *((_DWORD *)this + 26);
      }
      else
      {
        v33 = v59;
      }
      *((_DWORD *)this + 26) = (_DWORD)a2 + 1;
      if ( v33 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = pv;
      if ( pv )
      {
        pv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v66 = ++v22;
      v25 += 8LL;
      v23 = *((_DWORD *)this + 22);
      if ( (int)v22 >= v23 )
        goto LABEL_46;
    }
    v44 = (char *)this + 64;
    *(_QWORD *)&v64.Data1 = v44;
    v62 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 15);
    v63 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 14);
    LODWORD(v58) = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                          v44,
                                          v22)
                                      + 13);
    v45 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 12);
    v46 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 11);
    v47 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 10);
    v48 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 9);
    v49 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 8);
    v50 = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v44, v22) + 6);
    LODWORD(v57) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           v44,
                                           v66)
                                       + 4);
    LODWORD(v56) = *(_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                *(_QWORD *)&v64.Data1,
                                v66);
    v43 = v61;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x30E,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v61,
      (int)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v56,
      v57,
      v50,
      v49,
      v48,
      v47,
      v46,
      v45,
      (_DWORD)v58,
      v63,
      v62);
LABEL_73:
    v51 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v51 + 16LL))(v51);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pv);
    return v43;
  }
  else
  {
    while ( 1 )
    {
      v58 = 0LL;
      lpVtbl = v8->lpVtbl;
      pv = 0LL;
      v12 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(v8, &pv);
      v14 = v12;
      if ( v12 < 0 )
        break;
      v15 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
      }
      if ( v10 < 0 || v10 >= *((_DWORD *)this + 18) )
      {
        ATL::_AtlRaiseException(0xC000008C, v13);
        __debugbreak();
      }
      v16 = *((_QWORD *)this + 8) + 16LL * v10;
      v66 = *((_DWORD *)this + 12);
      v59 = pv;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
              &v58,
              &v59,
              &v66,
              v16);
      v14 = v12;
      if ( v12 < 0 )
      {
        v42 = 760LL;
        goto LABEL_67;
      }
      v17 = *((_DWORD *)this + 22);
      v18 = *((_DWORD *)this + 23);
      if ( v17 == v18 )
      {
        if ( v18 )
        {
          v19 = 2 * v17;
          if ( (v17 & 0x40000000) != 0 )
            goto LABEL_63;
        }
        else
        {
          v19 = 1;
        }
        if ( v19 > 0xFFFFFFFuLL || (v20 = _o__recalloc(*((_QWORD *)this + 10), v19, 8LL)) == 0 )
        {
LABEL_63:
          v14 = -2147024882;
          v41 = 2147942414LL;
          v42 = 762LL;
          goto LABEL_68;
        }
        *((_DWORD *)this + 23) = v19;
        *((_QWORD *)this + 10) = v20;
        v17 = *((_DWORD *)this + 22);
      }
      v21 = (struct IMMDevice **)(*((_QWORD *)this + 10) + 8LL * v17);
      if ( v21 )
      {
        *v21 = v58;
        a2 = v58;
        if ( v58 )
        {
          ((void (__fastcall *)(struct IMMDevice *))v58->lpVtbl->AddRef)(v58);
          a2 = v58;
        }
        v17 = *((_DWORD *)this + 22);
      }
      else
      {
        a2 = v58;
      }
      *((_DWORD *)this + 22) = v17 + 1;
      if ( pv )
      {
        CoTaskMemFree(pv);
        a2 = v58;
      }
      if ( a2 )
      {
        v58 = 0LL;
        ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->Release)(a2);
      }
      if ( ++v10 >= *((_DWORD *)this + 18) )
        goto LABEL_23;
    }
    v42 = 758LL;
LABEL_67:
    v41 = (unsigned int)v12;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v41,
      v55);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v58);
    return v14;
  }
}
