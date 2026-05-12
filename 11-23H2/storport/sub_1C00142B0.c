/*
 * XREFs of sub_1C00142B0 @ 0x1C00142B0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C0014348 @ 0x1C0014348 (sub_1C0014348.c)
 *     sub_1C006DDBC @ 0x1C006DDBC (sub_1C006DDBC.c)
 *     sub_1C006E0D8 @ 0x1C006E0D8 (sub_1C006E0D8.c)
 *     sub_1C0071348 @ 0x1C0071348 (sub_1C0071348.c)
 */

__int64 __fastcall sub_1C00142B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v11; // [rsp+58h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  HIBYTE(v11) = 0;
  if ( a2 && *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v5 = a2;
    LOWORD(v11) = *(_WORD *)(a2 + 8);
    BYTE2(v11) = *(_BYTE *)(a2 + 10);
    v4 = sub_1C00081BC(a1, v11);
  }
  if ( a4 == 1 )
  {
    if ( a2 )
      return sub_1C006E0D8(a1, v4, v5, a3);
    else
      return sub_1C006DDBC(a1, a3);
  }
  else if ( a2 )
  {
    return sub_1C0014348(a1, v4, v5, a3);
  }
  else
  {
    return sub_1C0071348(a1, a3);
  }
}
