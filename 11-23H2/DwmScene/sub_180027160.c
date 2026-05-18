/*
 * XREFs of sub_180027160 @ 0x180027160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800265A8 @ 0x1800265A8 (sub_1800265A8.c)
 */

__int64 __fastcall sub_180027160(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_1800265A8(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
