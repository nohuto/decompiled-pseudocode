/*
 * XREFs of sub_18003FC80 @ 0x18003FC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

__int64 __fastcall sub_18003FC80(__int64 a1, __int64 a2)
{
  sub_180043668(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
