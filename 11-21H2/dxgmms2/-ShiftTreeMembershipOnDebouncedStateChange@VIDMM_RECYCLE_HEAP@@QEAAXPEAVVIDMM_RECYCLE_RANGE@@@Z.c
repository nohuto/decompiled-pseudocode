/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007D414
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C007C924 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D39C (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080850 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C0080FE4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E637C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  int v11; // edx
  PSLIST_ENTRY v12; // r8
  struct VIDMM_RECYCLE_RANGE *NextRange; // r13
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r10
  PSLIST_ENTRY Multirange; // rbp
  int v18; // eax
  int v19; // eax

  v3 = 0;
  v4 = 0;
  if ( *((_DWORD *)a2 + 16) != 4 )
  {
    if ( *((_DWORD *)a2 + 16) != 5 )
    {
LABEL_34:
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v3, a2);
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v4, a2);
      return;
    }
    v6 = *((_QWORD *)a2 + 18);
    v3 = 1;
    goto LABEL_4;
  }
  v6 = *((_QWORD *)a2 + 19);
  v11 = **(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL);
  if ( (unsigned int)(v11 - 3) <= 3 || (v4 = 1, (unsigned int)(v11 - 9) <= 1) )
LABEL_4:
    v4 = 2;
  if ( !v6 )
    goto LABEL_34;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v3, v6);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_QWORD *)(v6 + 40);
  v10 = *((_QWORD *)a2 + 5);
  if ( v7 < v8 )
  {
    if ( v9 > v10 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
      v14 = *(_QWORD *)(v6 + 72);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(_DWORD *)(v6 + 216),
                     *((_QWORD *)a2 + 9),
                     v15,
                     v16);
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&Multirange[4].Next + 1) = v14;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, *(_QWORD *)(v6 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v18 = *((_DWORD *)&Multirange[13].Next + 2);
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              *((_QWORD *)NextRange + 19) = Multirange;
          }
          else
          {
            *((_QWORD *)NextRange + 18) = Multirange;
          }
        }
        else
        {
          *((_QWORD *)NextRange + 17) = Multirange;
        }
        if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)&Multirange[4].Next + 1) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v3, v6);
      v12 = Multirange;
      goto LABEL_21;
    }
LABEL_17:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, v7, v8);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v12 = (PSLIST_ENTRY)v6;
LABEL_21:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v3, v12);
    return;
  }
  if ( v9 > v10 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v7 = *((_QWORD *)a2 + 5);
    goto LABEL_17;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *((VIDMM_RECYCLE_HEAP_MGR **)this + 1),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v6);
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
