/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1C0171D34
 * Callers:
 *     RIMOpenDevWorker @ 0x1C00BEDB0 (RIMOpenDevWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qdDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        ...)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  int v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+F0h] [rbp+48h] BYREF
  va_list va; // [rsp+F0h] [rbp+48h]
  __int64 v19; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  __int64 v21; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  const wchar_t *v23; // [rsp+108h] [rbp+60h]
  va_list va3; // [rsp+110h] [rbp+68h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  v23 = va_arg(va3, const wchar_t *);
  v8 = (__int64)v23;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v23 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v23[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v23;
    if ( !v23 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v15,
      v14,
      va3,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
    }
    LOWORD(v16) = a7;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
      v16,
      (__int64 *)va,
      8LL,
      (__int64 *)va1);
  }
}
