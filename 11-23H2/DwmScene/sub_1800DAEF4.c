/*
 * XREFs of sub_1800DAEF4 @ 0x1800DAEF4
 * Callers:
 *     sub_1800DAEC4 @ 0x1800DAEC4 (sub_1800DAEC4.c)
 *     sub_1800DAEF4 @ 0x1800DAEF4 (sub_1800DAEF4.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800DAEF4 @ 0x1800DAEF4 (sub_1800DAEF4.c)
 */

__int64 __fastcall sub_1800DAEF4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800100E8(v6, 0x30uLL) )
  {
    sub_1800DAEF4(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    sub_18000E72C(v6 + 5);
  }
  return result;
}
