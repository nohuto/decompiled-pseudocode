/*
 * XREFs of sub_140240DB4 @ 0x140240DB4
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 *     sub_14092E8CC @ 0x14092E8CC (sub_14092E8CC.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall sub_140240DB4(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
