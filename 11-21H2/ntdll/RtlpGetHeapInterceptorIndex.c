/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x180114E08
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800FFFC0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  unsigned __int16 v2; // dx
  bool v3; // zf

  LOWORD(result) = 0;
  while ( 1 )
  {
    v2 = result + 1;
    v3 = RtlpInterceptorRoutines[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v3 )
      break;
    if ( v2 >= 2u )
      return 0LL;
  }
  return result;
}
