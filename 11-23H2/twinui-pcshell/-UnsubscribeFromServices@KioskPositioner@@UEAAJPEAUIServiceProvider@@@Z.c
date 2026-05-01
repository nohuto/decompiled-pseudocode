/*
 * XREFs of ?UnsubscribeFromServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BE890
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::UnsubscribeFromServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  __int64 v4; // rcx

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 208));
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 336));
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 464));
  v4 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)this + 21);
  return 0LL;
}
