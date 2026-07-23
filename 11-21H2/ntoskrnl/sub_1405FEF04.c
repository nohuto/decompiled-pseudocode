/*
 * XREFs of sub_1405FEF04 @ 0x1405FEF04
 * Callers:
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1405FE9EC @ 0x1405FE9EC (sub_1405FE9EC.c)
 */

char __fastcall sub_1405FEF04(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( !dword_140C1ACBC )
  {
    v1 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v3, a1, 1LL);
    if ( v1 )
      sub_1405FE9EC(v1[6]);
  }
  return sub_1402D81DC((__int64)&v3);
}
