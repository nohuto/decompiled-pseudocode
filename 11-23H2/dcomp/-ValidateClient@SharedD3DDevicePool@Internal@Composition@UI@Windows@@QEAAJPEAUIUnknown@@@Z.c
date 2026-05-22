/*
 * XREFs of ?ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x1800A666C
 * Callers:
 *     ?get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1800A2C10 (-get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800A4F58 (--1-$out_param_t@V-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800A500C (--1-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolW.c)
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5588 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::ValidateClient(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct IUnknown *a2)
{
  struct ID3D11Device *lpVtbl; // rdi
  int v5; // ebx
  struct IUnknownVtbl *v6; // rdx
  struct _TP_WORK *ThreadpoolWork; // rax
  PVOID *p_pv; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v10; // [rsp+28h] [rbp-18h] BYREF
  char v11; // [rsp+30h] [rbp-10h]
  PVOID pv; // [rsp+60h] [rbp+20h] BYREF
  struct _TP_WORK *v13; // [rsp+68h] [rbp+28h] BYREF

  pv = 0LL;
  wil::srwlock::lock_exclusive((char *)this + 64, &v13);
  lpVtbl = (struct ID3D11Device *)a2[2].lpVtbl;
  if ( lpVtbl )
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknownVtbl *))lpVtbl->lpVtbl->GetDeviceRemovedReason)(a2[2].lpVtbl);
    if ( v5 < 0 )
    {
      v6 = a2[3].lpVtbl;
      v10 = 0LL;
      p_pv = &pv;
      v11 = 1;
      Windows::UI::Composition::Internal::SharedD3DDevicePool::EraseSharedDevice(this, (struct _LUID)v6, lpVtbl, &v10);
      wil::details::out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>::~out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>((__int64 **)&p_pv);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    if ( pv )
    {
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)lambda_eee7116e10b79d37d834622fcd258a1d_::_lambda_invoker_cdecl_,
                         pv,
                         0LL);
      v13 = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        pv = 0LL;
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(&v13);
    }
  }
  else
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    v5 = -2005270523;
  }
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&pv);
  return (unsigned int)v5;
}
