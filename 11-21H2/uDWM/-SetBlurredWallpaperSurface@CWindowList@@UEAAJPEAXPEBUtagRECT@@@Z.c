/*
 * XREFs of ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x18005D380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18005EB3C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SetBlurredWallpaperSurface(CWindowList *this, void *a2, const struct tagRECT *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  char *v9; // rdi
  CBaseObject *v10; // rcx
  CBaseObject **v11; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-8h] BYREF
  CBaseObject *v18; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( a2 )
  {
    v18 = 0LL;
    v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v18);
    v8 = CCompositor::CreateProxyFromSharedHandle<CVisualSurfaceProxy>(v7, a2, &v18);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1227u);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v18);
      goto LABEL_9;
    }
    v9 = (char *)this + 96;
    v10 = v18;
    v18 = 0LL;
    v19 = (CBaseObject *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v10;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v19);
    v11 = &v18;
  }
  else
  {
    v9 = (char *)this + 96;
    v11 = (CBaseObject **)((char *)this + 96);
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v11);
  *(struct tagRECT *)((char *)this + 104) = *a3;
  GetDesktopID(1LL, &v16);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, v16);
  if ( RootVisualForDesktop )
  {
    if ( *(_QWORD *)v9 )
      v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 24LL);
    else
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop
                                                                                                 + 2)
                                                                                               + 16LL)
                                                                                   + 16LL)
                                                                     + 344LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 24LL),
            v13,
            (char *)this + 104);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1238u);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v6;
}
