/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18001BEAC (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180038F08 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  CTopLevelWindow *v6; // rax
  CTopLevelWindow *v7; // rax
  CBaseObject *v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // r9d
  unsigned int v13; // eax

  *a2 = 0LL;
  v6 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            896LL);
  if ( !v6 || (v7 = CTopLevelWindow::CTopLevelWindow(v6), (v8 = v7) == 0LL) )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1534u);
    return v10;
  }
  v9 = CTopLevelWindow::Initialize(v7, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = v9;
    v13 = 5429;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v13);
    CBaseObject::Release(v8);
    return v10;
  }
  v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, v8, a3);
  v11 = v10;
  if ( (v10 & 0x80000000) != 0 )
  {
    v13 = 5430;
    goto LABEL_9;
  }
  *a2 = v8;
  return v10;
}
