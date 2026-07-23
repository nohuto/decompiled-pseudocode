/*
 * XREFs of ExDeletePagedLookasideList @ 0x140245FB0
 * Callers:
 *     sub_140607E60 @ 0x140607E60 (sub_140607E60.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14092D010 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     sub_140245FE0 @ 0x140245FE0 (sub_140245FE0.c)
 *     sub_1402460B4 @ 0x1402460B4 (sub_1402460B4.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  sub_1402460B4(&qword_140C116F0);
  sub_140245FE0(Lookaside);
}
