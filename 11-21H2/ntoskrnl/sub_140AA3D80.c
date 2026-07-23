/*
 * XREFs of sub_140AA3D80 @ 0x140AA3D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 */

char __fastcall sub_140AA3D80(__int64 a1)
{
  char result; // al

  if ( *(int *)(a1 + 16) >= 0 )
    return sub_140AA16A4(*(_QWORD *)(a1 + 8));
  return result;
}
