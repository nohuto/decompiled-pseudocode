/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C00B27A0
 * Callers:
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qdddddd(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // rsi
  int v11; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+F8h] [rbp+57h] BYREF
  va_list va; // [rsp+F8h] [rbp+57h]
  __int64 v15; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+5Fh]
  __int64 v17; // [rsp+108h] [rbp+67h] BYREF
  va_list va2; // [rsp+108h] [rbp+67h]
  __int64 v19; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+6Fh]
  __int64 v21; // [rsp+118h] [rbp+77h] BYREF
  va_list va4; // [rsp+118h] [rbp+77h]
  __int64 v23; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+120h] [rbp+7Fh]
  va_list va6; // [rsp+128h] [rbp+87h] BYREF

  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v23 = va_arg(va6, _QWORD);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
                            a7,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            va6,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          a5,
                          25LL,
                          &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
                          v11,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}
