/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402DF7B0
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_1406C7270 @ 0x1406C7270 (sub_1406C7270.c)
 *     sub_1406E9070 @ 0x1406E9070 (sub_1406E9070.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&unk_140D32580;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1464);
  return *v1[165];
}
