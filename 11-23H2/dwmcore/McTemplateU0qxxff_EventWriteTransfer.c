/*
 * XREFs of McTemplateU0qxxff_EventWriteTransfer @ 0x180131146
 * Callers:
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x1800462EC (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0qxxff_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-41h] BYREF
  int *v5; // [rsp+50h] [rbp-21h]
  __int64 v6; // [rsp+58h] [rbp-19h]
  va_list v7; // [rsp+60h] [rbp-11h]
  __int64 v8; // [rsp+68h] [rbp-9h]
  va_list v9; // [rsp+70h] [rbp-1h]
  __int64 v10; // [rsp+78h] [rbp+7h]
  va_list v11; // [rsp+80h] [rbp+Fh]
  __int64 v12; // [rsp+88h] [rbp+17h]
  va_list v13; // [rsp+90h] [rbp+1Fh]
  __int64 v14; // [rsp+98h] [rbp+27h]
  __int64 v15; // [rsp+D8h] [rbp+67h] BYREF
  va_list va; // [rsp+D8h] [rbp+67h]
  __int64 v17; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+6Fh]
  __int64 v19; // [rsp+E8h] [rbp+77h] BYREF
  va_list va2; // [rsp+E8h] [rbp+77h]
  va_list va3; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v6 = 4LL;
  v4 = 0;
  v5 = &v4;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 8LL;
  va_copy(v9, va1);
  v12 = 4LL;
  va_copy(v11, va2);
  va_copy(v13, va3);
  v14 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD_DELTAS);
}
