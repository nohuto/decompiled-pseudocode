/*
 * XREFs of sub_1C0036F7C @ 0x1C0036F7C
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C0061200 @ 0x1C0061200 (sub_1C0061200.c)
 */

__int64 __fastcall sub_1C0036F7C(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 result; // rax

  v4 = a2;
  v5 = sub_1C00081BC(a1, a2);
  if ( v5 )
    return sub_1C0061200(v5, (unsigned int)(1000 * a3));
  result = (__int64)&off_1C0093070;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
  {
    result = HIDWORD(off_1C0093070->Timer);
    if ( (result & 0x20) != 0 && BYTE1(off_1C0093070->Timer) >= 3u )
      return sub_1C003EEB0(off_1C0093070->AttachedDevice, 52LL, &unk_1C0083210, v4, BYTE1(a2), BYTE2(a2));
  }
  return result;
}
