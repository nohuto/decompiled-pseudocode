/*
 * XREFs of ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640
 * Callers:
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800A7D40 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C07D4 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C21EC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C51E0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C60D0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800AF614 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSlateDeadzoneHelper::UpdateState(
        MPCSlateDeadzoneHelper *this,
        bool a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  MPCButtonHoldHelper *v6; // rcx
  char v7; // bl
  __int64 v8; // r11
  __int64 v9; // rdx
  char v10; // al
  char v11; // cl
  float v12; // xmm1_4

  v6 = (MPCButtonHoldHelper *)*((_QWORD *)this + 2);
  v7 = *((_BYTE *)v6 + 8);
  MPCButtonHoldHelper::UpdateState(v6, a2, a3);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = 0;
  if ( *(_BYTE *)(v9 + 10) )
  {
    *(float *)(v8 + 8) = a5;
    *(float *)(v8 + 4) = a4;
  }
  else if ( *(_BYTE *)(v9 + 8) )
  {
    v11 = *(_BYTE *)(v8 + 14);
    if ( !v11 )
    {
      v12 = a6 * *(float *)v8;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - *(float *)(v8 + 4)) & _xmm) > v12
        || (v11 = 0, COERCE_FLOAT(COERCE_UNSIGNED_INT(a5 - *(float *)(v8 + 8)) & _xmm) > v12) )
      {
        v11 = 1;
      }
      *(_BYTE *)(v8 + 14) = v11;
    }
    if ( !*(_BYTE *)(v8 + 13) )
    {
      if ( *(_QWORD *)(v9 + 24) && *(_BYTE *)(v9 + 9) || v11 )
        v10 = 1;
      *(_BYTE *)(v8 + 13) = v10;
    }
    *(_BYTE *)(v8 + 12) = v10;
  }
  else if ( v7 )
  {
    MPCSlateDeadzoneHelper::ResetState((MPCButtonHoldHelper **)v8);
  }
}
