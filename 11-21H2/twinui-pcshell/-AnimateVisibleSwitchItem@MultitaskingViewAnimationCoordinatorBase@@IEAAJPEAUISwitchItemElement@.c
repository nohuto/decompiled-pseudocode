/*
 * XREFs of ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x1804C931C
 * Callers:
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x1802364D2 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x1804C8AA4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333a.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x1804CAA80 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3,
        char a4)
{
  int v8; // eax
  unsigned int updated; // ebx
  __int64 v10; // r15
  __int64 v11; // r14
  int (__fastcall *v12)(__int64, __int64, struct ISwitchItemElement **); // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r14
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64, _QWORD, struct ISwitchItemElement **, _QWORD, GUID *, struct ISwitchItemElement **); // rbx
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, struct ISwitchItemElement **); // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e; // eax
  __int64 v28; // rdx
  struct ISwitchItemElement *v30; // [rsp+50h] [rbp-29h] BYREF
  struct ISwitchItemElement *v31; // [rsp+58h] [rbp-21h] BYREF
  struct ISwitchItemElement *v32; // [rsp+60h] [rbp-19h] BYREF
  __int64 v33; // [rsp+68h] [rbp-11h] BYREF
  __int64 v34; // [rsp+70h] [rbp-9h] BYREF
  __int128 v35; // [rsp+78h] [rbp-1h] BYREF
  __int128 v36; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v35 = 0LL;
  v8 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *))(*(_QWORD *)this + 152LL))(
         this,
         a2,
         &v35);
  updated = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
    v34 = v10;
    v30 = 0LL;
    v11 = *((_QWORD *)this + 12);
    if ( v11
      && (v12 = *(int (__fastcall **)(__int64, __int64, struct ISwitchItemElement **))(*(_QWORD *)v11 + 24LL),
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v30),
          v13 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2),
          v12(v11, v13, &v30) >= 0) )
    {
      v14 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *))(*(_QWORD *)this + 136LL))(
              this,
              a2,
              v30);
      updated = v14;
      if ( v14 < 0 )
      {
        v16 = (unsigned int)v14;
        v17 = 201LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)v16);
LABEL_29:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v30);
        return updated;
      }
    }
    else
    {
      v36 = 0LL;
      v18 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *))(*(_QWORD *)this + 144LL))(
              this,
              a2,
              &v36);
      updated = v18;
      if ( v18 < 0 )
      {
        v16 = (unsigned int)v18;
        v17 = 206LL;
        goto LABEL_20;
      }
      v19 = *((_QWORD *)this + 4);
      if ( a4 )
      {
        LODWORD(v31) = DWORD2(v35) - v35;
        HIDWORD(v31) = HIDWORD(v35) - DWORD1(v35);
        v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct ISwitchItemElement **, _QWORD, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v19 + 64LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v30);
        v21 = v20(v19, *((_QWORD *)this + 6), v10, 0LL, &v31, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v30);
        updated = v21;
        if ( v21 < 0 )
        {
          v16 = (unsigned int)v21;
          v17 = 212LL;
          goto LABEL_20;
        }
      }
      else
      {
        v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v19 + 64LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v30);
        v23 = v22(v19, *((_QWORD *)this + 6), v10, 0LL, 0LL, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v30);
        updated = v23;
        if ( v23 < 0 )
        {
          v16 = (unsigned int)v23;
          v17 = 216LL;
          goto LABEL_20;
        }
      }
      v24 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v30 + 24LL))(
              v30,
              &v36,
              0LL,
              0LL);
      updated = v24;
      if ( v24 < 0 )
      {
        v16 = (unsigned int)v24;
        v17 = 219LL;
        goto LABEL_20;
      }
    }
    LOBYTE(v15) = 1;
    v25 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64))(*(_QWORD *)v30 + 152LL))(
            v30,
            0LL,
            v15);
    updated = v25;
    if ( v25 < 0 )
    {
      v16 = (unsigned int)v25;
      v17 = 221LL;
      goto LABEL_20;
    }
    v31 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
    v32 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    updated = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                (char *)this + 72,
                v26,
                &v34,
                &v31);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    if ( (updated & 0x80000000) != 0 )
    {
      v16 = updated;
      v17 = 222LL;
      goto LABEL_20;
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    v31 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
    AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
                                                                  (__int64 *)&v31,
                                                                  (__int64)a3,
                                                                  &v33);
    updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
    if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
    {
      AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int128 *, _QWORD, __int64))(*(_QWORD *)v30 + 24LL))(
                                                                    v30,
                                                                    &v35,
                                                                    *((unsigned int *)this + 37),
                                                                    v33);
      updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
      if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
      {
        AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *, __int64))(*(_QWORD *)this + 160LL))(
                                                                      this,
                                                                      a2,
                                                                      v30,
                                                                      v33);
        updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
        if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
        {
LABEL_28:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
          goto LABEL_29;
        }
        v28 = 228LL;
      }
      else
      {
        v28 = 227LL;
      }
    }
    else
    {
      v28 = 225LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
    (const char *)(unsigned int)v8);
  return updated;
}
