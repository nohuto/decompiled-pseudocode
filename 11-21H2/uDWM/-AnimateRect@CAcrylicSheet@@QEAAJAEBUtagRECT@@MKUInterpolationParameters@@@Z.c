/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MK@Z @ 0x180099EAC (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MK@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@@Z @ 0x180099F68 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@@Z.c)
 *     ?UpdateRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@MUInterpolationParameters@@@Z @ 0x18009B650 (-UpdateRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@MUInterpolationParameters@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUt.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     std::function_void___cdecl(void)_::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_ @ 0x180099568 (std--function_void___cdecl(void)_--operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(__int64 a1, const RECT *a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // r12d
  bool v9; // cl
  __int64 v10; // rax
  bool v11; // dl
  char v12; // r15
  char v13; // r14
  char v14; // di
  _DWORD *v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  int started; // eax
  __int64 v19; // rcx
  _OWORD v21[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]

  v5 = 0;
  v9 = (a4 & 0x10) != 0 && *(_BYTE *)(a1 + 560);
  v10 = *(_QWORD *)(a1 + 568);
  v11 = v10 && !*(_BYTE *)(v10 + 72);
  if ( (a4 & 2) != 0 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (a4 & 1) == 0 )
    {
      v13 = 0;
      goto LABEL_12;
    }
  }
  v13 = 1;
LABEL_12:
  v14 = (a4 & 8) != 0;
  if ( !v11
    || v9
    || v13 != *(_BYTE *)(a1 + 561)
    || v12 != *(_BYTE *)(a1 + 562)
    || v14 != *(_BYTE *)(a1 + 560)
    || !EqualRect(a2, (const RECT *)(a1 + 544)) )
  {
    v15 = (_DWORD *)(a1 + 304);
    v21[0] = *a2;
    if ( (a4 & 4) != 0 )
    {
      LODWORD(v21[0]) += *v15;
      DWORD1(v21[0]) += *(_DWORD *)(a1 + 308);
      DWORD2(v21[0]) += *(_DWORD *)(a1 + 312);
      HIDWORD(v21[0]) += *(_DWORD *)(a1 + 316);
    }
    v16 = *(_OWORD *)(a5 + 16);
    v21[1] = *(_OWORD *)a5;
    v17 = *(_QWORD *)(a5 + 32);
    v21[2] = v16;
    v22 = v17;
    started = CAcrylicSheet::StartRectAnimation(a1, v15, v21);
    v5 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x2E6u);
      return v5;
    }
    *(_BYTE *)(a1 + 561) = v13;
    *(_BYTE *)(a1 + 562) = v12;
    *(_BYTE *)(a1 + 560) = v14;
  }
  v19 = a1 + 424;
  if ( (a4 & 0x20) != 0 )
    std::function_void___cdecl_void__::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_(v19);
  else
    std::_Func_class<void,>::_Tidy(v19);
  return v5;
}
