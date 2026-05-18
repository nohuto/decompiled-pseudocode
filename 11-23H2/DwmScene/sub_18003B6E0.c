/*
 * XREFs of sub_18003B6E0 @ 0x18003B6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

__int64 __fastcall sub_18003B6E0(__int64 a1, __int64 a2)
{
  sub_18003E330(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
