/*
 * XREFs of WPP_SF_Sddd @ 0x18002FE58
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18002DA28 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sddd(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v9; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
           0x2Eu,
           a4,
           v5,
           va,
           4LL,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
