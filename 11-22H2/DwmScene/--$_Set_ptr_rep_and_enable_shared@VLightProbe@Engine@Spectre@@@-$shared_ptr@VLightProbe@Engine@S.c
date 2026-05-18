/*
 * XREFs of ??$_Set_ptr_rep_and_enable_shared@VLightProbe@Engine@Spectre@@@?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@AEAAXQEAVLightProbe@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180050D7C
 * Callers:
 *     ?Clone@LightProbe@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180051690 (-Clone@LightProbe@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$sh.c)
 *     ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68 (--$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLigh.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<Spectre::Engine::LightProbe>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::LightProbe>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = (volatile signed __int32 *)a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        v5 = a2;
        v6 = a1[1];
        _InterlockedIncrement(v4 + 3);
      }
      *(_QWORD *)(a2 + 8) = v5;
      v7 = *(std::_Ref_count_base **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v4 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    }
  }
}
