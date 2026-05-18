/*
 * XREFs of sub_180059FB0 @ 0x180059FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007A0EC @ 0x18007A0EC (sub_18007A0EC.c)
 */

_QWORD *__fastcall sub_180059FB0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_18007A0EC();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
