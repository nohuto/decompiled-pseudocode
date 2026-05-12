/*
 * XREFs of sub_1C003766C @ 0x1C003766C
 * Callers:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00343A0 @ 0x1C00343A0 (sub_1C00343A0.c)
 *     sub_1C0043B50 @ 0x1C0043B50 (sub_1C0043B50.c)
 */

__int64 __fastcall sub_1C003766C(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  KIRQL v4; // bl
  int v5; // esi
  char v6; // cl
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 336;
  strcpy(v7, "wakeup=1");
  result = sub_1C0043B50(a1 + 336, v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v4 = sub_1C000889C(a1);
    v5 = sub_1C00343A0(v1);
    sub_1C0008914(a1, v4);
    v6 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v6;
    if ( v5 >= 0 )
      *(_BYTE *)(a1 + 104) = v6 | 1;
    return (unsigned int)v5;
  }
  return result;
}
