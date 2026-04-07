/*
 * XREFs of ??$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClientBackground@@VCCanvasVisual@@@CTopLevelWindow@@CAIPEBVCSystemBackdropVisual@@PEBVCAccent@@PEBVCSpriteVisual@@PEBVCLegacyNonClientBackground@@PEBVCCanvasVisual@@@Z @ 0x180007BD8
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800074D8 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::CountParticipatingInClone<CSystemBackdropVisual,CAccent,CSpriteVisual,CLegacyNonClientBackground,CCanvasVisual>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // eax
  BOOL v7; // r11d
  BOOL v8; // r9d
  BOOL v9; // r8d
  BOOL v10; // edx

  v6 = 1;
  v7 = a1 && (*(_BYTE *)(a1 + 92) & 8) == 0;
  v8 = a2 && (*(_BYTE *)(a2 + 92) & 8) == 0;
  v9 = a3 && (*(_BYTE *)(a3 + 92) & 8) == 0;
  v10 = a4 && (*(_BYTE *)(a4 + 92) & 8) == 0;
  if ( !a5 || (*(_BYTE *)(a5 + 92) & 8) != 0 )
    v6 = 0;
  return (unsigned int)(v7 + v8 + v9 + v10 + v6);
}
