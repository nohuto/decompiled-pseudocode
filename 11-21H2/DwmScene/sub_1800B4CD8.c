/*
 * XREFs of sub_1800B4CD8 @ 0x1800B4CD8
 * Callers:
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 *     sub_18010795F @ 0x18010795F (sub_18010795F.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 */

void **__fastcall sub_1800B4CD8(__int64 a1)
{
  __int64 v1; // rbx
  void **result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    sub_1800B3DDC(v1 + 280);
    sub_1800B3DDC(v1 + 96);
    sub_1800FC250(v1 + 72);
    result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
    *(_QWORD *)(v1 + 64) = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
    v4 = *(_QWORD *)(v1 + 56);
    if ( v4 >= 0x10 )
      result = (void **)sub_180010884(*(char **)(v1 + 32), v4 + 1);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 15LL;
    *(_BYTE *)(v1 + 32) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      return (void **)sub_180010884(*(char **)(a1 + 8), 0x1D0uLL);
  }
  return result;
}
