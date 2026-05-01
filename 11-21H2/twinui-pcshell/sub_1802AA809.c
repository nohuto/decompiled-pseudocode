/*
 * XREFs of sub_1802AA809 @ 0x1802AA809
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void sub_1802AA809(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v7; // [rsp+C0h] [rbp+38h]
  __int64 v8; // [rsp+C8h] [rbp+40h]
  __int64 v9; // [rsp+D0h] [rbp+48h]
  __int64 v10; // [rsp+D8h] [rbp+50h]
  __int64 v11; // [rsp+E0h] [rbp+58h]
  __int64 v12; // [rsp+E8h] [rbp+60h]
  __int64 v13; // [rsp+F0h] [rbp+68h]
  __int64 v14; // [rsp+F8h] [rbp+70h]
  __int64 v15; // [rsp+100h] [rbp+78h]
  __int64 v16; // [rsp+108h] [rbp+80h]
  __int64 v17; // [rsp+110h] [rbp+88h]
  __int64 v18; // [rsp+118h] [rbp+90h]
  __int64 v19; // [rsp+120h] [rbp+98h]
  __int64 v20; // [rsp+128h] [rbp+A0h]
  va_list va1; // [rsp+130h] [rbp+A8h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)va);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)va1);
  JUMPOUT(0x1800E05DBLL);
}
