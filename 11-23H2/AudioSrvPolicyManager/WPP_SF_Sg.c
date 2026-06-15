/*
 * XREFs of WPP_SF_Sg @ 0x18002FF04
 * Callers:
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002F7DC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sg(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
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
  return TraceMessage(a1, 0x2Bu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, 0x34u, a4, v5, va, 8LL, 0LL);
}
