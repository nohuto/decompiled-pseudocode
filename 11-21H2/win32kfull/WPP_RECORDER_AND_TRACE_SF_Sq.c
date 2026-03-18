/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C0210374
 * Callers:
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18 (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sq(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  __int64 v11; // rbx
  const char *v12; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  va_list va; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v11 = -1LL;
  v12 = a9;
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
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
                            a7,
                            v17,
                            v16,
                            va,
                            8LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v18 = v11 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a9 )
      v12 = "NULL";
    LOWORD(v19) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          25LL,
                          &WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
                          v19,
                          v12,
                          v18,
                          va,
                          8LL,
                          0LL);
  }
  return result;
}
