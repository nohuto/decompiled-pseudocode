/*
 * XREFs of sub_1406355B0 @ 0x1406355B0
 * Callers:
 *     sub_14024E0F0 @ 0x14024E0F0 (sub_14024E0F0.c)
 *     sub_140634830 @ 0x140634830 (sub_140634830.c)
 *     sub_140634F90 @ 0x140634F90 (sub_140634F90.c)
 *     sub_1406352B0 @ 0x1406352B0 (sub_1406352B0.c)
 * Callees:
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 */

void __fastcall sub_1406355B0(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = sub_1402E1D0C(a1, a2);
    sub_1402E1AB0(a1, *(unsigned int **)(a1 + 1152), 5u);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
}
