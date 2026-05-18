/*
 * XREFs of sub_18009D8CC @ 0x18009D8CC
 * Callers:
 *     sub_18009D920 @ 0x18009D920 (sub_18009D920.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB222 @ 0x1800EB222 (sub_1800EB222.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void **__fastcall sub_18009D8CC(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::VertexLayoutState::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  v3 = a1[6];
  if ( v3 )
    result = (void **)sub_180010530(v3);
  v4 = a1[4];
  if ( v4 )
    result = (void **)sub_180010530(v4);
  v5 = a1[2];
  if ( v5 )
    return (void **)sub_180010530(v5);
  return result;
}
