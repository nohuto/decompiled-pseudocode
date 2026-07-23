/*
 * XREFs of sub_140521C60 @ 0x140521C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_140521C60()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = sub_140303720(qword_140C4E4D0);
  sub_14042A5E0(v0, v1);
  ++*(_DWORD *)(qword_140C4E4D0 + 64);
  return 1;
}
