/*
 * XREFs of sub_14056C780 @ 0x14056C780
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14056C780(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 992);
  *(_QWORD *)(a1 + 992) = 0LL;
  if ( v1 )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    return sub_140358A20(2u, 30, 0, (__int64)v3);
  }
  return result;
}
