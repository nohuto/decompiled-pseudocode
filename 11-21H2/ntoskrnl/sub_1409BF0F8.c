/*
 * XREFs of sub_1409BF0F8 @ 0x1409BF0F8
 * Callers:
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409BF598 @ 0x1409BF598 (sub_1409BF598.c)
 *     sub_1409BF6D0 @ 0x1409BF6D0 (sub_1409BF6D0.c)
 */

__int64 __fastcall sub_1409BF0F8(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 *v4; // r10
  _DWORD *v5; // r11
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h]

  result = *(unsigned int *)(a1 + 28);
  if ( (result & 4) == 0 )
  {
    v3 = *((_DWORD *)a2 + 2);
    v7 = *a2;
    v8 = v3;
    sub_1409BF6D0(&v7, a1);
    result = sub_1409BF598(&v7);
    if ( (_BYTE)result )
    {
      v6 = *v4;
      result = v8;
      *(_QWORD *)v6 = v7;
      *(_DWORD *)(v6 + 8) = result;
      *v4 += 12LL;
      ++*v5;
    }
  }
  return result;
}
