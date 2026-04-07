/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A2BEC
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A2DDC (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x1800A2EA4 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x1801060A4 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180106274 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010922C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_ @ 0x1800A26D0 (std--function_void___cdecl(void)_--operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x1800A3AD8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(__int64 a1, const RECT *a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // r13d
  const RECT *v7; // r8
  bool v9; // r15
  __int64 v10; // rax
  bool v11; // al
  char v12; // r12
  char v13; // r14
  char v14; // di
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  int started; // eax
  __int64 v20; // rcx
  _OWORD v22[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]

  v5 = 0;
  v7 = a2;
  v9 = (a4 & 0x10) != 0 && *(_BYTE *)(a1 + 528);
  v10 = *(_QWORD *)(a1 + 536);
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
  if ( v11 && !v9 && v13 == *(_BYTE *)(a1 + 529) && v12 == *(_BYTE *)(a1 + 530) && v14 == *(_BYTE *)(a1 + 528) )
  {
    if ( EqualRect(a2, (const RECT *)(a1 + 512)) )
      goto LABEL_26;
    v7 = a2;
  }
  v16 = (_DWORD *)(a1 + 288);
  v22[0] = *v7;
  if ( (a4 & 4) != 0 )
  {
    LODWORD(v22[0]) += *v16;
    DWORD1(v22[0]) += *(_DWORD *)(a1 + 292);
    DWORD2(v22[0]) += *(_DWORD *)(a1 + 296);
    HIDWORD(v22[0]) += *(_DWORD *)(a1 + 300);
  }
  v17 = *(_OWORD *)(a5 + 16);
  v22[1] = *(_OWORD *)a5;
  v18 = *(_QWORD *)(a5 + 32);
  v22[2] = v17;
  v23 = v18;
  started = CAcrylicSheet::StartRectAnimation(a1, v16, v22);
  v5 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x28Fu);
    return v5;
  }
  *(_BYTE *)(a1 + 529) = v13;
  *(_BYTE *)(a1 + 530) = v12;
  *(_BYTE *)(a1 + 528) = v14;
LABEL_26:
  v20 = a1 + 400;
  if ( (a4 & 0x20) != 0 )
    std::function_void___cdecl_void__::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_(v20);
  else
    std::_Func_class<void,>::_Tidy(v20, v15);
  return v5;
}
