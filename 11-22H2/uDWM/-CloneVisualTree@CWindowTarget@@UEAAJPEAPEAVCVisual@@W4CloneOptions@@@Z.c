/*
 * XREFs of ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18010D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000B4B0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001266C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180013618 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18010D910 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowTarget::CloneVisualTree(__int64 a1, struct CWindowTarget **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  struct CWindowTarget *v12; // rax
  CBaseObject *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct CWindowTarget *v15; // [rsp+48h] [rbp+28h] BYREF
  CRedirectVisualProxy *v16; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v6 = CCompositor::CreateProxy<CRedirectVisualProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 56LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v16);
    return v7;
  }
  v6 = CRedirectVisualProxy::SetRedirectedVisual(v16, *(struct CVisualProxy **)(a1 + 16));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 57LL;
    goto LABEL_5;
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
  v9 = CWindowTarget::Create(v16, &v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 60LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
    goto LABEL_11;
  }
  v9 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v15, a3);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 61LL;
    goto LABEL_10;
  }
  v12 = v15;
  v15 = 0LL;
  *a2 = v12;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    CBaseObject::Release(v13);
  }
  return 0LL;
}
