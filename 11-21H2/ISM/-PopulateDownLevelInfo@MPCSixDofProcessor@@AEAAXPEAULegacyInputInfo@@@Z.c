/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C07D4
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C0BD0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  volatile signed __int32 *v6; // rcx
  char v7; // bp
  __int64 v8; // rax
  volatile signed __int32 *v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 520),
    *((_BYTE *)this + 10802),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  v4 = *((_QWORD *)this + 520);
  v5 = 1;
  v6 = *(volatile signed __int32 **)(v4 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v4 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 10LL);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  if ( !v7 )
  {
    v8 = *((_QWORD *)this + 520);
    if ( *(_BYTE *)(v8 + 13) )
    {
      v5 = 7;
    }
    else
    {
      v9 = *(volatile signed __int32 **)(v8 + 24);
      if ( v9 )
      {
        _InterlockedAdd(v9 + 2, 1u);
        v9 = *(volatile signed __int32 **)(v8 + 24);
      }
      v10 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 12LL);
      if ( v9 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
      if ( v10 )
      {
        v5 = 2;
      }
      else
      {
        v5 = 0;
        if ( *((_DWORD *)a2 + 17) == 6 )
          v5 = 4;
      }
    }
  }
  v11 = 3LL;
  v12 = (_OWORD *)((char *)this + 3680);
  v13 = (_OWORD *)((char *)a2 + 240);
  do
  {
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
    v12[6] = v13[6];
    v12 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v12 - 1) = v14;
    --v11;
  }
  while ( v11 );
  *v12 = *v13;
  v12[1] = v13[1];
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v13, (__int64)a2, v5);
}
