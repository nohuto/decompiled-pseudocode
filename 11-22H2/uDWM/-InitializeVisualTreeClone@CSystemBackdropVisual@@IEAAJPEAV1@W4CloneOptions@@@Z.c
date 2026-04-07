/*
 * XREFs of ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001342C
 * Callers:
 *     ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180013330 (-CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800133B0 (-CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A4310 (-CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000B4B0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x180017E90 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemBackdropVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // r8
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( v5 < 0 )
  {
    v8 = 116LL;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 280);
    v5 = CSystemBackdropVisual::SetState(a2, *(unsigned int *)(a1 + 284), v6);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 119LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
