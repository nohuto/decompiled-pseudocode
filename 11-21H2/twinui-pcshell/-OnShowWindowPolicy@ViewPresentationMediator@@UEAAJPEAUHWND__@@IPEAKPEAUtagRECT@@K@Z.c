/*
 * XREFs of ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180124550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@QEAA@XZ @ 0x180124888 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CGITCallbackArray@@QEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x180124964 (-RuntimeClassInitialize@CGITCallbackArray@@QEAAJAEBV-$CCoSimpleArray@V-$ComPtr@UIGITCookieObject.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __Platform_ReleaseSRWLockShared @ 0x180189344 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x18018938C (__Platform_AcquireSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCGITCallbackArray@@@WRL@Microsoft@@QEAA@XZ @ 0x180321BD0 (--1-$ComPtr@VCGITCallbackArray@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall ViewPresentationMediator::OnShowWindowPolicy(
        RTL_SRWLOCK *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc,
        unsigned int a6)
{
  LPRECT v10; // r15
  RTL_SRWLOCK *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  int v34; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int64 *v37; // [rsp+60h] [rbp-20h]
  int v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+70h] [rbp-10h]
  __int64 *v40; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v42; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v43; // [rsp+D8h] [rbp+58h] BYREF

  *a4 = 0;
  v10 = lprc;
  SetRectEmpty(lprc);
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
  v42 = 0LL;
  v11 = this + 12;
  _Platform_AcquireSRWLockShared(this + 12);
  v42 = 0LL;
  v12 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( !v12 )
  {
    v14 = -2147024882;
    _Platform_ReleaseSRWLockShared(v11);
    goto LABEL_34;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(v12);
  *v13 = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
  v13[4] = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
  v13[6] = 0LL;
  v13[7] = 0LL;
  v13[8] = 0LL;
  v13[9] = 0LL;
  v43 = v13;
  v14 = CGITCallbackArray::RuntimeClassInitialize(v13, &this[13]);
  if ( v14 < 0 )
  {
    Microsoft::WRL::ComPtr<CGITCallbackArray>::~ComPtr<CGITCallbackArray>(&v43);
    _Platform_ReleaseSRWLockShared(v11);
    goto LABEL_34;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v13)(
          v13,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          &v42);
  (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  _Platform_ReleaseSRWLockShared(v11);
  if ( v14 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_31;
  }
  v15 = v42;
  v33 = v42;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
  v14 = 0;
  v34 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v34);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v16);
  v17 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v18 = &v33;
  v37 = &v33;
  if ( v34 )
  {
    while ( 1 )
    {
      v19 = *v18;
      v20 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)*v18 + 32LL);
      v21 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v17 = v35;
      }
      v22 = v20(v19, v17, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc, &v36);
      if ( v22 >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v22);
      v17 = v35 + 1;
      v35 = v17;
      v18 = v37;
      if ( (unsigned int)v17 >= *((_DWORD *)v37 + 2) )
        goto LABEL_11;
    }
    v18 = v37;
    LODWORD(v17) = v35;
LABEL_11:
    v14 = 0;
  }
  v38 = v34;
  v39 = 0LL;
  v40 = &v33;
  v23 = a6;
  while ( (_DWORD)v17 != v38 || v18 != v40 )
  {
    v24 = v36;
    v43 = (_QWORD *)v36;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    if ( *a4 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v43);
      break;
    }
    (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *, LPRECT, unsigned int))(*(_QWORD *)v24 + 24LL))(
      v24,
      a2,
      a3,
      a4,
      v10,
      v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v17 = ++v35;
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v17 = v35;
    }
    v18 = v37;
    if ( (unsigned int)v17 < *((_DWORD *)v37 + 2) )
    {
      while ( 1 )
      {
        v26 = *v18;
        v27 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)*v18 + 32LL);
        v28 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          v17 = v35;
        }
        v29 = v27(v26, v17, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc, &v36);
        if ( v29 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v29);
        v17 = v35 + 1;
        v35 = v17;
        v18 = v37;
        if ( (unsigned int)v17 >= *((_DWORD *)v37 + 2) )
          goto LABEL_24;
      }
      v18 = v37;
      LODWORD(v17) = v35;
LABEL_24:
      v14 = 0;
    }
  }
  v30 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
LABEL_31:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
  return (unsigned int)v14;
}
