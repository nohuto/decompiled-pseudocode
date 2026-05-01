/*
 * XREFs of ?WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x180418BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x180153580 (--$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::WindowRemoved(UwpWindowWrapperBase *this)
{
  _DWORD *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 224LL))(*((_QWORD *)this + 32));
  v5 = *((int *)this + 68);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(UwpWindowWrapperBase *, char *))(*(_QWORD *)this + 288LL))(this, &v4);
  ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(v2, &v5);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 13);
  return 0LL;
}
