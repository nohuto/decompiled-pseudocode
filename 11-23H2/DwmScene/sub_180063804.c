/*
 * XREFs of sub_180063804 @ 0x180063804
 * Callers:
 *     sub_180061DF8 @ 0x180061DF8 (sub_180061DF8.c)
 *     sub_180065860 @ 0x180065860 (sub_180065860.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180063EF4 @ 0x180063EF4 (sub_180063EF4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180063804(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    memset((void *)(v2 + 16), 0, 0x148uLL);
    sub_180063EF4(v3 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
