/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddDq @ 0x1C024C108
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_ddddDq(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-69h]
  __int64 v12; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v14; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v16; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v18; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v20; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
               62LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               4LL,
               (__int64 *)va3,
               4LL,
               (__int64 *)va4,
               4LL,
               va5,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 62;
    return WppAutoLogTrace(
             Flink,
             4LL,
             25LL,
             &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             4LL,
             (__int64 *)va2);
  }
  return result;
}
