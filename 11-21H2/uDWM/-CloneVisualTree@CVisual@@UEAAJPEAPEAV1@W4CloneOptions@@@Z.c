/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800468A0
 * Callers:
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800467D0 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::CloneVisualTree(__int64 a1, struct CVisual **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual *v8; // rax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v12);
  v6 = CVisual::Create(&v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 1133LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_4;
  }
  v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v12, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 1134LL;
    goto LABEL_7;
  }
  v8 = v12;
  v12 = 0LL;
  *a2 = v8;
  v7 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v12);
  return v7;
}
