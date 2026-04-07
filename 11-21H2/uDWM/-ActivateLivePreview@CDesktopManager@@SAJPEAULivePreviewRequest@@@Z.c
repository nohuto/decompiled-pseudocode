/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18005CA20
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18005CAA0 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C1B08 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *a1)
{
  char *v1; // r8
  char *v2; // rdx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax

  v1 = 0LL;
  v2 = (char *)a1 + 32;
  if ( *((_DWORD *)a1 + 7) )
    v1 = &v2[8 * *((unsigned int *)a1 + 1)];
  if ( *(_DWORD *)a1 )
  {
    v7 = CLivePreview::Activate(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55),
           v2,
           *((unsigned int *)a1 + 1),
           *((_QWORD *)a1 + 1),
           *((_DWORD *)a1 + 4),
           *((_DWORD *)a1 + 5),
           v1);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB96u);
  }
  else
  {
    v4 = CLivePreview::DeActivate(
           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
           *((_DWORD *)a1 + 6) != 0);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xB9Au);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct LivePreviewRequest *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
  return v5;
}
