/*
 * XREFs of sub_1405C75AC @ 0x1405C75AC
 * Callers:
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CC1E0 @ 0x1405CC1E0 (sub_1405CC1E0.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     sub_1405D67D4 @ 0x1405D67D4 (sub_1405D67D4.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 * Callees:
 *     <none>
 */

__int64 sub_1405C75AC()
{
  if ( qword_140D068A8 && *(_DWORD *)qword_140D068A8 )
    return (unsigned int)(*(_DWORD *)qword_140D068A8 - 1);
  else
    return 0xFFFFFFFFLL;
}
