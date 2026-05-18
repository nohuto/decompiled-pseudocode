/*
 * XREFs of ?RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003D11C
 * Callers:
 *     ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790 (-Uninitialize@SpectreMeshComponent@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::SceneNode::RemoveComponent(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // r9
  __int64 *v7; // r10
  unsigned int v8; // eax
  int v9; // r8d
  std::_Ref_count_base *v10; // rcx
  _QWORD v11[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess((Spectre::Engine::SceneNode *)a1);
  v4 = *(__int64 **)(a1 + 376);
  if ( v4 == *(__int64 **)(a1 + 384) )
  {
LABEL_4:
    std::string::string(v12, (__int64)"Attempt to remove component that has not been added to scene node.");
    v8 = (unsigned int)std::string::string(
                         v11,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\scenenode.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v8, v9, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  while ( !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v4, a2) )
  {
    v4 = v6;
    if ( v6 == v7 )
      goto LABEL_4;
  }
  std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
    v6,
    v7,
    v5);
  std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(*(_QWORD *)(a1 + 384) - 16LL);
  *(_QWORD *)(a1 + 384) -= 16LL;
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
