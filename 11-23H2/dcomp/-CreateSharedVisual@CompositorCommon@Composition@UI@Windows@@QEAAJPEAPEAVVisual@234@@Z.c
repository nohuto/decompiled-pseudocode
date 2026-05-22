/*
 * XREFs of ?CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z @ 0x180126EE8
 * Callers:
 *     ?CreateSharedVisual@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x18010F120 (-CreateSharedVisual@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z.c)
 *     ?CreateSharedVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x180126F70 (-CreateSharedVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180121E0C (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateSharedVisual(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::Visual **a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  struct Windows::UI::Composition::Visual *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  Windows::UI::Composition::Visual *v11; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v12 = this;
  v9 = 1;
  v10 = 196;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool>(
         &v11,
         &v12,
         &v10,
         (bool *)&v9);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = v11;
    v11 = 0LL;
    v5 = 0;
    *a2 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11FC,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v11,
    v4);
  return v5;
}
