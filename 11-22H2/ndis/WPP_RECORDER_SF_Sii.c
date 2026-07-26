/*
 * XREFs of WPP_RECORDER_SF_Sii @ 0x1C00BC0F4
 * Callers:
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119FC0 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120244 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sii(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v17 = va_arg(va1, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v8 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
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
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, _QWORD, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_069cc08c20e532709d80f678bd350850_Traceguids,
      a4,
      v13,
      v12,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, v8, 1LL, &WPP_069cc08c20e532709d80f678bd350850_Traceguids, v16, v6);
}
