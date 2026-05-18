/*
 * XREFs of ?CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z @ 0x1800187F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreWorld@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016B9C (--$MakeAndInitialize@VSpectreWorld@@V1@AEAV-$shared_ptr@VScene@Engine@Spectre@@@std_ea_180016B9C.c)
 *     ??$_Emplace_reallocate@PEAVSpectreWorld@@@?$vector@PEAVSpectreWorld@@V?$allocator@PEAVSpectreWorld@@@std@@@std@@QEAAPEAPEAVSpectreWorld@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180016DFC (--$_Emplace_reallocate@PEAVSpectreWorld@@@-$vector@PEAVSpectreWorld@@V-$allocator@PEAVSpectreWor.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateSceneStandardContent@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180033324 (-CreateSceneStandardContent@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpectreRenderer::CreateWorld(SpectreRenderer *this, struct ISpectreWorld **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct ISpectreWorld **v7; // rdx
  struct ISpectreWorld *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-18h]
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct ISpectreWorld *v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  Spectre::Engine::Engine::CreateSceneStandardContent(*((_QWORD *)this + 7), &v9);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v9 + 16));
  v13 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SpectreWorld,SpectreWorld,std::shared_ptr<Spectre::Engine::Scene> &>(
         (__int64 *)&v13,
         (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = (__int64)v13;
    v7 = (struct ISpectreWorld **)*((_QWORD *)this + 15);
    if ( v7 == *((struct ISpectreWorld ***)this + 16) )
    {
      std::vector<SpectreWorld *>::_Emplace_reallocate<SpectreWorld *>((__int64 *)this + 14, (__int64)v7, &v14);
    }
    else
    {
      *v7 = v13;
      *((_QWORD *)this + 15) += 8LL;
    }
    v8 = v13;
    v13 = 0LL;
    *a2 = v8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    return v5;
  }
}
