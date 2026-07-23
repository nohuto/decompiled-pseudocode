/*
 * XREFs of sub_14091D4B0 @ 0x14091D4B0
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14020AF90 @ 0x14020AF90 (sub_14020AF90.c)
 *     sub_1406D92CC @ 0x1406D92CC (sub_1406D92CC.c)
 */

void __fastcall sub_14091D4B0(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  sub_14020AF90(a1 + 112, (unsigned int *)(a1 + 1736));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1732) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  sub_1406D92CC(a1);
}
