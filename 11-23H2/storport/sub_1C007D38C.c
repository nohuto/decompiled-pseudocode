/*
 * XREFs of sub_1C007D38C @ 0x1C007D38C
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C00560B8 @ 0x1C00560B8 (sub_1C00560B8.c)
 */

__int64 __fastcall sub_1C007D38C(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    result = sub_1C00560B8(a1, a2);
    if ( (int)result >= 0 )
      return sub_1C00560B8(a1, a3);
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C008B4B8);
    return 3221225485LL;
  }
  return result;
}
