/*
 * XREFs of ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800C8640
 * Callers:
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800BFA30 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF224 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E0C4C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801E3DF0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E4D00 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800C8614 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSlateDeadzoneHelper::UpdateState(
        MPCButtonHoldHelper **this,
        bool a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  __int64 v6; // r10
  char v7; // r11
  __int64 v8; // rdx
  char v9; // al
  char v10; // cl
  float v11; // xmm1_4

  MPCButtonHoldHelper::UpdateState(this[2], a2, a3);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = 0;
  if ( *(_BYTE *)(v8 + 10) )
  {
    *(float *)(v6 + 8) = a5;
    *(float *)(v6 + 4) = a4;
  }
  else if ( *(_BYTE *)(v8 + 8) )
  {
    v10 = *(_BYTE *)(v6 + 14);
    if ( !v10 )
    {
      v11 = a6 * *(float *)v6;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - *(float *)(v6 + 4)) & _xmm) > v11
        || (v10 = 0, COERCE_FLOAT(COERCE_UNSIGNED_INT(a5 - *(float *)(v6 + 8)) & _xmm) > v11) )
      {
        v10 = 1;
      }
      *(_BYTE *)(v6 + 14) = v10;
    }
    if ( !*(_BYTE *)(v6 + 13) )
    {
      if ( *(_QWORD *)(v8 + 24) && *(_BYTE *)(v8 + 9) || v10 )
        v9 = 1;
      *(_BYTE *)(v6 + 13) = v9;
    }
    *(_BYTE *)(v6 + 12) = v9;
  }
  else if ( v7 )
  {
    MPCSlateDeadzoneHelper::ResetState((MPCButtonHoldHelper **)v6);
  }
}
