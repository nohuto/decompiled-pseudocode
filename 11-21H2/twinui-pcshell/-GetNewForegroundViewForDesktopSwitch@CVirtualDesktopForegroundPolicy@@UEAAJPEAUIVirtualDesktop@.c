/*
 * XREFs of ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180037170
 * Callers:
 *     ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180542160 (-DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_6d579a7901f1a5be9a6baa5af636a22c_::operator() @ 0x180541F78 (_lambda_6d579a7901f1a5be9a6baa5af636a22c_--operator().c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView **a3,
        bool *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v11; // eax
  int v12; // ebx
  struct IApplicationView *v13; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rdx
  struct IApplicationView *v26; // rax
  int v27; // [rsp+20h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  struct IApplicationView *v29; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v32; // [rsp+A0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v33; // [rsp+A8h] [rbp+48h] BYREF
  struct IApplicationView *v34; // [rsp+B0h] [rbp+50h] BYREF
  struct IApplicationView *v35; // [rsp+B8h] [rbp+58h] BYREF

  v33 = a2;
  v7 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v15 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL,
      v27);
    return v15;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4)) )
  {
    v34 = 0LL;
    v8 = *((_QWORD *)this + 5);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 72LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v34);
    v11 = v9(v8, AddressOf);
    v12 = v11;
    if ( v11 == -2147023728 )
      goto LABEL_6;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v11,
        v27);
      v7 = v12;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
    v13 = v34;
    *a3 = v34;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           v13,
           v33) )
    {
LABEL_6:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
      return v7;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
  }
  *a4 = 1;
  v28 = 0LL;
  v16 = *((_QWORD *)this + 5);
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  v18 = v17(v16, &v28);
  v15 = v18;
  if ( v18 < 0 )
  {
    v19 = 84LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v18,
      v27);
    goto LABEL_26;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 24LL))(v28, &v32);
  v15 = v18;
  if ( v18 < 0 )
  {
    v19 = 87LL;
    goto LABEL_14;
  }
  v29 = 0LL;
  v35 = 0LL;
  v30[0] = this;
  v30[1] = &v33;
  v30[2] = &v29;
  v30[3] = &v35;
  v20 = 0;
  if ( !v32 )
    goto LABEL_24;
  do
  {
    v34 = 0LL;
    v21 = v28;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v28 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
    v23 = v22(v21, v20, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v34);
    v24 = retaddr;
    if ( v23 >= 0 )
    {
      v23 = lambda_6d579a7901f1a5be9a6baa5af636a22c_::operator()(v30, v34);
      v24 = retaddr;
      if ( v23 >= 0 )
        goto LABEL_21;
      v25 = 130LL;
    }
    else
    {
      v25 = 128LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v24,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v23,
      v27);
LABEL_21:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
    ++v20;
  }
  while ( v20 < v32 );
  if ( v35 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
    v26 = v35;
    goto LABEL_25;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
  v26 = v29;
LABEL_25:
  *a3 = v26;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
  v15 = 0;
LABEL_26:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  return v15;
}
