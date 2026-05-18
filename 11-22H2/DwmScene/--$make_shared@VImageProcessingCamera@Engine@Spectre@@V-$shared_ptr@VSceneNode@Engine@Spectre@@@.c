/*
 * XREFs of ??$make_shared@VImageProcessingCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180071CD0
 * Callers:
 *     ??$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@XZ @ 0x180070F94 (--$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$share.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800978B4 (--0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ImageProcessingCamera,std::shared_ptr<Spectre::Engine::SceneNode>>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx

  v2 = operator new(0x6F8uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vftable';
    Spectre::Engine::ImageProcessingCamera::ImageProcessingCamera((Spectre::Engine::Camera *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 4;
  *a1 = v3 + 4;
  a1[1] = v3;
  if ( v3 != (_DWORD *)-16LL )
  {
    v5 = *((_QWORD *)v3 + 4);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement(v3 + 2);
      v6 = (volatile signed __int32 *)a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = v4;
        v8 = a1[1];
        _InterlockedIncrement(v6 + 3);
      }
      *((_QWORD *)v4 + 1) = v7;
      v9 = (std::_Ref_count_base *)*((_QWORD *)v4 + 2);
      *((_QWORD *)v4 + 2) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
