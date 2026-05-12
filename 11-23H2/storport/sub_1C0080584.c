/*
 * XREFs of sub_1C0080584 @ 0x1C0080584
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C00803F0 @ 0x1C00803F0 (sub_1C00803F0.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 *     sub_1C0080A58 @ 0x1C0080A58 (sub_1C0080A58.c)
 */

__int64 __fastcall sub_1C0080584(__int64 a1)
{
  __int64 result; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = sub_1C0080710(a1 + 56, a1 + 72);
  if ( (int)result >= 0 )
  {
    v4 = 0;
    v3 = 0;
    if ( (int)sub_1C0080A58(a1 + 56, &v3, &v4) < 0 || v3 == -7 )
    {
      ++*(_DWORD *)(a1 + 68);
      return sub_1C00803F0(a1);
    }
    else
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x10u, (__int64)&unk_1C008B728);
      return 3221225861LL;
    }
  }
  return result;
}
