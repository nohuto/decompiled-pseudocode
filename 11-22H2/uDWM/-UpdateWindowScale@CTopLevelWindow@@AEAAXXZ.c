/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180051114
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180054358 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x1800543E4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     _o_fmodf_0 @ 0x18005D2E0 (_o_fmodf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E5DA4 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  double *v2; // rcx
  __int64 v3; // rax
  double v4; // xmm5_8
  double v5; // xmm2_8
  __int64 v6; // rax
  float v7; // xmm7_4
  float *v8; // rdi
  __int64 *v9; // rcx
  int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rax
  CVisual *v13; // rcx
  struct CWindowData *v14; // rcx
  double v15; // rax
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4

  *((_DWORD *)this + 182) = -1;
  v2 = (double *)*((_QWORD *)this + 74);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 94);
    v4 = *(float *)(v3 + 208);
    v5 = *(float *)(v3 + 212);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v2[22] - *(float *)(v3 + 208)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v2[23] - *(float *)(v3 + 212)) & _xmm) > 0.0000011920929 )
    {
      v15 = *v2;
      v2[22] = v4;
      v2[23] = v5;
      (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)&v15 + 24LL))(v2, 16LL);
    }
    v6 = *((_QWORD *)this + 94);
    v7 = *(float *)(v6 + 208);
    v8 = (float *)(v6 + 212);
    if ( o_fmodf_0() == 0.0 && o_fmodf_0() == 0.0 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 74);
      v10 = *((_DWORD *)v9 + 51);
      v11 = v9 + 26;
      if ( (v10 & 2) == 0 || *v11 )
      {
        *v11 = 0;
        v12 = *v9;
        *((_DWORD *)v9 + 51) = v10 | 2;
        (*(void (__fastcall **)(__int64 *, __int64))(v12 + 24))(v9, 64LL);
      }
    }
    else if ( v7 < 1.0 || *v8 < 1.0 )
    {
      CVisual::SetInterpolationMode(*((_QWORD *)this + 74), 6LL);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 74));
    }
  }
  v13 = (CVisual *)*((_QWORD *)this + 42);
  if ( v13 )
    CVisual::SetScale(v13, *(float *)(*((_QWORD *)this + 94) + 208LL), *(float *)(*((_QWORD *)this + 94) + 212LL));
  v14 = (struct CWindowData *)*((_QWORD *)this + 94);
  if ( (*((_BYTE *)v14 + 372) & 1) != 0 )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v14);
    CVisual::SetScale(
      *((CVisual **)this + 36),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
