/*
 * XREFs of sub_18002B1A4 @ 0x18002B1A4
 * Callers:
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800A0BC0 @ 0x1800A0BC0 (sub_1800A0BC0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002B1A4(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfiler>::`vftable';
    sub_1800A0BC0(v4 + 16, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 16;
  a1[1] = v5;
  return a1;
}
