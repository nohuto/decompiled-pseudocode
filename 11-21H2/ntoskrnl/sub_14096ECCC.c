/*
 * XREFs of sub_14096ECCC @ 0x14096ECCC
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140977FF8 @ 0x140977FF8 (sub_140977FF8.c)
 * Callees:
 *     sub_14096EC0C @ 0x14096EC0C (sub_14096EC0C.c)
 */

__int64 __fastcall sub_14096ECCC(unsigned __int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  if ( *(_QWORD *)(v2 + 432) )
    return sub_14096EC0C(a1, v2 + 424 + (a2 != 0 ? 0x20 : 0));
  else
    return 1LL;
}
