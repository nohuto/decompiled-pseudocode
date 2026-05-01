/*
 * XREFs of ?OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1804A7C14
 * Callers:
 *     _lambda_87e491ca89c161f11cdbafeae50fa0db_::operator() @ 0x1804A7168 (_lambda_87e491ca89c161f11cdbafeae50fa0db_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A83D0 (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SwitchItemCollection::OnTabSelectionChanged(
        SwitchItemCollection *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int updated; // eax
  __int64 (__fastcall *v10)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, __int64 *); // rbx
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v22; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v24; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v25; // [rsp+70h] [rbp+40h] BYREF
  __int64 v26; // [rsp+78h] [rbp+48h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, char *))(*(_QWORD *)a2 + 176LL))(
         a2,
         &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v25 = 0LL;
    v6 = *((_QWORD *)this + 27);
    v7 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)v6 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v25);
    v5 = v7(v6, a2, AddressOf);
    if ( v5 < 0 )
    {
LABEL_21:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
      return (unsigned int)v5;
    }
    if ( v24 )
    {
      updated = SwitchItemCollection::UpdateTabSelection(this, (struct IApplicationView *)v25, 1);
      v5 = updated;
      if ( updated < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x160,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)updated);
      goto LABEL_21;
    }
    v21 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)a2 + 168LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    v11 = v10(a2, &v21);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v11);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      goto LABEL_21;
    }
    v26 = 0LL;
    v12 = v21;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    v14 = v13(v12, &v26);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v14);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      goto LABEL_20;
    }
    v22 = 0LL;
    v15 = *((_QWORD *)this + 27);
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 24LL);
    v17 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v22);
    v18 = v16(v15, v26, v17);
    v5 = v18;
    if ( v18 < 0 )
    {
      v19 = 365LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_18;
    }
    if ( (unsigned int)SHIsSameObject(v22, v25) )
    {
      v5 = 0;
    }
    else
    {
      v18 = SwitchItemCollection::UpdateTabSelection(this, (struct IApplicationView *)v25, v24 != 0);
      v5 = v18;
      if ( v18 < 0 )
      {
        v19 = 370LL;
        goto LABEL_17;
      }
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v5;
}
