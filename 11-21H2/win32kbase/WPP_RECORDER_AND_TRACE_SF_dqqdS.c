/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1C01B8330
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C01B7F9C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall WPP_RECORDER_AND_TRACE_SF_dqqdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        char a12,
        const wchar_t *a13)
{
  struct RECORDER_LOG__ *v13; // rbp
  void *result; // rax
  const wchar_t *v15; // rbx
  __int64 v16; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+80h] [rbp-38h] BYREF
  void *v24; // [rsp+88h] [rbp-30h] BYREF

  v13 = gRimLog;
  result = &gTTMDevCallbacks;
  v15 = a13;
  v16 = -1LL;
  v24 = &gTTMDevCallbacks;
  v23 = 2;
  if ( a2 )
  {
    if ( a13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a13[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v20 = 10LL;
    }
    v21 = a13;
    if ( !a13 )
      v21 = L"NULL";
    result = (void *)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, char *, __int64, void **, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
                       a1,
                       43LL,
                       &WPP_e19c1f9dc6ba3a4e002eb4dd1e679f56_Traceguids,
                       10LL,
                       &v23,
                       4LL,
                       &a10,
                       8LL,
                       &v24,
                       8LL,
                       &a12,
                       4LL,
                       v21,
                       v20,
                       0LL);
  }
  if ( a3 )
  {
    if ( v15 )
    {
      do
        ++v16;
      while ( v15[v16] );
    }
    if ( !v15 )
      v15 = L"NULL";
    LOWORD(v22) = 10;
    return (void *)WppAutoLogTrace(
                     v13,
                     4LL,
                     1LL,
                     &WPP_e19c1f9dc6ba3a4e002eb4dd1e679f56_Traceguids,
                     v22,
                     &v23,
                     4LL,
                     &a10,
                     8LL,
                     &v24,
                     8LL,
                     &a12,
                     4LL,
                     v15);
  }
  return result;
}
