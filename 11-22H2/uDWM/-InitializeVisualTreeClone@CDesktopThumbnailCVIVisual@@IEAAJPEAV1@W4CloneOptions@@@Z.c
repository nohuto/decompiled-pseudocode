/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6A38
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B6330 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800102A8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CRenderDataVisual::InitializeVisualTreeClone((__int64)a1, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    a2[38] = a1[38];
    v8 = a1[38];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    a2[36] = a1[36];
    v9 = a1[36];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    a2[39] = a1[39];
    v10 = a1[39];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
