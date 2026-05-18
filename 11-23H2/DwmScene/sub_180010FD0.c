/*
 * XREFs of sub_180010FD0 @ 0x180010FD0
 * Callers:
 *     sub_1800115D8 @ 0x1800115D8 (sub_1800115D8.c)
 *     sub_18001B0A0 @ 0x18001B0A0 (sub_18001B0A0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 */

__int64 *__fastcall sub_180010FD0(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    sub_180011520(&v5);
    v5 = *a1;
    *a1 = a2;
    sub_18000E72C(&v5);
  }
  return a1;
}
