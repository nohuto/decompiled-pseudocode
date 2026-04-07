/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x1800A3AD8
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A2BEC (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMUInterpolationParameters@@N@Z @ 0x1800A27A0 (--0-$CTimeline@M@@QEAA@NMMUInterpolationParameters@@N@Z.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x1800A37BC (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3C68 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        __int128 *a5,
        float a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm0
  _QWORD *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // esi
  unsigned int v22; // eax
  _OWORD v24[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]

  std::_Func_class<void,>::_Tidy(a1 + 336, (__int64)a2);
  std::_Func_class<void,>::_Tidy(a1 + 400, v9);
  v10 = *(_QWORD *)(a1 + 536);
  if ( v10 )
  {
    v11 = (*(_DWORD *)(v10 + 8))-- == 1;
    v12 = CDesktopManager::s_fTimelineDirty;
    if ( v11 )
      v12 = 1;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 536) = 0LL;
    goto LABEL_10;
  }
  v17 = *a5;
  v24[1] = a5[1];
  v24[0] = v17;
  v25 = *((_QWORD *)a5 + 4);
  v18 = CTimeline<float>::CTimeline<float>(v13, v14, v15, v16, (__int64)v24, COERCE__INT64(a6));
  *(_QWORD *)(a1 + 536) = v18;
  if ( !v18 )
  {
LABEL_10:
    v21 = -2147024882;
    v22 = 786;
    goto LABEL_11;
  }
  v19 = *a2;
  *(_WORD *)(a1 + 528) = 0;
  v20 = *a3;
  *(_BYTE *)(a1 + 530) = 0;
  *(_OWORD *)(a1 + 496) = v19;
  *(_OWORD *)(a1 + 512) = v20;
  v21 = CAcrylicSheet::RegisterGlobalTimer((CAcrylicSheet *)a1);
  if ( v21 < 0 )
  {
    v22 = 794;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, v22);
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
  }
  return (unsigned int)v21;
}
