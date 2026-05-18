/*
 * XREFs of sub_18000B928 @ 0x18000B928
 * Callers:
 *     atexit @ 0x18000B968 (atexit.c)
 * Callees:
 *     _o__crt_atexit @ 0x18000BF52 (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x18000BFCC (_o__register_onexit_function.c)
 */

__int64 __fastcall sub_18000B928(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( (_QWORD)xmmword_1801D3170 == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function(&xmmword_1801D3170, a1);
  v3 = 0LL;
  if ( !v2 )
    return a1;
  return v3;
}
