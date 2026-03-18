/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC
 * Callers:
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C007C8D0 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C007E9F0 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007F190 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00013C4 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // r15
  VIDMM_RECYCLE_HEAP_MGR *v5; // rdi
  _QWORD *v6; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rsi
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v11; // rcx
  struct VIDMM_RECYCLE_RANGE *v12; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rbx
  bool v14; // al
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  struct VIDMM_RECYCLE_RANGE *v16; // rdi
  int v17; // eax
  unsigned __int8 v18; // dl
  VIDMM_RECYCLE_MULTIRANGE *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // dl
  VIDMM_RECYCLE_MULTIRANGE *v23; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v24; // rax
  __int64 v25; // rcx
  struct VIDMM_RECYCLE_RANGE *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // r8
  _QWORD *v29; // [rsp+20h] [rbp-10h] BYREF
  VIDMM_RECYCLE_HEAP_MGR *v30; // [rsp+28h] [rbp-8h]
  int v31; // [rsp+60h] [rbp+30h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  v30 = (VIDMM_RECYCLE_HEAP_MGR *)&v29;
  v6 = &v29;
  v29 = &v29;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    while ( 1 )
    {
      v9 = v5;
      IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
      v12 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v5 - 104);
      if ( a3 )
      {
        if ( !IsOverLimits )
          goto LABEL_5;
      }
      else if ( a2 && *((_QWORD *)v12 + 12) > *((_QWORD *)this + 197) )
      {
        goto LABEL_5;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v11, v12);
      LOBYTE(v31) = 0;
      v17 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v12, (bool *)&v31);
      if ( v17 < 0 )
      {
        WdLogSingleEntry3(3LL, v12, v17, **((_QWORD **)this + 1));
        v24 = (VIDMM_RECYCLE_HEAP_MGR **)v30;
        if ( *(_QWORD ***)v30 != &v29 )
          goto LABEL_29;
        *((_QWORD *)v9 + 1) = v30;
        *(_QWORD *)v9 = &v29;
        *v24 = v9;
        v30 = v9;
      }
      if ( !(_BYTE)v31 )
      {
        v19 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v12 + 17);
        if ( v19 )
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v19, v18);
      }
      if ( v5 == v3 )
      {
LABEL_5:
        v6 = v29;
        break;
      }
    }
  }
  while ( v6 != &v29 )
  {
    v25 = *v6;
    v26 = (struct VIDMM_RECYCLE_RANGE *)(v6 - 13);
    v27 = v6;
    v6 = (_QWORD *)v25;
    if ( *(_QWORD **)(v25 + 8) != v27 || (v28 = (_QWORD *)v27[1], (_QWORD *)*v28 != v27) )
LABEL_29:
      __fastfail(3u);
    *v28 = v25;
    *(_QWORD *)(v25 + 8) = v28;
    *((_QWORD *)v26 + 14) = 0LL;
    *v27 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v26);
  }
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 195);
  while ( v13 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560) )
  {
    v14 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v13 - 104);
    if ( a3 )
    {
      if ( !v14 )
        return;
    }
    else if ( a2 && *((_QWORD *)v16 + 12) > *((_QWORD *)this + 197) )
    {
      return;
    }
    v13 = *(VIDMM_RECYCLE_HEAP_MGR **)v13;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, v16);
    v31 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(
      (VIDMM_RECYCLE_BLOCK **)v16,
      (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v31,
      v20,
      v21);
    if ( !v31 )
    {
      v23 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v16 + 17);
      if ( v23 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v23, v22);
    }
  }
}
