/*
 * XREFs of sub_180093470 @ 0x180093470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800922C8 @ 0x1800922C8 (sub_1800922C8.c)
 */

unsigned __int8 __fastcall sub_180093470(__int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // r10
  _QWORD *v6; // r10
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_180011DE0((_QWORD *)(a1 + 1768));
  if ( result )
  {
    sub_1800922C8(*v5, v2, v3, v4);
    *(_OWORD *)v7 = 0LL;
    result = (unsigned __int8)sub_180011020(v6, v7);
    if ( v7[1] )
      return sub_180010530(v7[1]);
  }
  return result;
}
