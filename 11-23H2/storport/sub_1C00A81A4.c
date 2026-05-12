/*
 * XREFs of sub_1C00A81A4 @ 0x1C00A81A4
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00144AC @ 0x1C00144AC (sub_1C00144AC.c)
 *     sub_1C00355F8 @ 0x1C00355F8 (sub_1C00355F8.c)
 *     sub_1C0035A4C @ 0x1C0035A4C (sub_1C0035A4C.c)
 *     sub_1C0035B0C @ 0x1C0035B0C (sub_1C0035B0C.c)
 *     sub_1C0035B3C @ 0x1C0035B3C (sub_1C0035B3C.c)
 *     sub_1C0035BE0 @ 0x1C0035BE0 (sub_1C0035BE0.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 *     sub_1C003DAD4 @ 0x1C003DAD4 (sub_1C003DAD4.c)
 *     sub_1C0043B00 @ 0x1C0043B00 (sub_1C0043B00.c)
 *     sub_1C00574D0 @ 0x1C00574D0 (sub_1C00574D0.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 */

__int64 __fastcall sub_1C00A81A4(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v4; // rbp
  unsigned int v5; // eax
  struct _DEVICE_OBJECT *v6; // rsi
  __int64 v7; // r8
  unsigned int v8; // ebx

  sub_1C0043B00(a1);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 88) - 5;
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  *(_DWORD *)(a1 + 88) = 6;
  if ( v5 > 1 )
  {
    sub_1C0035A4C(a1);
    sub_1C0035B0C(a1);
    sub_1C0035B3C(a1);
    sub_1C0035BE0((struct _UNICODE_STRING *)a1);
    sub_1C003DAD4(a1);
    sub_1C00A7F18(a1, (__int64)a2, v7);
  }
  if ( (*(_DWORD *)(a1 + 5920) & 1) != 0 )
    sub_1C00574D0(a1);
  sub_1C00355F8(a1);
  sub_1C003B11C(a1);
  sub_1C00144AC(v6, a2);
  v8 = sub_1C0003440(a2, 0, 0);
  IoDetachDevice(v6);
  IoDeleteDevice(v4);
  return v8;
}
