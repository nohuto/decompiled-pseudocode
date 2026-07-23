/*
 * XREFs of sub_1405C48A0 @ 0x1405C48A0
 * Callers:
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_1402874E8 @ 0x1402874E8 (sub_1402874E8.c)
 * Callees:
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 */

__int64 __fastcall sub_1405C48A0(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( (v3 & 0x80u) != 0 )
    return *((_DWORD *)a1 + 11) - (*((_DWORD *)a1 + 13) & 0x3FFFFFFFu);
  return sub_140287C30((_QWORD *)v2);
}
