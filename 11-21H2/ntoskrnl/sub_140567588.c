/*
 * XREFs of sub_140567588 @ 0x140567588
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140579004 @ 0x140579004 (sub_140579004.c)
 * Callees:
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 */

char __fastcall sub_140567588(__int64 a1)
{
  char v1; // bl

  v1 = sub_140553244(
         KiBugCheckData,
         qword_140C2BD88,
         qword_140C2BD90,
         qword_140C2BD98,
         qword_140C2BDA0,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  sub_140552B40(3);
  return v1;
}
