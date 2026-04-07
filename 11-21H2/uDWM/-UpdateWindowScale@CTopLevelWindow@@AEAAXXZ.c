/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18000DA7C
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180028A44 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18005C49C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     _o_fmodf_0 @ 0x180060EE0 (_o_fmodf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E4D88 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  struct CWindowData *v7; // rcx
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4

  *((_DWORD *)this + 178) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 70);
  if ( v2 )
  {
    CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 94) + 208LL), *(float *)(*((_QWORD *)this + 94) + 212LL));
    v3 = *((_QWORD *)this + 94);
    if ( o_fmodf_0() == 0.0 && o_fmodf_0() == 0.0 )
    {
      v4 = (_DWORD *)*((_QWORD *)this + 70);
      v5 = v4[51];
      if ( (v5 & 2) == 0 || v4[52] )
      {
        v4[52] = 0;
        v4[51] = v5 | 2;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 64LL);
      }
    }
    else if ( *(float *)(v3 + 208) < 1.0 || *(float *)(v3 + 212) < 1.0 )
    {
      CVisual::SetInterpolationMode(*((_QWORD *)this + 70), 6LL);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 70));
    }
  }
  v6 = (CVisual *)*((_QWORD *)this + 39);
  if ( v6 )
    CVisual::SetScale(v6, *(float *)(*((_QWORD *)this + 94) + 208LL), *(float *)(*((_QWORD *)this + 94) + 212LL));
  v7 = (struct CWindowData *)*((_QWORD *)this + 94);
  if ( (*((_BYTE *)v7 + 372) & 1) != 0 )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v7);
    CVisual::SetScale(
      *((CVisual **)this + 34),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
