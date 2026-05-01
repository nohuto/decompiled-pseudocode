/*
 * XREFs of sub_1802B444E @ 0x1802B444E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void sub_1802B444E(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)va);
  JUMPOUT(0x180108A32LL);
}
