/*
 * XREFs of sub_1403D3380 @ 0x1403D3380
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_1403D3380()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = sub_140303720(qword_140C4E4B0);
  sub_14042A5E0(v0, v1);
  ++*(_DWORD *)(qword_140C4E4B0 + 64);
  return 1;
}
