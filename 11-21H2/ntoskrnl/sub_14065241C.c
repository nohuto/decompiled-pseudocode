/*
 * XREFs of sub_14065241C @ 0x14065241C
 * Callers:
 *     sub_1406510A0 @ 0x1406510A0 (sub_1406510A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140652118 @ 0x140652118 (sub_140652118.c)
 */

__int64 __fastcall sub_14065241C(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = sub_140652118(a1, a2, &v5);
  if ( v3 >= 0 )
    sub_14042A5E0(a1, 6LL);
  return (unsigned int)v3;
}
