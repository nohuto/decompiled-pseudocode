/*
 * XREFs of sub_140521CB0 @ 0x140521CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050FCB0 @ 0x14050FCB0 (sub_14050FCB0.c)
 */

char __fastcall sub_140521CB0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 136);
  v2 = sub_140303720(qword_140C4E380);
  sub_14042A5E0(v2, v3);
  sub_14050FCB0(v1, v4);
  return 1;
}
