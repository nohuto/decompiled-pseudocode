/*
 * XREFs of ?WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x1804F2310
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x1804E57F0 (--$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::WindowRemoved(UwpWindowWrapperBase *this)
{
  int *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  v5 = *((int *)this + 70);
  v2 = (int *)(*(__int64 (__fastcall **)(UwpWindowWrapperBase *, char *))(*(_QWORD *)this + 288LL))(this, &v4);
  ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(v2, &v5);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  return 0LL;
}
