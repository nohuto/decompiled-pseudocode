/*
 * XREFs of sub_1800DE0B0 @ 0x1800DE0B0
 * Callers:
 *     sub_1800DF000 @ 0x1800DF000 (sub_1800DF000.c)
 *     sub_1800F2081 @ 0x1800F2081 (sub_1800F2081.c)
 * Callees:
 *     sub_180038EE8 @ 0x180038EE8 (sub_180038EE8.c)
 */

volatile __int32 *__fastcall sub_1800DE0B0(_QWORD **a1)
{
  _QWORD *v1; // rcx
  volatile __int32 *result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180038EE8(*v1 + 256LL, 0);
  return result;
}
