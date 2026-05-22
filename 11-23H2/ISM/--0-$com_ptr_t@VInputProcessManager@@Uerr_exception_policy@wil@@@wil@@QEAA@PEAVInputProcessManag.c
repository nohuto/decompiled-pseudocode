/*
 * XREFs of ??0?$com_ptr_t@VInputProcessManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputProcessManager@@@Z @ 0x1801D9F68
 * Callers:
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801D9FA4 (--1HeatProcessor@@MEAA@XZ.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801DA284 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<InputProcessManager,wil::err_exception_policy>::com_ptr_t<InputProcessManager,wil::err_exception_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
