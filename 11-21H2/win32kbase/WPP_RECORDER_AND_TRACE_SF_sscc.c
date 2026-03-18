/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sscc @ 0x1C01FCC1C
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00429D4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sscc(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  const char *v12; // rdi
  __int64 v13; // rbx
  const char *v14; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+58h] BYREF
  va_list va; // [rsp+E0h] [rbp+58h]
  va_list va1; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v28 = va_arg(va1, _QWORD);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v12 = a10;
  v13 = -1LL;
  v14 = a9;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a10;
    if ( !a10 )
      v19 = "NULL";
    if ( a9 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a9[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids,
                            11LL,
                            v22,
                            v21,
                            v19,
                            v18,
                            (__int64 *)va,
                            1LL,
                            va1,
                            1LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    if ( !a10 )
      v12 = "NULL";
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v25 = v13 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    if ( !a9 )
      v14 = "NULL";
    LOWORD(v26) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          6LL,
                          &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids,
                          v26,
                          v14,
                          v25,
                          v12,
                          v24,
                          (__int64 *)va,
                          1LL,
                          va1,
                          1LL,
                          0LL);
  }
  return result;
}
