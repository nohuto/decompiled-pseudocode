/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C0003400
 * Callers:
 *     USBHwLogStartFailure @ 0x1C00345B0 (USBHwLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rdi
  __int64 v11; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  va_list va; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids,
                            44LL,
                            v17,
                            v16,
                            va,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v18) = 44;
    return (_UNKNOWN **)WppAutoLogTrace(a4, 0LL, 8LL, &WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids, v18, v10);
  }
  return result;
}
