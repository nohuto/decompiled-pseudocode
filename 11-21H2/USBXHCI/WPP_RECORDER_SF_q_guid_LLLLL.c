/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C001161C
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006C218 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q_guid_LLLLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  int v8; // [rsp+28h] [rbp-69h]
  __int64 v9; // [rsp+E0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v11; // [rsp+E8h] [rbp+57h]
  __int64 v12; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v14; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v16; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v18; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v18 = va_arg(va5, _QWORD);
  v5 = v11;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      258LL,
      (__int64 *)va,
      8LL,
      v11,
      16LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      va5,
      4LL,
      0LL);
  LOWORD(v8) = 258;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           v5,
           16LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2);
}
