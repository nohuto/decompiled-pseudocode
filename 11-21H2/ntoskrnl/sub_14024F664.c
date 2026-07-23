/*
 * XREFs of sub_14024F664 @ 0x14024F664
 * Callers:
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     sub_140630EF0 @ 0x140630EF0 (sub_140630EF0.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_140861D70 @ 0x140861D70 (sub_140861D70.c)
 *     sub_1409E52D0 @ 0x1409E52D0 (sub_1409E52D0.c)
 *     sub_1409E54B0 @ 0x1409E54B0 (sub_1409E54B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024F664(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
