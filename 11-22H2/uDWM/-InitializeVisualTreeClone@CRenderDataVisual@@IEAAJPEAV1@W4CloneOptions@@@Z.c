/*
 * XREFs of ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800102A8
 * Callers:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800100F0 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180010170 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6A38 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000B4B0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRenderDataVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CVisual::InitializeVisualTreeClone(a1, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v5,
      v11);
    return v6;
  }
  else
  {
    v7 = 0LL;
    if ( *(_DWORD *)(a1 + 280) )
    {
      while ( 1 )
      {
        v9 = CRenderDataVisual::AddInstruction(
               (CRenderDataVisual *)a2,
               *(struct CRenderDataInstruction **)(*(_QWORD *)(a1 + 256) + 8 * v7));
        v10 = v9;
        if ( v9 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 280) )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
        (const char *)(unsigned int)v9,
        v11);
      return v10;
    }
    else
    {
      return 0LL;
    }
  }
}
