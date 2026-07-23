/*
 * XREFs of sub_1405FC72C @ 0x1405FC72C
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 * Callees:
 *     sub_1405FC7D8 @ 0x1405FC7D8 (sub_1405FC7D8.c)
 */

__int64 sub_1405FC72C(__int64 a1, _DWORD *a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  LODWORD(v4) = *a2;
  return sub_1405FC7D8(&unk_140D31A00, (__int64 *)va);
}
