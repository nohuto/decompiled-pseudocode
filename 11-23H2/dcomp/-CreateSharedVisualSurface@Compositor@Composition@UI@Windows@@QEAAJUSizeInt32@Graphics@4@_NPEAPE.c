/*
 * XREFs of ?CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPEAVCompositionVisualSurface@234@@Z @ 0x180094B24
 * Callers:
 *     ?CreateSharedVisualSurfaceWithRealizationSize@Internal@Compositor@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@EPEAPEAUICompositionVisualSurface@345@@Z @ 0x180094A80 (-CreateSharedVisualSurfaceWithRealizationSize@Internal@Compositor@Composition@UI@Windows@@UEAAJU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??$MakeAndInitialize2@VCompositionVisualSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVisualSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x18007FAFC (--$MakeAndInitialize2@VCompositionVisualSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Freeze@CompositionVisualSurface@Composition@UI@Windows@@QEAAJXZ @ 0x180158E54 (-Freeze@CompositionVisualSurface@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateSharedVisualSurface(
        struct Windows::UI::Composition::Compositor *a1,
        __int64 a2,
        char a3,
        Windows::UI::Composition::CompositionVisualSurface **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edi
  __m128i v9; // xmm0
  Windows::UI::Composition::CompositionVisualSurface *v10; // rbx
  int v11; // edx
  DirectComposition::CDevice *v12; // rcx
  __int64 v14; // rdx
  Windows::UI::Composition::CompositionVisualSurface *v15; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::UI::Composition::Compositor *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v18; // [rsp+6Ch] [rbp+2Ch]
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = HIDWORD(a2);
  *a4 = 0LL;
  v6 = a2;
  if ( (int)a2 <= 0 || SHIDWORD(a2) <= 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v15 = 0LL;
    v16 = a1;
    LOBYTE(v19) = 1;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::Compositor *,bool>(
           &v15,
           &v16,
           (unsigned __int8 *)&v19);
    v8 = v7;
    if ( v7 < 0 )
    {
      v14 = 620LL;
    }
    else
    {
      v9 = _mm_cvtsi32_si128(v6);
      v10 = v15;
      v11 = *((_DWORD *)v15 + 32);
      v12 = *(DirectComposition::CDevice **)(*((_QWORD *)v15 + 3) + 456LL);
      LODWORD(v19) = _mm_cvtepi32_ps(v9).m128_u32[0];
      *((float *)&v19 + 1) = (float)v18;
      DirectComposition::CDevice::ResourceSetBufferProperty(v12, v11, 3, &v19, 8uLL);
      *((_QWORD *)v10 + 25) = v19;
      if ( !a3 || (v7 = Windows::UI::Composition::CompositionVisualSurface::Freeze(v10), v8 = v7, v7 >= 0) )
      {
        *a4 = v10;
        return 0LL;
      }
      v14 = 628LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return v8;
  }
}
