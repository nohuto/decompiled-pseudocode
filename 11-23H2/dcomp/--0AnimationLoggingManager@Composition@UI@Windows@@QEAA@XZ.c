/*
 * XREFs of ??0AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180068840
 * Callers:
 *     ??$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationLoggingManager@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180068798 (--$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180068B10 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

Windows::UI::Composition::AnimationLoggingManager *__fastcall Windows::UI::Composition::AnimationLoggingManager::AnimationLoggingManager(
        Windows::UI::Composition::AnimationLoggingManager *this)
{
  SIZE_T size_of; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  Windows::UI::Composition::AnimationLoggingManager *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::AnimationLoggingManager::`vftable';
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  size_of = std::_Get_size_of_n<40>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 17) = v3;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 19) = v4;
  result = this;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  return result;
}
