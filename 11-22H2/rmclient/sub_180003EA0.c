/*
 * XREFs of sub_180003EA0 @ 0x180003EA0
 * Callers:
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 * Callees:
 *     sub_1800089B0 @ 0x1800089B0 (sub_1800089B0.c)
 */

__int64 *__fastcall sub_180003EA0(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0LL;
  v3 = *v1;
  *v1 = 0LL;
  v5 = v3;
  sub_1800089B0(&v5);
  sub_1800089B0(&v6);
  return *a1;
}
