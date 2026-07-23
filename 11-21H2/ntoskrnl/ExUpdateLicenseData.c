/*
 * XREFs of ExUpdateLicenseData @ 0x1406EB170
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 */

__int64 ExUpdateLicenseData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r9d

  v1 = *((_QWORD *)sub_140347DB0() + 113);
  if ( qword_140D3B4D0 )
    return sub_14042A5E0(v1, v2);
  else
    return sub_1409FA6E0(v1, v2, v0);
}
