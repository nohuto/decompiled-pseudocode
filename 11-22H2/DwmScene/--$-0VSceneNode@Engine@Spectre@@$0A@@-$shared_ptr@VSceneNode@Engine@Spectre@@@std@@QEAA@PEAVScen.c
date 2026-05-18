/*
 * XREFs of ??$?0VSceneNode@Engine@Spectre@@$0A@@?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVSceneNode@Engine@Spectre@@@Z @ 0x18003EF90
 * Callers:
 *     ?CreateNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEB_K@Z @ 0x180040B38 (-CreateNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??1?$_Temporary_owner@VSceneNode@Engine@Spectre@@@std@@QEAA@XZ @ 0x18003FE50 (--1-$_Temporary_owner@VSceneNode@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::SceneNode>::shared_ptr<Spectre::Engine::SceneNode>(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // r8
  std::_Ref_count_base *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  v5 = 1LL;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *((_QWORD *)v4 + 2) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = (__int64 *)(a2 + 8);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
      v10 = a2;
      v11 = (std::_Ref_count_base *)a1[1];
      v8 = v11;
      std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(v7, &v10);
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
    }
  }
  v12 = 0LL;
  std::_Temporary_owner<Spectre::Engine::SceneNode>::~_Temporary_owner<Spectre::Engine::SceneNode>(&v12, v5);
  return a1;
}
