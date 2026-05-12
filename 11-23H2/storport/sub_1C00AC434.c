/*
 * XREFs of sub_1C00AC434 @ 0x1C00AC434
 * Callers:
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 */

__int64 sub_1C00AC434()
{
  int v0; // r9d
  int v1; // eax
  __int64 result; // rax

  v0 = KseUnregisterShim(&unk_1C0093170, 0LL, 0LL);
  if ( v0 < 0
    && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xDu, (__int64)&unk_1C008B030, v0);
  }
  v1 = KseUnregisterShim(&unk_1C00932F0, 0LL, 0LL);
  if ( v1 < 0
    && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C008B030, v1);
  }
  result = KseUnregisterShim(&unk_1C0093328, 0LL, 0LL);
  if ( (int)result < 0
    && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    return sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C008B030, result);
  }
  return result;
}
