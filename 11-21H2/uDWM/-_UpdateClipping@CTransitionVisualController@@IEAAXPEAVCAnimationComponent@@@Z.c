/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800EFE24
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800ED6AC (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800ECFB4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800EF140 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800F0074 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  RECT rcMonitor; // xmm6
  int v5; // ecx
  int v6; // ecx
  struct tagRECT v7; // xmm0
  HMONITOR v8; // rax
  __int64 v9; // rcx
  char v10; // al
  int v11; // edx
  int v12; // ecx
  struct tagRECT v13; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v14; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  rcMonitor = 0LL;
  v13 = 0LL;
  if ( !v2 )
  {
    v8 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v8, &mi) )
    {
      v7 = *(struct tagRECT *)((char *)a2 + 88);
      goto LABEL_12;
    }
    rcMonitor = mi.rcMonitor;
    goto LABEL_10;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    rcMonitor = *(RECT *)((char *)a2 + 88);
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    rcMonitor = *(RECT *)((char *)a2 + 104);
LABEL_10:
    v13 = rcMonitor;
    goto LABEL_13;
  }
  if ( v6 == 1 )
  {
    v7 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 856LL);
LABEL_12:
    v14 = v7;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v14, &v13);
    rcMonitor = v13;
  }
LABEL_13:
  v9 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v9 + 986) )
  {
    v10 = CTransitionVisualController::_SetAnimationClipRegion(
            (CTransitionVisualController *)-v9,
            (CVisualProxy **)((v9 + 8) & -(__int64)(v9 != 0)),
            &v13);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddq_EtwEventWriteTransfer(
        v12,
        v11,
        *((_QWORD *)a2 + 2),
        _mm_cvtsi128_si32((__m128i)rcMonitor),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 8)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v10);
  }
  *(RECT *)(*((_QWORD *)a2 + 5) + 840LL) = rcMonitor;
}
