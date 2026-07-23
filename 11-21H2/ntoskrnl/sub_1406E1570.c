/*
 * XREFs of sub_1406E1570 @ 0x1406E1570
 * Callers:
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1409AB8A0 @ 0x1409AB8A0 (sub_1409AB8A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E1570(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1264);
  }
  return 0;
}
