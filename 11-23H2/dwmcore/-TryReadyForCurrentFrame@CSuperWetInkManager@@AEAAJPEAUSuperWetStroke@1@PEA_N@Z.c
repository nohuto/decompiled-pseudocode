/*
 * XREFs of ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801CC7B8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCAB8 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801CB60C (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801CB7F0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801CB9F0 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::TryReadyForCurrentFrame(
        CSuperWetInkManager *this,
        struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  CSuperWetInkManager *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v7 = CSuperWetInkManager::CheckLocalComputeScribbleSupport(this, a2, &v11);
  if ( v7 < 0 )
  {
    v8 = 507LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v11 )
  {
    v7 = CSuperWetInkManager::EnsureLocalSuperWetResources(v6, *((struct IMonitorTarget **)a2 + 1), &v11);
    if ( v7 < 0 )
    {
      v8 = 519LL;
      goto LABEL_3;
    }
    if ( v11 )
    {
      *((_BYTE *)a2 + 96) = 1;
      *a3 = 1;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
  }
  return 0LL;
}
