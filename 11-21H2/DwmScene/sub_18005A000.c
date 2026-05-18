/*
 * XREFs of sub_18005A000 @ 0x18005A000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A1C8 @ 0x18009A1C8 (sub_18009A1C8.c)
 */

_QWORD *__fastcall sub_18005A000(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_18009A1C8();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
