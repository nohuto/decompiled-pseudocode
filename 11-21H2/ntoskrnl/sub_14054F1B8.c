/*
 * XREFs of sub_14054F1B8 @ 0x14054F1B8
 * Callers:
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14054F1B8()
{
  ULONG_PTR v0; // rbx
  __int64 result; // rax
  _QWORD v2[14]; // [rsp+20h] [rbp-88h] BYREF

  v0 = qword_140D06A30;
  memset(v2, 0, 0x68uLL);
  v2[1] = *(_QWORD *)(qword_140D06A30 + 1088);
  v2[2] = qword_140D06A30;
  result = sub_140358A20(2u, 5, 0, (__int64)v2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(v0 + 992) = v2[3];
    *(_QWORD *)(v0 + 992) = v2[3] | 1LL;
  }
  return result;
}
