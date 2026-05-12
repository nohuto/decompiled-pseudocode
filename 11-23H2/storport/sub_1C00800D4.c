/*
 * XREFs of sub_1C00800D4 @ 0x1C00800D4
 * Callers:
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 * Callees:
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 *     sub_1C0080A58 @ 0x1C0080A58 (sub_1C0080A58.c)
 *     sub_1C0080CE4 @ 0x1C0080CE4 (sub_1C0080CE4.c)
 */

__int64 __fastcall sub_1C00800D4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // r8
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a2 + 12) = 0;
  v2 = (_QWORD *)(a2 + 16);
  result = sub_1C0080710(a1, a2 + 16);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(*v2 + 8LL);
    if ( (unsigned int)(v6 - 7) > 0xA )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x22u, (__int64)&unk_1C008B728, v6);
      return 3221225861LL;
    }
    result = sub_1C0080710(a1, *v2);
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a2 + 12);
      v9 = 0;
      v8 = 0;
      result = sub_1C0080A58(a1, &v8, &v9);
      if ( (int)result >= 0 )
      {
        if ( v8 == 0xF3 )
        {
          ++*(_DWORD *)(a1 + 12);
          return result;
        }
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
          sub_1C0080CE4(off_1C0093070->AttachedDevice, 35LL, v7, v8, v9);
        return 3221225861LL;
      }
    }
  }
  return result;
}
