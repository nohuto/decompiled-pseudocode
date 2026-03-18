/*
 * XREFs of CheckAccess @ 0x1C002FAE0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     <none>
 */

char __fastcall CheckAccess(unsigned int *a1, unsigned int *a2)
{
  char result; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx

  result = 0;
  if ( !UIPrivelegeIsolation::fEnforce )
    return 1;
  v5 = *a1;
  if ( v5 > *a2 )
    return 1;
  if ( v5 == *a2 )
  {
    v6 = a1[1];
    v7 = a2[1];
    if ( v6 == v7 || v7 == -1 || v6 == -1 )
      return 1;
  }
  return result;
}
