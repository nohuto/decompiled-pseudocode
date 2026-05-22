/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C1F84
 * Callers:
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801BF488 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v5; // rcx
  bool v6; // di
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  char v9; // di
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  char v12; // di
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx

  v2 = *((_QWORD *)this + 519);
  v5 = *(volatile signed __int32 **)(v2 + 24);
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = *(volatile signed __int32 **)(v2 + 24);
  }
  v6 = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 10LL) && *((_DWORD *)a2 + 17) != 3;
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  if ( v6 )
  {
    *((_DWORD *)a2 + 17) = 2;
  }
  else
  {
    v7 = *((_QWORD *)this + 519);
    v8 = *(volatile signed __int32 **)(v7 + 24);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = *(volatile signed __int32 **)(v7 + 24);
    }
    v9 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 8LL);
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    if ( v9 )
    {
      *((_DWORD *)a2 + 17) = 3;
    }
    else
    {
      v10 = *((_QWORD *)this + 519);
      v11 = *(volatile signed __int32 **)(v10 + 24);
      if ( v11 )
      {
        _InterlockedIncrement(v11 + 2);
        v11 = *(volatile signed __int32 **)(v10 + 24);
      }
      v12 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 12LL);
      if ( v11 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
      if ( v12 )
        *((_DWORD *)a2 + 17) = 4;
    }
  }
  if ( *((_BYTE *)a2 + 2256) )
  {
    *((_BYTE *)a2 + 2256) = 1;
  }
  else
  {
    v13 = *((_QWORD *)this + 519);
    v14 = *(volatile signed __int32 **)(v13 + 24);
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      v14 = *(volatile signed __int32 **)(v13 + 24);
    }
    *((_BYTE *)a2 + 2256) = *(_BYTE *)(*(_QWORD *)(v13 + 16) + 8LL);
    if ( v14 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  }
}
