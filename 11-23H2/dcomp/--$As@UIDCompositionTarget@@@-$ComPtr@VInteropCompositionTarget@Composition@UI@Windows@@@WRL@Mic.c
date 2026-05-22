/*
 * XREFs of ??$As@UIDCompositionTarget@@@?$ComPtr@VInteropCompositionTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800896B8
 * Callers:
 *     ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800895E0 (-CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCo.c)
 *     ?CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z @ 0x18015EA10 (-CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDComp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropCompositionTarget>::As<IDCompositionTarget>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int64 *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rdi

  v2 = *a1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           v2,
           &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
           (void **)a2);
}
