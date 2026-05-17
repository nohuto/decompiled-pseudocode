/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x180115268
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800FFC90 (RtlpSetHeapDebuggingInformation.c)
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
