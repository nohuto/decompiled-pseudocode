/*
 * XREFs of ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180041860
 * Callers:
 *     ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FC6D0 (-DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator() @ 0x1802147B4 (_lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x18038BCD4 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ?CopyTo@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x18038BCF8 (-CopyTo@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJPEAPEAUIApplicationView@@@Z.c)
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BD28 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ @ 0x18039EE20 (-ReleaseAndGetAddressOf@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView **a3,
        bool *a4)
{
  unsigned int v7; // ebx
  __int64 (__fastcall **v8)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64); // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64); // rbx
  __int64 AddressOf; // rax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, GUID *, __int64 *); // rdi
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  int v30; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v36[5]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v38; // [rsp+C0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v39; // [rsp+C8h] [rbp+48h] BYREF
  int v40; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+58h] BYREF

  v39 = a2;
  *a3 = 0LL;
  *a4 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL,
      v30);
    return v7;
  }
  v33 = 0LL;
  v8 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
  v33 = 0LL;
  v9 = (*v8)(a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v33);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 71LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v9,
      v30);
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 64LL))(v33, &v40);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 73LL;
    goto LABEL_7;
  }
  if ( !v40 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4)) )
  {
    v41 = 0LL;
    v11 = *((_QWORD *)this + 5);
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 72LL);
    v35 = &v41;
    v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *(&v35);
    v14 = v12(v11, v13);
    v7 = v14;
    if ( v14 == -2147023728 )
      goto LABEL_17;
    if ( v14 < 0 )
    {
      v15 = 84LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v14,
        v30);
LABEL_18:
      Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v41);
      goto LABEL_40;
    }
    v14 = Microsoft::WRL::ComPtr<IApplicationView>::CopyTo(&v41, a3);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 85LL;
      goto LABEL_15;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           v41,
           v39) )
    {
LABEL_17:
      v7 = 0;
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v41);
  }
  *a4 = 1;
  v32 = 0LL;
  v16 = *((_QWORD *)this + 5);
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL);
  AddressOf = Microsoft::WRL::ComPtr<IObjectArray>::ReleaseAndGetAddressOf(&v32);
  v19 = v17(v16, AddressOf);
  v7 = v19;
  if ( v19 < 0 )
  {
    v20 = 92LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v19,
      v30);
    goto LABEL_39;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 24LL))(v32, &v38);
  v7 = v19;
  if ( v19 < 0 )
  {
    v20 = 95LL;
    goto LABEL_24;
  }
  v34 = 0LL;
  v31 = 0LL;
  v36[0] = this;
  v36[1] = &v39;
  v36[2] = &v34;
  v36[3] = &v31;
  v21 = 0;
  if ( !v38 )
    goto LABEL_35;
  do
  {
    v41 = 0LL;
    v22 = v32;
    v23 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v32 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v41);
    v24 = v23(v22, v21, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v41);
    v25 = retaddr;
    if ( v24 >= 0 )
    {
      v24 = lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator()(v36, v41);
      v25 = retaddr;
      if ( v24 >= 0 )
        goto LABEL_31;
      v26 = 138LL;
    }
    else
    {
      v26 = 136LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v24,
      v30);
LABEL_31:
    Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v41);
    ++v21;
  }
  while ( v21 < v38 );
  if ( v31 )
  {
    v27 = Microsoft::WRL::ComPtr<IApplicationView>::CopyTo(&v31, a3);
    v7 = v27;
    if ( v27 < 0 )
    {
      v28 = 144LL;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
LABEL_35:
  v27 = Microsoft::WRL::ComPtr<IApplicationView>::CopyTo(&v34, a3);
  v7 = v27;
  if ( v27 < 0 )
  {
    v28 = 146LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v27,
      v30);
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v31);
  Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v34);
LABEL_39:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v32);
LABEL_40:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
  return v7;
}
