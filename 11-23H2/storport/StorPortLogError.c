/*
 * XREFs of StorPortLogError @ 0x1C00468B0
 * Callers:
 *     sub_1C00B2410 @ 0x1C00B2410 (sub_1C00B2410.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C00366F4 @ 0x1C00366F4 (sub_1C00366F4.c)
 *     sub_1C00367A0 @ 0x1C00367A0 (sub_1C00367A0.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  _DWORD *v9; // rbx
  int v10; // [rsp+30h] [rbp-18h]

  v9 = sub_1C000E2EC(a1);
  if ( v9 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      sub_1C00367A0((__int64)v9, a3, a4, a5, a6, a7);
    }
    else
    {
      v10 = a3;
      BYTE1(v10) = a4;
      sub_1C00366F4((__int64)v9, v10, a6, a7);
    }
  }
}
