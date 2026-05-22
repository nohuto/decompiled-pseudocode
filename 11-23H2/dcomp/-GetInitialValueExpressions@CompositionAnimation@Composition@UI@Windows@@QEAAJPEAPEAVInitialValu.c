/*
 * XREFs of ?GetInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAPEAVInitialValueExpressionCollection@234@@Z @ 0x18014F2CC
 * Callers:
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 *     ?get_InitialValueExpressions@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180150C10 (-get_InitialValueExpressions@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IMap.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompositionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollection@Composition@UI@Windows@@$$QEAPEAVCompositionAnimation@456@@Z @ 0x18014DFC8 (--$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompos.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::GetInitialValueExpressions(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::InitialValueExpressionCollection **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionAnimation *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 264);
  if ( *((_QWORD *)this + 33)
    || (v8 = this,
        v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionCollection,Windows::UI::Composition::InitialValueExpressionCollection,Windows::UI::Composition::CompositionAnimation *>(
               (Microsoft::WRL2::NestableRuntimeClass **)this + 33,
               &v8),
        v5 = v4,
        v4 >= 0) )
  {
    if ( *v2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*v2);
    *a2 = *v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x560,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
