/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140292F90
 * Callers:
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_1403000B0 @ 0x1403000B0 (sub_1403000B0.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_140376F58 @ 0x140376F58 (sub_140376F58.c)
 *     sub_1403C1214 @ 0x1403C1214 (sub_1403C1214.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_14050B88C @ 0x14050B88C (sub_14050B88C.c)
 *     sub_140549B84 @ 0x140549B84 (sub_140549B84.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_140571D50 @ 0x140571D50 (sub_140571D50.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_14081A654 @ 0x14081A654 (sub_14081A654.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_14084A750 @ 0x14084A750 (sub_14084A750.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_1409AE968 @ 0x1409AE968 (sub_1409AE968.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
