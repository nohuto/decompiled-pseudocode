/*
 * XREFs of sub_1406330C0 @ 0x1406330C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 */

LONG __fastcall sub_1406330C0(__int64 a1, __int64 a2, __int64 a3, struct _KEVENT **a4, __int64 *a5)
{
  struct _KEVENT *v5; // rbx

  v5 = *a4;
  sub_1403AB344((__int64)KeGetCurrentThread(), *a5);
  return KeSetEvent(v5, 0, 0);
}
