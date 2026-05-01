/*
 * XREFs of ?GetMonitor@WindowingEnvironmentConfig@@UEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1804F4C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800607A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentConfig::GetMonitor(IUnknown **this, int a2, struct IImmersiveMonitor **a3)
{
  HRESULT v6; // eax
  __int64 v7; // r8
  __int64 *v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  ppvOut = 0LL;
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         this[6],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  try
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x152,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v13);
    ((void (__fastcall *)(IUnknown *, PSRWLOCK *))this[6]->lpVtbl[2].AddRef)(this[6], &SRWLock);
    v8 = (__int64 *)this[9];
    v9 = *v8;
    v16 = *v8;
    while ( (__int64 *)v9 != v8 )
    {
      if ( *(_DWORD *)(v9 + 32) == a2 )
      {
        v10 = (*(__int64 (__fastcall **)(void *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut + 56LL))(
                ppvOut,
                *(unsigned int *)(v9 + 36),
                a3);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x159,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
            (const char *)(unsigned int)v10,
            v13);
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(
        &v16,
        v9,
        v7,
        (__int64)v8);
      v9 = v16;
    }
    if ( *a3 )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
      result = 0LL;
    }
    else
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x161,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
