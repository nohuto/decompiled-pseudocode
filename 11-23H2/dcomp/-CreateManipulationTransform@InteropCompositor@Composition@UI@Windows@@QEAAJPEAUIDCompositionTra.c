/*
 * XREFs of ?CreateManipulationTransform@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z @ 0x1800820DC
 * Callers:
 *     ?CreateManipulationTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z @ 0x180082060 (-CreateManipulationTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAUIDCompositionTransform@@@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAUIDCompositionTransform@@@Z @ 0x180082180 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800831C0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::CreateManipulationTransform(
        Windows::UI::Composition::InteropCompositor *this,
        struct IDCompositionTransform *a2,
        const struct _GUID *a3,
        Microsoft::WRL2::NestableRuntimeClass **a4)
{
  int v6; // eax
  unsigned int v7; // edi
  const struct _GUID *v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // r9
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+20h] [rbp-10h] BYREF
  Windows::UI::Composition::InteropCompositor *v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IDCompositionTransform *v16; // [rsp+58h] [rbp+28h] BYREF
  void *v17; // [rsp+68h] [rbp+38h] BYREF

  v16 = a2;
  *a4 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v14 = this;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::InteropCompositor *,IDCompositionTransform * &>(
           &v13,
           &v14,
           &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v11 = 254LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
      v8 = a3;
      v9 = v13;
      v6 = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(v13, v8, &v17);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *a4 = v9;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
        return 0LL;
      }
      v11 = 256LL;
    }
    v12 = (unsigned int)v6;
  }
  else
  {
    v7 = -2147024809;
    v11 = 249LL;
    v12 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
    (const char *)v12);
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(&v17);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return v7;
}
