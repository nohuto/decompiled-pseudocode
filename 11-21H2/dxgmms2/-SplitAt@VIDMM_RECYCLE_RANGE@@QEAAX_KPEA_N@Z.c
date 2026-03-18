/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007E09C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007EB0C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00E74F4 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001500 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001528 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032470 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0080F20 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081380 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E637C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // si
  __int64 v9; // rax
  bool v10; // bp
  __int64 v11; // rax
  bool v12; // r12
  unsigned int v13; // r13d
  struct VIDMM_RECYCLE_BLOCK *v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r15
  PSLIST_ENTRY v20; // rdi
  __int64 v21; // r8
  char *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  struct VIDMM_RECYCLE_BLOCK *v25; // rdx
  struct VIDMM_RECYCLE_BLOCK *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  struct VIDMM_RECYCLE_BLOCK *v36; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v39; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  *a3 = 1;
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
    v4 = *(_QWORD *)(v6 + 72) == (_QWORD)this;
  v7 = *((_QWORD *)this + 18);
  v8 = 0;
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v13 = *((_DWORD *)this + 22);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  v14 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 9);
  v15 = *((_QWORD *)this + 5);
  v16 = a2 + *((_QWORD *)this + 4);
  v36 = v14;
  v39 = v15;
  v35 = v16;
  v17 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 8LL);
  v18 = *(_DWORD *)(v17 + 1616);
  v19 = *(_QWORD *)(v17 + 1312);
  if ( v18 )
  {
    v27 = (unsigned int)(v18 - 1);
    v20 = *(PSLIST_ENTRY *)(v17 + 8 * v27 + 1624);
    *(_QWORD *)(v17 + 8 * v27 + 1624) = 0LL;
    --*(_DWORD *)(v17 + 1616);
  }
  else
  {
    ++*(_DWORD *)(v19 + 20);
    v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v19);
    if ( !v20 )
    {
      ++*(_DWORD *)(v19 + 24);
      v20 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v19 + 48))(
                            *(unsigned int *)(v19 + 36),
                            *(unsigned int *)(v19 + 44),
                            *(unsigned int *)(v19 + 40),
                            v19);
    }
    v14 = v36;
    v15 = v39;
    v16 = v35;
  }
  if ( v20 )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v20, v14, v16, v15);
    LODWORD(v20[4].Next) = *((_DWORD *)this + 16);
    *((_DWORD *)&v20[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v22 = (char *)this + 120;
    v23 = *((_QWORD *)this + 15);
    *(_QWORD *)(v23 + 8) = (char *)v20 + 120;
    *((_QWORD *)this + 15) = (char *)v20 + 120;
    v20[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v20[7].Next + 1) = v23;
    *((_QWORD *)&v20[8].Next + 1) = *((_QWORD *)this + 17);
    v20[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v20[9].Next + 1) = *((_QWORD *)this + 19);
    v20[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    LODWORD(v20[5].Next) = *((_DWORD *)this + 20);
    BYTE4(v20[5].Next) = *((_BYTE *)this + 84);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v20;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v20;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v20;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v20;
    v24 = *((_DWORD *)this + 16);
    if ( v24 >= 3 )
    {
      if ( v24 > 4 )
      {
        if ( v24 == 5 )
        {
          VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
            (struct VIDMM_RECYCLE_RANGE *)v20);
          VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(
            (unsigned __int64)v20[2].Next - *((_QWORD *)&v20[2].Next + 1),
            v26);
        }
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v20);
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(
          (unsigned __int64)v20[2].Next - *((_QWORD *)&v20[2].Next + 1),
          v25);
      }
    }
    if ( (byte_1C006E942 & 2) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)v22, &EventRecycleRangeDestroy, v21, this);
      if ( (byte_1C006E942 & 2) != 0 )
      {
        v29 = *((_QWORD *)this + 9);
        McTemplateK0pppppppqq_EtwWriteTransfer(
          *(_QWORD *)(v29 + 32),
          v29,
          v28,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v29 + 32) + 8LL) + 8LL),
          this,
          v29,
          *(_QWORD *)(v29 + 56),
          *(_QWORD *)(v29 + 32),
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5),
          **(_DWORD **)(v29 + 32),
          *((_DWORD *)this + 16));
        if ( (byte_1C006E942 & 2) != 0 )
        {
          v31 = *((_QWORD *)this + 9);
          v32 = *(_QWORD *)(v31 + 32);
          LODWORD(v34) = v20[4].Next;
          LODWORD(v33) = *(_DWORD *)v32;
          McTemplateK0pppppppqq_EtwWriteTransfer(
            v32,
            v31,
            v30,
            **(_QWORD **)(*(_QWORD *)(v32 + 8) + 8LL),
            v20,
            v31,
            *(_QWORD *)(v31 + 56),
            v32,
            v20[2].Next,
            *((_QWORD *)&v20[2].Next + 1),
            v33,
            v34);
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
    if ( v13 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
    *a3 = 0;
  }
}
