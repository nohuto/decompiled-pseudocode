/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180226094
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180226750 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x180227234 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x180227390 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x1802278B0 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x180227AF8 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800D933C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ??$?4VCGravityBounceAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravityBounceAccelerator@@@Z @ 0x18022532C (--$-4VCGravityBounceAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravi.c)
 *     ??$?4VCSpringAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpringAccelerator@@@Z @ 0x1802253DC (--$-4VCSpringAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpringAccele.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  int v4; // edx
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)(a1 + 448);
  if ( !*(_QWORD *)(a1 + 448) )
  {
    *(_DWORD *)(a1 + 456) = a2;
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v5 = operator new(0x28uLL);
      if ( v5 )
      {
        v5[2] = 0;
        *(_QWORD *)v5 = &CSpringAccelerator::`vftable';
        v5[5] = 1137180672;
        v5[6] = 1105199104;
        v5[8] = 1101004800;
        v5[7] = 1060320051;
      }
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>(v2, (__int64 (__fastcall ***)(_QWORD))v5);
    }
    else
    {
      v6 = operator new(0x38uLL);
      if ( v6 )
      {
        v6[2] = 0;
        v6[4] = 0;
        v6[9] = 0;
        v6[11] = 0;
        v6[12] = 0;
        *(_QWORD *)v6 = &CGravityBounceAccelerator::`vftable';
        v6[5] = 1092616192;
        *((_BYTE *)v6 + 40) = 0;
        v6[7] = LODWORD(FLOAT_0_5) & _xmm;
        *((float *)v6 + 6) = COERCE_FLOAT(LODWORD(FLOAT_10_0) & _xmm) / 0.0099999998;
        *((float *)v6 + 8) = (float)((float)(COERCE_FLOAT(LODWORD(FLOAT_0_5) & _xmm) + 1.0) * -1.0) / 0.0099999998;
      }
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(
        v2,
        (__int64 (__fastcall ***)(_QWORD))v6);
      *(_DWORD *)(*v2 + 48) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    }
  }
}
