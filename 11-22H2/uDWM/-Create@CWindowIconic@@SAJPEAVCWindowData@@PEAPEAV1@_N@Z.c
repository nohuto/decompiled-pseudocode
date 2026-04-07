/*
 * XREFs of ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x1801067E8
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001CF40 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E5DD8 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800C34EC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowIconic::Create(struct CWindowData *a1, struct CWindowIconic **a2, char a3)
{
  __int64 v6; // rax
  struct CWindowIconic *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  v7 = (struct CWindowIconic *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CWindowIconic::`vftable';
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_DWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_BYTE *)(v6 + 20) = a3;
    v8 = CWindowIconic::Initialize((CWindowIconic *)v6, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v7;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x48u);
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
        a1);
      CBaseObject::Release(v7);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x44u);
  }
  return v9;
}
