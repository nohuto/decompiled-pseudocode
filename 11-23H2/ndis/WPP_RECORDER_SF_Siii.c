/*
 * XREFs of WPP_RECORDER_SF_Siii @ 0x1C00BC450
 * Callers:
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120204 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Siii(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+D0h] [rbp+38h] BYREF
  va_list va; // [rsp+D0h] [rbp+38h]
  __int64 v17; // [rsp+D8h] [rbp+40h] BYREF
  va_list va1; // [rsp+D8h] [rbp+40h]
  va_list va2; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = a6;
    if ( !a6 )
      v11 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, __int64, const wchar_t *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_069cc08c20e532709d80f678bd350850_Traceguids,
      13LL,
      v11,
      v10,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  }
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  LOWORD(v14) = 13;
  return WppAutoLogTrace(a1, 3LL, 1LL, &WPP_069cc08c20e532709d80f678bd350850_Traceguids, v14, v6);
}
