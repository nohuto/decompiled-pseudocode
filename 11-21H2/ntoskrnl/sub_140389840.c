/*
 * XREFs of sub_140389840 @ 0x140389840
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14037E048 @ 0x14037E048 (sub_14037E048.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall sub_140389840(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
