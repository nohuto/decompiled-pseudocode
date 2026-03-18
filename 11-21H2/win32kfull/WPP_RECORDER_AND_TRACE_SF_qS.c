/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qS @ 0x1C0099714
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009959C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  int v21; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a10;
  v12 = -1LL;
  v16 = 10LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)&a10[2 * v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
                            23LL,
                            &a9,
                            8LL,
                            v20,
                            v19,
                            0LL);
  }
  if ( a3 )
  {
    v17 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v11[2 * v12] );
      v16 = 2 * v12 + 2;
      v17 = v11 == 0LL;
    }
    if ( v17 )
      v11 = L"NULL";
    LOWORD(v21) = 23;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          8LL,
                          &WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
                          v21,
                          &a9,
                          8LL,
                          v11,
                          v16,
                          0LL);
  }
  return result;
}
