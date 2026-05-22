/*
 * XREFs of ?ValidateParams@@YAJPEBUInputProcessorCreateParams@@_N@Z @ 0x1800556AC
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003AD50 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateParams(const struct InputProcessorCreateParams *a1, char a2)
{
  __int64 result; // rax

  if ( !a1 || !*(_QWORD *)a1 || !*((_QWORD *)a1 + 1) )
    return 2147942487LL;
  if ( !a2 )
    return 0LL;
  result = 2147942487LL;
  if ( *((_QWORD *)a1 + 2) )
    return 0LL;
  return result;
}
