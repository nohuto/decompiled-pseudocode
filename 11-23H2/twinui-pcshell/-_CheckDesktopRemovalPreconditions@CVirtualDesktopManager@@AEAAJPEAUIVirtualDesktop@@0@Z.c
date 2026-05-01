/*
 * XREFs of ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18060755C
 * Callers:
 *     ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602DD0 (-RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602EA0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAA_NXZ @ 0x180118494 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvemen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@UIVirtualDesktop2@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIVirtualDesktop2@@XZ @ 0x18053E7B8 (--I-$com_ptr_t@UIVirtualDesktop2@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIVirtualDesktop2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v6 = 964LL;
LABEL_3:
    v7 = -2147019873;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
    return v7;
  }
  if ( (unsigned int)SHIsSameObject(a2, a3) )
  {
    v7 = -2147024809;
    v6 = 965LL;
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 13) + 32LL))(
          *((_QWORD *)this + 13),
          a2) )
  {
    v7 = -2147024809;
    v6 = 966LL;
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 13) + 32LL))(
          *((_QWORD *)this + 13),
          a3) )
  {
    v7 = -2147024809;
    v6 = 967LL;
    goto LABEL_4;
  }
  if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13)) == 1 )
  {
    v6 = 968LL;
    goto LABEL_3;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl) )
  {
    v16 = 0;
    v17 = 0LL;
    QueryInterface = a3->lpVtbl->QueryInterface;
    v10 = wil::com_ptr_t<IVirtualDesktop2,wil::err_exception_policy>::operator&(&v17);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
            a3,
            &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
            v10);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 974LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      return v7;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 56LL))(v17, &v16);
    v7 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 975LL;
      goto LABEL_21;
    }
    if ( v16 )
    {
      v7 = -2147024809;
      v12 = 2147942487LL;
      v13 = 976LL;
      goto LABEL_21;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  return 0LL;
}
