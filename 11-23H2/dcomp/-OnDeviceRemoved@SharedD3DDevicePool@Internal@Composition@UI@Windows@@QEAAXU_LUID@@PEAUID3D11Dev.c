/*
 * XREFs of ?OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Device@@@Z @ 0x1800A61E8
 * Callers:
 *     _lambda_ba5bfaa728056e7e3dec720690f39894_::_lambda_invoker_cdecl_ @ 0x1800A3EF0 (_lambda_ba5bfaa728056e7e3dec720690f39894_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800A4F58 (--1-$out_param_t@V-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800A4FC8 (--1-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolW.c)
 *     ?DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1800A5CF4 (-DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV-$.c)
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5588 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::OnDeviceRemoved(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct _LUID a2,
        struct ID3D11Device *a3)
{
  __int64 v6; // rcx
  struct _TP_WAIT *v7; // rax
  struct _TP_WAIT *v8; // rax
  struct _TP_WAIT **v9; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v10; // [rsp+28h] [rbp-18h] BYREF
  char v11; // [rsp+30h] [rbp-10h]
  struct _TP_WAIT *v12; // [rsp+60h] [rbp+20h] BYREF
  struct _TP_WAIT *v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  wil::srwlock::lock_exclusive((char *)this + 64, &v13);
  v10 = 0LL;
  v9 = &v12;
  v11 = 1;
  Windows::UI::Composition::Internal::SharedD3DDevicePool::EraseSharedDevice(this, a2, a3, &v10);
  wil::details::out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>::~out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>((__int64 **)&v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
  if ( v12 )
  {
    v6 = *((_QWORD *)v12 + 1);
    v7 = *(struct _TP_WAIT **)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    v13 = v7;
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<2>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<2>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>(&v13);
    v8 = v12;
    v12 = 0LL;
    v13 = v8;
    Windows::UI::Composition::Internal::SharedD3DDevicePool::DestroySharedDeviceAndSignalClients(&v13);
  }
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v12);
}
