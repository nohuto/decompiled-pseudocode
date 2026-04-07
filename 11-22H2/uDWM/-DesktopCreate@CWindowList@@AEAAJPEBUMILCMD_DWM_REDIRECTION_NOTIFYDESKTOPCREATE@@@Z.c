/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003EAC4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18003EC28 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18003EDC4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800460AC (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  bool v4; // r15
  int RootVisualForDesktop; // eax
  unsigned int v6; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CContactManager *v8; // rcx
  int v10; // r9d
  int v11; // [rsp+28h] [rbp-29h]
  unsigned int v12; // [rsp+28h] [rbp-29h]
  __int64 Buffer; // [rsp+38h] [rbp-19h] BYREF
  struct CVisual *v14; // [rsp+40h] [rbp-11h]
  __int128 v15; // [rsp+48h] [rbp-9h]
  __int128 v16; // [rsp+58h] [rbp+7h]
  __int128 v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+27h]
  char v19; // [rsp+80h] [rbp+2Fh]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+B8h] [rbp+67h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 8)) == 0;
  v14 = 0LL;
  v15 = 0LL;
  v19 = 0;
  v16 = 0LL;
  v17 = 0LL;
  Buffer = *(_QWORD *)((char *)a2 + 4);
  v18 = -1LL;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(
                           this,
                           (struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *)&Buffer);
  v6 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v12 = 7325;
LABEL_10:
    v10 = RootVisualForDesktop;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v12, 0LL);
    goto LABEL_7;
  }
  RootVisualForDesktop = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 10) + 32LL),
                           (unsigned __int64)v14,
                           0LL,
                           0,
                           v11);
  v6 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v12 = 7326;
    goto LABEL_10;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer, 0x60u, 0LL) )
  {
    v6 = -2147024882;
    v12 = 7329;
    v10 = -2147024882;
    goto LABEL_12;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  WindowListForDesktop->Blink = WindowListForDesktop;
  WindowListForDesktop->Flink = WindowListForDesktop;
  if ( v4 )
    CContactManager::ForceAtlasInitialize(v8, *(_QWORD *)((char *)a2 + 4));
  CWindowList::GetGlobalLightSetForDesktop(this, *(_QWORD *)((char *)a2 + 4));
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v6;
}
