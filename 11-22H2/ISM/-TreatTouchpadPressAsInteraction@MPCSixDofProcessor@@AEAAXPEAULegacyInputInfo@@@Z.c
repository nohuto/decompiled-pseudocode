/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EDC20
 * Callers:
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801EB0F8 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  bool v8; // si
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx
  char v13; // si
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rcx
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  std::_Ref_count_base *v22; // rcx

  v4 = *((_QWORD *)this + 519);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = (_DWORD *)((char *)a2 + 68);
  v7 = *(std::_Ref_count_base **)(v4 + 24);
  v8 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 10LL) && *v6 != 3;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v8 )
  {
    *v6 = 2;
  }
  else
  {
    v9 = *((_QWORD *)this + 519);
    v10 = *(_QWORD *)(v9 + 24);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v11 = *(_QWORD *)(v9 + 16);
    v12 = *(std::_Ref_count_base **)(v9 + 24);
    v13 = *(_BYTE *)(v11 + 8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v13 )
    {
      *v6 = 3;
    }
    else
    {
      v14 = *((_QWORD *)this + 519);
      v15 = *(_QWORD *)(v14 + 24);
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v16 = *(_QWORD *)(v14 + 16);
      v17 = *(std::_Ref_count_base **)(v14 + 24);
      v18 = *(_BYTE *)(v16 + 12);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      if ( v18 )
        *v6 = 4;
    }
  }
  if ( *((_BYTE *)a2 + 2256) )
  {
    *((_BYTE *)a2 + 2256) = 1;
  }
  else
  {
    v19 = *((_QWORD *)this + 519);
    v20 = *(_QWORD *)(v19 + 24);
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v21 = *(_QWORD *)(v19 + 16);
    v22 = *(std::_Ref_count_base **)(v19 + 24);
    *((_BYTE *)a2 + 2256) = *(_BYTE *)(v21 + 8);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
}
