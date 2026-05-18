/*
 * XREFs of sub_180029300 @ 0x180029300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028488 @ 0x180028488 (sub_180028488.c)
 */

__int64 __fastcall sub_180029300(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_180028488(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
