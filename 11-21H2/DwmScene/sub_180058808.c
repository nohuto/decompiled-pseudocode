/*
 * XREFs of sub_180058808 @ 0x180058808
 * Callers:
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180058808(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // al

  v3 = a2;
  LOBYTE(a2) = 10;
  v4 = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  return sub_18005865C(a1, v3, v4);
}
