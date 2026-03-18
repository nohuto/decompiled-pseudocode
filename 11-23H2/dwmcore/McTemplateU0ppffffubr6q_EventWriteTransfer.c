/*
 * XREFs of McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x18012ED18
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800122DC (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0ppffffubr6q_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        ...)
{
  char v8; // [rsp+30h] [rbp-A1h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-81h]
  __int64 v10; // [rsp+58h] [rbp-79h]
  __int64 *v11; // [rsp+60h] [rbp-71h]
  __int64 v12; // [rsp+68h] [rbp-69h]
  char *v13; // [rsp+70h] [rbp-61h]
  __int64 v14; // [rsp+78h] [rbp-59h]
  char *v15; // [rsp+80h] [rbp-51h]
  __int64 v16; // [rsp+88h] [rbp-49h]
  char *v17; // [rsp+90h] [rbp-41h]
  __int64 v18; // [rsp+98h] [rbp-39h]
  va_list v19; // [rsp+A0h] [rbp-31h]
  __int64 v20; // [rsp+A8h] [rbp-29h]
  char *v21; // [rsp+B0h] [rbp-21h]
  __int64 v22; // [rsp+B8h] [rbp-19h]
  __int64 v23; // [rsp+C0h] [rbp-11h]
  __int64 v24; // [rsp+C8h] [rbp-9h]
  va_list v25; // [rsp+D0h] [rbp-1h]
  __int64 v26; // [rsp+D8h] [rbp+7h]
  __int64 v27; // [rsp+110h] [rbp+3Fh] BYREF
  __int64 v28; // [rsp+118h] [rbp+47h] BYREF
  __int64 v29; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v31; // [rsp+140h] [rbp+6Fh]
  __int64 v32; // [rsp+148h] [rbp+77h]
  va_list va1; // [rsp+150h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v28 = a4;
  v27 = a3;
  v8 = 68;
  v9 = &v27;
  v10 = 8LL;
  v11 = &v28;
  v12 = 8LL;
  v13 = &a5;
  v14 = 4LL;
  v15 = &a6;
  v17 = &a7;
  va_copy(v19, va);
  v21 = &v8;
  v23 = v32;
  va_copy(v25, va1);
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 1LL;
  v24 = 68LL;
  v26 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE);
}
