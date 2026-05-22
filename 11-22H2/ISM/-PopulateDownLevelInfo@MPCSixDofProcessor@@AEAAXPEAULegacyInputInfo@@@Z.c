/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EC454
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EC850 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800D7990 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rcx
  char v9; // bp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1

  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCButtonHoldHelper ***)this + 520),
    *((_BYTE *)this + 10802),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  v4 = *((_QWORD *)this + 520);
  v5 = 1;
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(std::_Ref_count_base **)(v4 + 24);
  v9 = *(_BYTE *)(v7 + 10);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( !v9 )
  {
    v10 = *((_QWORD *)this + 520);
    if ( *(_BYTE *)(v10 + 13) )
    {
      v5 = 7;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
      v12 = *(_QWORD *)(v10 + 16);
      v13 = *(std::_Ref_count_base **)(v10 + 24);
      v14 = *(_BYTE *)(v12 + 12);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      if ( v14 )
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
  v15 = 3LL;
  v16 = (_OWORD *)((char *)this + 3680);
  v17 = (_OWORD *)((char *)a2 + 240);
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    v18 = v17[7];
    v17 += 8;
    *(v16 - 1) = v18;
    --v15;
  }
  while ( v15 );
  *v16 = *v17;
  v16[1] = v17[1];
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v17, (__int64)a2, v5);
}
