/*
 * XREFs of sub_18009ED34 @ 0x18009ED34
 * Callers:
 *     sub_18009ED80 @ 0x18009ED80 (sub_18009ED80.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB209 @ 0x1800EB209 (sub_1800EB209.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void **__fastcall sub_18009ED34(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::IndexBufferState::`vftable';
  *a1 = &Spectre::Engine::IndexBufferState::`vftable';
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
