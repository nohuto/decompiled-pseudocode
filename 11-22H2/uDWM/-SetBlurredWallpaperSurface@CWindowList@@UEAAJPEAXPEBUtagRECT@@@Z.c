/*
 * XREFs of ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180057280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18005766C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v12; // r8
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-8h] BYREF
  CBaseObject *v19; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( a2 )
  {
    v19 = 0LL;
    v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v19);
    v8 = CCompositor::CreateProxyFromSharedHandle<CVisualSurfaceProxy>(v7, a2, &v19);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x12AFu, 0LL);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v19);
      goto LABEL_9;
    }
    v9 = (char *)this + 96;
    v10 = v19;
    v19 = 0LL;
    v20 = (CBaseObject *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v10;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v20);
    v11 = &v19;
  }
  else
  {
    v9 = (char *)this + 96;
    v11 = (CBaseObject **)((char *)this + 96);
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v11);
  *(struct tagRECT *)((char *)this + 104) = *a3;
  GetDesktopID(1LL, &v17, v12);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, v17);
  if ( RootVisualForDesktop )
  {
    if ( *(_QWORD *)v9 )
      v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 24LL);
    else
      v14 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop
                                                                                                 + 2)
                                                                                               + 16LL)
                                                                                   + 16LL)
                                                                     + 288LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 24LL),
            v14,
            (char *)this + 104);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x12C0u, 0LL);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v6;
}
