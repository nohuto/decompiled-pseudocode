/*
 * XREFs of sub_1C007BBF8 @ 0x1C007BBF8
 * Callers:
 *     sub_1C0079ED4 @ 0x1C0079ED4 (sub_1C0079ED4.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007BBF8(int **a1, int a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v4 = (int)a1;
  sub_1C0055B8C(*a1, "DeassignNamespaceLocking", a3, 0, 0LL, 0LL);
  return sub_1C007CF64(v4, a2, 0, 2053, (__int64)sub_1C007B420, (__int64)&v6, 0LL, 0LL, 0LL, 0LL);
}
