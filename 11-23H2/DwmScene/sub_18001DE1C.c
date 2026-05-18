/*
 * XREFs of sub_18001DE1C @ 0x18001DE1C
 * Callers:
 *     sub_18001CB14 @ 0x18001CB14 (sub_18001CB14.c)
 *     sub_18001D2CC @ 0x18001D2CC (sub_18001D2CC.c)
 *     sub_18001D36C @ 0x18001D36C (sub_18001D36C.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 *     sub_180024BE4 @ 0x180024BE4 (sub_180024BE4.c)
 *     sub_180024D9C @ 0x180024D9C (sub_180024D9C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_18002CCA0 @ 0x18002CCA0 (sub_18002CCA0.c)
 *     sub_180051F74 @ 0x180051F74 (sub_180051F74.c)
 *     sub_180052044 @ 0x180052044 (sub_180052044.c)
 *     sub_180052114 @ 0x180052114 (sub_180052114.c)
 *     sub_1800521E4 @ 0x1800521E4 (sub_1800521E4.c)
 *     sub_1800522B4 @ 0x1800522B4 (sub_1800522B4.c)
 *     sub_180052384 @ 0x180052384 (sub_180052384.c)
 *     sub_180052454 @ 0x180052454 (sub_180052454.c)
 *     sub_180052524 @ 0x180052524 (sub_180052524.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 *     sub_180059984 @ 0x180059984 (sub_180059984.c)
 *     sub_180059C94 @ 0x180059C94 (sub_180059C94.c)
 *     sub_180061784 @ 0x180061784 (sub_180061784.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007CAE4 @ 0x18007CAE4 (sub_18007CAE4.c)
 *     sub_18007CC14 @ 0x18007CC14 (sub_18007CC14.c)
 *     sub_18007FD84 @ 0x18007FD84 (sub_18007FD84.c)
 *     sub_1800915D4 @ 0x1800915D4 (sub_1800915D4.c)
 *     sub_180091E20 @ 0x180091E20 (sub_180091E20.c)
 *     sub_180091F70 @ 0x180091F70 (sub_180091F70.c)
 *     sub_18009BD28 @ 0x18009BD28 (sub_18009BD28.c)
 *     sub_18009C708 @ 0x18009C708 (sub_18009C708.c)
 *     sub_1800C207C @ 0x1800C207C (sub_1800C207C.c)
 *     sub_1800C214C @ 0x1800C214C (sub_1800C214C.c)
 *     sub_1800C221C @ 0x1800C221C (sub_1800C221C.c)
 *     sub_1800C22EC @ 0x1800C22EC (sub_1800C22EC.c)
 *     sub_1800C23BC @ 0x1800C23BC (sub_1800C23BC.c)
 *     sub_1800C248C @ 0x1800C248C (sub_1800C248C.c)
 *     sub_1800C255C @ 0x1800C255C (sub_1800C255C.c)
 *     sub_1800C262C @ 0x1800C262C (sub_1800C262C.c)
 *     sub_1800C26FC @ 0x1800C26FC (sub_1800C26FC.c)
 *     sub_1800C27CC @ 0x1800C27CC (sub_1800C27CC.c)
 *     sub_1800C289C @ 0x1800C289C (sub_1800C289C.c)
 *     sub_1800C296C @ 0x1800C296C (sub_1800C296C.c)
 *     sub_1800C2A3C @ 0x1800C2A3C (sub_1800C2A3C.c)
 *     sub_1800C2B0C @ 0x1800C2B0C (sub_1800C2B0C.c)
 *     sub_1800C2BDC @ 0x1800C2BDC (sub_1800C2BDC.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C2D7C @ 0x1800C2D7C (sub_1800C2D7C.c)
 *     sub_1800D57BC @ 0x1800D57BC (sub_1800D57BC.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D6AF4 @ 0x1800D6AF4 (sub_1800D6AF4.c)
 *     sub_1800DE4F0 @ 0x1800DE4F0 (sub_1800DE4F0.c)
 *     sub_1800DF71C @ 0x1800DF71C (sub_1800DF71C.c)
 *     sub_1800E0400 @ 0x1800E0400 (sub_1800E0400.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001DE1C(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
