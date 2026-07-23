/*
 * XREFs of sub_1407756F4 @ 0x1407756F4
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140767CF8 @ 0x140767CF8 (sub_140767CF8.c)
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_14080E218 @ 0x14080E218 (sub_14080E218.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1409425A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_140B1ADD8 @ 0x140B1ADD8 (sub_140B1ADD8.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

BOOLEAN __fastcall sub_1407756F4(char a1)
{
  sub_14077572C(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&stru_140C46AC0, 1u);
  else
    return ExAcquireResourceSharedLite(&stru_140C46AC0, 1u);
}
