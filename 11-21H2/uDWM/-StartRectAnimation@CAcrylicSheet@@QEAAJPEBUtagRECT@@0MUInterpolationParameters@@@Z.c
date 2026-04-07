/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@0M@Z @ 0x18009B220 (-StartRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@0M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CTimeline@M@@QEAA@NMMUInterpolationParameters@@@Z @ 0x1800997A0 (--0-$CTimeline@M@@QEAA@NMMUInterpolationParameters@@@Z.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18009A94C (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(__int64 a1, _OWORD *a2, __int128 *a3)
{
  __int64 v6; // rax
  bool v7; // zf
  char v8; // al
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int128 v11; // xmm1
  int v12; // edi
  unsigned int v13; // eax

  std::_Func_class<void,>::_Tidy(a1 + 360);
  std::_Func_class<void,>::_Tidy(a1 + 424);
  v6 = *(_QWORD *)(a1 + 568);
  if ( v6 )
  {
    v7 = (*(_DWORD *)(v6 + 8))-- == 1;
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( v7 )
      v8 = 1;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( !v9 )
  {
    *(_QWORD *)(a1 + 568) = 0LL;
    goto LABEL_10;
  }
  v10 = CTimeline<float>::CTimeline<float>(v9);
  *(_QWORD *)(a1 + 568) = v10;
  if ( !v10 )
  {
LABEL_10:
    v12 = -2147024882;
    v13 = 871;
    goto LABEL_11;
  }
  *(_OWORD *)(a1 + 528) = *a2;
  v11 = *a3;
  *(_WORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 562) = 0;
  *(_OWORD *)(a1 + 544) = v11;
  v12 = CAcrylicSheet::RegisterGlobalTimer((CAcrylicSheet *)a1);
  if ( v12 < 0 )
  {
    v13 = 879;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13);
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
  }
  return (unsigned int)v12;
}
