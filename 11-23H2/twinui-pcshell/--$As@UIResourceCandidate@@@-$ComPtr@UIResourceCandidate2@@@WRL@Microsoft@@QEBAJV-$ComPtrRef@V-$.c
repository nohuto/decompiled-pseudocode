/*
 * XREFs of ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1807413A0
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  return v4(v2, &GUID_f98ce1cb_901b_41f4_bf42_83d51895e1e2, a2);
}
