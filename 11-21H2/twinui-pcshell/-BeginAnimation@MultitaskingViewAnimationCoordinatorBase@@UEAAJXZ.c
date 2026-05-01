/*
 * XREFs of ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x1804C9760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18022AB3C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     _lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_ @ 0x1804AA270 (_lambda_55e0f220ed6030f2589a6e9858a32f89_--_lambda_55e0f220ed6030f2589a6e9858a32f89_.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1804C8A04 (CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_f227cfea5c7d7e4a1f939567e6c8291f___lambda_55891bb7ae650cfec3898bd60cc7998b_____lambda_f227cfea5c7d7e4a1f939567e6c8291f__&__lambda_55891bb7ae650cfec3898bd60cc7998b__&_IDCompBatchAnimationCallback___&_ @ 0x1804C8BE4 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_f227cfea5.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804C8E90 (--0Iterator@-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Mi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1804CA030 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemE.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x1804CAB7C (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::BeginAnimation(
        MultitaskingViewAnimationCoordinatorBase *this)
{
  _OWORD *v2; // rax
  char *v3; // r12
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64 *); // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, __int64 *); // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(_QWORD *, __int64 *); // rbx
  __int64 (__fastcall *v17)(_QWORD *, __int64 *); // rbx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  char v23; // di
  __int64 v24; // rdx
  int updated; // eax
  __int64 *v26; // rax
  __int64 v27; // rbx
  HWND v28; // rax
  const char *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 *v38; // rbx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // rcx
  unsigned int v45; // edi
  unsigned int i; // edx
  __int64 v48; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v55; // [rsp+78h] [rbp-90h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v56; // [rsp+80h] [rbp-88h]
  int v57; // [rsp+88h] [rbp-80h] BYREF
  __int64 v58; // [rsp+8Ch] [rbp-7Ch]
  HLOCAL hMem; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-68h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v61; // [rsp+A8h] [rbp-60h] BYREF
  int v62; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v63[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v64[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+D8h] [rbp-30h] BYREF
  LPARAM lParam; // [rsp+E8h] [rbp-20h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v67; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v68; // [rsp+F8h] [rbp-10h]
  struct tagRECT *p_Rect; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v2 = (_OWORD *)(*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, LPARAM *))(*(_QWORD *)this
                                                                                                 + 128LL))(
                   this,
                   &lParam);
  *(_OWORD *)((char *)this + 104) = *v2;
  *(_OWORD *)((char *)this + 120) = v2[1];
  *(_OWORD *)((char *)this + 136) = v2[2];
  *(_OWORD *)((char *)this + 152) = v2[3];
  v54 = 0LL;
  v3 = (char *)this + 40;
  v4 = *((_QWORD *)this + 5);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 184LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  v6 = v5(v4, &v54);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_58;
  }
  v52 = 0LL;
  v8 = *(_QWORD *)v3;
  v9 = *(void (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v3 + 192LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
  v9(v8, &v52);
  v51 = 0LL;
  v50 = 0LL;
  v10 = (_QWORD *)*((_QWORD *)this + 5);
  v11 = (_QWORD *)*v10;
  if ( *((_BYTE *)this + 168) )
  {
    if ( *((_BYTE *)this + 169) )
    {
      v12 = (__int64 (__fastcall *)(_QWORD *, __int64 *))v11[27];
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
      v13 = v12(v10, &v51);
      v14 = retaddr;
      if ( v13 < 0 )
      {
        v15 = 34LL;
LABEL_11:
        wil::details::in1diag3::_Log_Hr(
          v14,
          (void *)v15,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v13);
      }
    }
    else
    {
      v16 = (__int64 (__fastcall *)(_QWORD *, __int64 *))v11[26];
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
      v13 = v16(v10, &v50);
      v14 = retaddr;
      if ( v13 < 0 )
      {
        v15 = 38LL;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v17 = (__int64 (__fastcall *)(_QWORD *, __int64 *))v11[25];
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
    v13 = v17(v10, &v50);
    v14 = retaddr;
    if ( v13 < 0 )
    {
      v15 = 45LL;
      goto LABEL_11;
    }
  }
  v57 = 0;
  v58 = 31LL;
  hMem = 0LL;
  v60 = 0LL;
  v18 = v54;
  v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
  v20 = v19(v18, &v60);
  v7 = v20;
  if ( v20 >= 0 )
  {
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v55,
      v60);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::Iterator(
      (__int64)&v62,
      (__int64)&v55,
      0);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::Iterator(
      (__int64)&lParam,
      (__int64)&v55,
      (int)v56);
    while ( v62 != (_DWORD)lParam || (__int64 *)v63[1] != v68 )
    {
      v21 = v63[0];
      v53[0] = v63[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v53);
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, MultitaskingViewAnimationCoordinatorBase **))(*(_QWORD *)v21 + 24LL))(
                        v21,
                        &v61);
      v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 152LL))(*v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
      if ( v23 )
      {
        *(_QWORD *)&Rect.left = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
        updated = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                    &v57,
                    v24,
                    &Rect,
                    v53);
        v7 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)updated);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v53);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v63);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
          goto LABEL_51;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v53);
      ++v62;
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::GetCurrentObject(&v62);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v63);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
    v61 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v61);
    v55 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v55);
    v56 = this;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
    v26 = lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_(v53, (__int64 *)&v55);
    CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89_(v26, (_QWORD *)this + 8);
    v27 = *((_QWORD *)this + 8);
    v53[0] = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v53);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v64, v53, (__int64)this + 104, v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v53);
    if ( !*((_BYTE *)this + 169) )
    {
      Rect = 0LL;
      v28 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 328LL))(v54);
      if ( !GetClientRect(v28, &Rect) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x4B,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          v29);
      LOBYTE(v48) = 0;
      lParam = (LPARAM)&v57;
      v67 = this;
      v68 = &v48;
      p_Rect = &Rect;
      EnumWindows(
        (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_e2c0853faeb8110aeaae9508528948ac_>,
        (LPARAM)&lParam);
    }
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
    *(_QWORD *)&Rect.left = *((_QWORD *)this + 8);
    v49 = 0LL;
    Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_f227cfea5c7d7e4a1f939567e6c8291f___lambda_55891bb7ae650cfec3898bd60cc7998b_____lambda_f227cfea5c7d7e4a1f939567e6c8291f_____lambda_55891bb7ae650cfec3898bd60cc7998b____IDCompBatchAnimationCallback_____(
      v53,
      v30,
      v31,
      (__int64 *)&Rect.left);
    v33 = v53[0];
    if ( v53[0] )
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v53[0])(
        v53[0],
        &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6,
        &v49);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v34 = v50;
    if ( v50 )
    {
      if ( !*((_QWORD *)this + 12) )
      {
        v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v50 + 32LL))(v50, v32, 0LL, v49);
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x78,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v35);
        v34 = v50;
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v34 + 128LL))(
              v34,
              *((unsigned int *)this + 32),
              v49);
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v36);
    }
    v37 = v51;
    v38 = (__int64 *)((char *)this + 96);
    if ( v51 )
    {
      if ( !*v38 )
      {
        v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v51 + 32LL))(v51, v32, 0LL, v49);
        if ( v39 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v39);
        v37 = v51;
      }
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v37 + 128LL))(
              v37,
              *((unsigned int *)this + 40),
              v49);
      if ( v40 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x83,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v40);
    }
    v41 = v52;
    if ( v52 )
    {
      v38 = (__int64 *)((char *)this + 96);
      if ( !*((_QWORD *)this + 12) )
      {
        v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v52 + 504LL))(
                v52,
                v32,
                0LL,
                v49);
        if ( v42 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8A,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v42);
        v41 = v52;
      }
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v41 + 496LL))(
              v41,
              *((unsigned int *)this + 36),
              v49);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v43);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v38);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
    v7 = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v64);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v55);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v20);
  }
LABEL_51:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
  v44 = hMem;
  if ( hMem )
  {
    v45 = 0;
    for ( i = v58; v45 < i; ++v45 )
    {
      if ( v44[6 * v45] == 1 )
      {
        v44[6 * v45] = 2;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v44[6 * v45 + 4]);
        ++HIDWORD(v58);
        --v57;
        v44 = hMem;
        i = v58;
      }
    }
    LocalFree(v44);
    hMem = 0LL;
  }
  v57 = 0;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
LABEL_58:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  return v7;
}
