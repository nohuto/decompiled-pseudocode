/*
 * XREFs of McTemplateU0xxxxq_EventWriteTransfer @ 0x18012E884
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800492C0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxxxq_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  int v3; // [rsp+30h] [rbp-41h] BYREF
  va_list v4; // [rsp+50h] [rbp-21h]
  __int64 v5; // [rsp+58h] [rbp-19h]
  va_list v6; // [rsp+60h] [rbp-11h]
  __int64 v7; // [rsp+68h] [rbp-9h]
  va_list v8; // [rsp+70h] [rbp-1h]
  __int64 v9; // [rsp+78h] [rbp+7h]
  va_list v10; // [rsp+80h] [rbp+Fh]
  __int64 v11; // [rsp+88h] [rbp+17h]
  int *v12; // [rsp+90h] [rbp+1Fh]
  __int64 v13; // [rsp+98h] [rbp+27h]
  __int64 v14; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+5Fh]
  __int64 v16; // [rsp+D8h] [rbp+67h] BYREF
  va_list va1; // [rsp+D8h] [rbp+67h]
  __int64 v18; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+E0h] [rbp+6Fh]
  va_list va3; // [rsp+E8h] [rbp+77h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v5 = 8LL;
  v3 = 0;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  v11 = 8LL;
  va_copy(v10, va3);
  v12 = &v3;
  v13 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENT_Start);
}
