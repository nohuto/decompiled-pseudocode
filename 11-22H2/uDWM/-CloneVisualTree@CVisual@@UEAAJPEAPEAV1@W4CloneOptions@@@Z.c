/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180105750
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000B4B0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::CloneVisualTree(__int64 a1, struct CVisual **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CVisual *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v12);
  v6 = CVisual::Create(&v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v12, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v9 = v12;
      v12 = 0LL;
      *a2 = v9;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 1116LL;
  }
  else
  {
    v8 = 1115LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v12);
  return v7;
}
