/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140245F80
 * Callers:
 *     sub_140607D60 @ 0x140607D60 (sub_140607D60.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14092D010 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     sub_140245FE0 @ 0x140245FE0 (sub_140245FE0.c)
 *     sub_1402460B4 @ 0x1402460B4 (sub_1402460B4.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  sub_1402460B4(&qword_140C116D0);
  sub_140245FE0(Lookaside);
}
