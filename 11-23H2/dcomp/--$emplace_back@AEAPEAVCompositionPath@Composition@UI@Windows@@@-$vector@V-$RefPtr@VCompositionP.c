/*
 * XREFs of ??$emplace_back@AEAPEAVCompositionPath@Composition@UI@Windows@@@?$vector@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?A_TAEAPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180178298
 * Callers:
 *     ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z @ 0x1801785A0 (-InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPath>>::emplace_back<Windows::UI::Composition::CompositionPath * &>(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  Microsoft::WRL2::NestableRuntimeClass **result; // rax

  v4 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
  if ( v4 == *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 16) )
    return std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPath>>::_Emplace_reallocate<Windows::UI::Composition::CompositionPath * &>(
             a1,
             v4,
             a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v5);
  result = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 1;
  return result;
}
