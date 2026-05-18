/*
 * XREFs of sub_180043B9C @ 0x180043B9C
 * Callers:
 *     sub_180043F00 @ 0x180043F00 (sub_180043F00.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

void **__fastcall sub_180043B9C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void **result; // rax

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
    sub_180010574(v2);
  result = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  return result;
}
