/*
 * XREFs of sub_18009EAF8 @ 0x18009EAF8
 * Callers:
 *     sub_18009EB40 @ 0x18009EB40 (sub_18009EB40.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void **__fastcall sub_18009EAF8(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = &Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = a1[4];
  if ( v3 )
    result = (void **)sub_180010530(v3);
  v4 = a1[2];
  if ( v4 )
    return (void **)sub_180010530(v4);
  return result;
}
