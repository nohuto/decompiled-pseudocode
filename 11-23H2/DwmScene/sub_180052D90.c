/*
 * XREFs of sub_180052D90 @ 0x180052D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B448 @ 0x18008B448 (sub_18008B448.c)
 */

_QWORD *__fastcall sub_180052D90(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_18008B448();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
