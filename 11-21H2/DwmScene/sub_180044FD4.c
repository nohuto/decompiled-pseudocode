/*
 * XREFs of sub_180044FD4 @ 0x180044FD4
 * Callers:
 *     sub_180101F5B @ 0x180101F5B (sub_180101F5B.c)
 *     sub_1801020D5 @ 0x1801020D5 (sub_1801020D5.c)
 *     sub_18010211D @ 0x18010211D (sub_18010211D.c)
 *     sub_180102153 @ 0x180102153 (sub_180102153.c)
 *     sub_180102165 @ 0x180102165 (sub_180102165.c)
 *     sub_180102177 @ 0x180102177 (sub_180102177.c)
 *     sub_18010219B @ 0x18010219B (sub_18010219B.c)
 * Callees:
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 */

__int64 __fastcall sub_180044FD4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  _DWORD *v3; // rdx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  sub_18003070C(v1);
  result = sub_180030718(&v4);
  *v3 = result;
  return result;
}
