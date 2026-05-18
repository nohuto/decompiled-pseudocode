/*
 * XREFs of sub_1800934D0 @ 0x1800934D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800922C8 @ 0x1800922C8 (sub_1800922C8.c)
 */

unsigned __int8 __fastcall sub_1800934D0(__int64 a1)
{
  unsigned __int8 result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // r10
  _QWORD *v7; // r10
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_180011DE0((_QWORD *)(a1 + 1784));
  if ( result )
  {
    sub_1800922C8(*v6, v3, v4, v5);
    *(_OWORD *)v8 = 0LL;
    result = (unsigned __int8)sub_180011020(v7, v8);
    if ( v8[1] )
      result = sub_180010530(v8[1]);
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
