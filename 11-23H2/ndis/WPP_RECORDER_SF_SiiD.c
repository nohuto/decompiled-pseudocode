/*
 * XREFs of WPP_RECORDER_SF_SiiD @ 0x1C002BA88
 * Callers:
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119F80 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SiiD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  bool v9; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v17; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, __int64, const wchar_t *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_069cc08c20e532709d80f678bd350850_Traceguids,
      18LL,
      v13,
      v12,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  v9 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = a6 == 0LL;
  }
  if ( v9 )
    v6 = L"NULL";
  LOWORD(v14) = 18;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_069cc08c20e532709d80f678bd350850_Traceguids, v14, v6);
}
