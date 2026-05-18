/*
 * XREFs of sub_180030098 @ 0x180030098
 * Callers:
 *     sub_18002DC3C @ 0x18002DC3C (sub_18002DC3C.c)
 *     sub_180032BC0 @ 0x180032BC0 (sub_180032BC0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_180030098(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Engine::Engine::EngineSceneData::`vftable';
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
