/*
 * XREFs of sub_1800390DC @ 0x1800390DC
 * Callers:
 *     sub_180039180 @ 0x180039180 (sub_180039180.c)
 *     sub_1800CFB1C @ 0x1800CFB1C (sub_1800CFB1C.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_1800390BC @ 0x1800390BC (sub_1800390BC.c)
 *     sub_180039630 @ 0x180039630 (sub_180039630.c)
 */

__int64 __fastcall sub_1800390DC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_180039630();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 )
    sub_180010574(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
    sub_180010574(v3);
  sub_1800390BC(a1 + 12);
  return sub_1800280AC((__int64)a1);
}
