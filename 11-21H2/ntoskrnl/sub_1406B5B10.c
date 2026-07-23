/*
 * XREFs of sub_1406B5B10 @ 0x1406B5B10
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     IoCheckFunctionAccess @ 0x1407F9A00 (IoCheckFunctionAccess.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1406B5B10(int a1, int *a2)
{
  int result; // eax

  result = 0;
  *a2 = 0;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 17563648;
    *a2 = 17563648;
  }
  if ( (a1 & 0x13) != 0 )
  {
    result |= 0x80000u;
    *a2 = result;
  }
  if ( (a1 & 4) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x20) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x100) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x40) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  if ( (a1 & 8) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  if ( (a1 & 0x1F8) != 0 && (a1 & 0x50000000) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  return result;
}
