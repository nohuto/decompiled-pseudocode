/*
 * XREFs of sub_1C00801DC @ 0x1C00801DC
 * Callers:
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 * Callees:
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 */

__int64 __fastcall sub_1C00801DC(__int64 a1)
{
  __int64 result; // rax
  int v2; // r9d
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = sub_1C0080710(a1 + 56, &v3);
  if ( (int)result >= 0 )
  {
    v2 = *(_DWORD *)(v3 + 8);
    if ( v2 != 3 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x18u, (__int64)&unk_1C008B728, v2);
      return 3221225861LL;
    }
  }
  return result;
}
