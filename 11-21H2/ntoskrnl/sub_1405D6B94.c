/*
 * XREFs of sub_1405D6B94 @ 0x1405D6B94
 * Callers:
 *     sub_1405D6C08 @ 0x1405D6C08 (sub_1405D6C08.c)
 *     sub_140996A20 @ 0x140996A20 (sub_140996A20.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405DD4C0 @ 0x1405DD4C0 (sub_1405DD4C0.c)
 */

__int64 __fastcall sub_1405D6B94(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v6 = sub_140348800(0);
  result = sub_1405DD4C0(v6, &v10, &v9);
  v8 = v10;
  if ( !a1 )
  {
    result = v10 - *a2 - v9;
    *a3 += result;
  }
  *a2 = v8 - v9;
  return result;
}
