/*
 * XREFs of sub_1405F66DC @ 0x1405F66DC
 * Callers:
 *     sub_140382E98 @ 0x140382E98 (sub_140382E98.c)
 *     sub_1403831B8 @ 0x1403831B8 (sub_1403831B8.c)
 *     sub_1403833EC @ 0x1403833EC (sub_1403833EC.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405F66DC(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx

  v2 = *a2;
  if ( (*a2 & 2) != 0 )
    v3 = ((unsigned __int16)v2 ^ (unsigned __int16)(v2 + 4)) & 0xFFC ^ v2;
  else
    v3 = v2 & 0xFFFFF001 | 6;
  *a2 = v3;
  return *(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL;
}
