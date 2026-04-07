/*
 * XREFs of ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1801073C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A8C40 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800D181C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1801074F0 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowTarget::CloneVisualTree(__int64 a1, struct CWindowTarget **a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  struct CWindowTarget *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct CWindowTarget *v15; // [rsp+48h] [rbp+28h] BYREF
  CRedirectVisualProxy *v16; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  v7 = CCompositor::CreateProxy<CRedirectVisualProxy>(v6, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = CRedirectVisualProxy::SetRedirectedVisual(v16, *(struct CVisualProxy **)(a1 + 16));
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 57LL;
      goto LABEL_5;
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
    v10 = CWindowTarget::Create(v16, &v15);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v10 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v15, a3);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v12 = v15;
        v15 = 0LL;
        *a2 = v12;
        v8 = 0;
        goto LABEL_12;
      }
      v11 = 61LL;
    }
    else
    {
      v11 = 60LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
    goto LABEL_13;
  }
  v9 = 56LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
    (const char *)(unsigned int)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  return v8;
}
