/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x140689C78
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140687A54 (HvpViewMapExtendStorage.c)
 *     HvpViewMapStart @ 0x140750414 (HvpViewMapStart.c)
 * Callees:
 *     CmSiGetMemoryAllocationGranularity @ 0x140207D3C (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x140208C80 (CmSiUnmapViewOfSection.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E7F0 (HvcallpNoHypervisorPresent.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  PPRIVILEGE_SET v4; // rbx
  __int64 MemoryAllocationGranularity; // rax
  PRTL_BALANCED_NODE v9; // r9
  PRTL_BALANCED_NODE *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 j; // r8
  __int64 k; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbx
  int ViewRangeValid; // esi
  __int64 v23; // r9
  _QWORD *v24; // rax
  PRTL_BALANCED_NODE v25; // rax
  _RTL_BALANCED_NODE **v26; // rdi
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  unsigned __int64 v29; // rax
  _RTL_BALANCED_NODE *v30; // rax
  PRTL_BALANCED_NODE v31; // rbx
  void *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  _RTL_BALANCED_NODE *v36; // rax
  _RTL_BALANCED_NODE *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 i; // [rsp+30h] [rbp-20h]
  PRTL_BALANCED_NODE Node; // [rsp+38h] [rbp-18h] BYREF
  PRTL_BALANCED_NODE *p_Node; // [rsp+40h] [rbp-10h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp+48h] BYREF
  PRTL_BALANCED_NODE *v44; // [rsp+A0h] [rbp+50h]
  char v45; // [rsp+A8h] [rbp+58h]

  v45 = a4;
  v4 = 0LL;
  Privileges = 0LL;
  p_Node = &Node;
  Node = (PRTL_BALANCED_NODE)&Node;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v44 = (PRTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v10 = (PRTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v11 = 0x200000LL;
  if ( v12 < v13 )
  {
    v14 = -MemoryAllocationGranularity;
    for ( i = v14; ; v14 = i )
    {
      v15 = a2 & v14;
      v16 = a3 - v15;
      if ( v11 <= a3 - v15 )
      {
        v20 = v11 + v15;
        v21 = v11 + v15;
      }
      else
      {
        for ( j = (__int64)v10; j < v16; j *= 2LL )
          ;
        for ( k = 2 * j; v15 + k - a3 <= a3 / 8; k *= 2LL )
          j = k;
        v19 = v11;
        if ( j < v11 )
          v19 = j;
        v20 = v15 + v19;
        if ( (*(_DWORD *)(a1 + 32) & 1) != 0 && v20 >= *(_QWORD *)(a1 + 16) )
          v20 = *(_QWORD *)(a1 + 16);
        v21 = a3;
      }
      ViewRangeValid = HvpViewMapCreateView(a1, v15, v20, &Privileges);
      if ( ViewRangeValid < 0 )
      {
        v10 = v44;
        v4 = Privileges;
        if ( v11 <= (__int64)v44 )
          goto LABEL_41;
        v11 /= 2LL;
      }
      else
      {
        v23 = v21;
        v4 = Privileges;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, Privileges, a2, v23, v45);
        if ( ViewRangeValid < 0 )
          goto LABEL_41;
        v24 = p_Node;
        if ( *p_Node != (PRTL_BALANCED_NODE)&Node )
          goto LABEL_58;
        v4->Privilege[0].Luid = (LUID)p_Node;
        *(_QWORD *)&v4->PrivilegeCount = &Node;
        a2 = v20;
        v10 = v44;
        *v24 = v4;
        p_Node = (PRTL_BALANCED_NODE *)v4;
        v4 = 0LL;
        Privileges = 0LL;
      }
      if ( a2 >= a3 )
        break;
    }
    v9 = Node;
  }
  v25 = v9->Children[0];
  if ( (PRTL_BALANCED_NODE *)v9->Children[1] != &Node || v25->Children[1] != v9 )
LABEL_58:
    __fastfail(3u);
  Node = v9->Children[0];
  v10 = &Node;
  v25->Children[1] = (_RTL_BALANCED_NODE *)&Node;
  if ( v9 != (PRTL_BALANCED_NODE)&Node )
  {
    v26 = (_RTL_BALANCED_NODE **)(a1 + 40);
    v4 = 0LL;
    do
    {
      v27 = (unsigned __int64)*v26;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v27 )
        v27 ^= (unsigned __int64)v26;
      v28 = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( (signed __int64)v9[1].ParentValue >= *(_QWORD *)(v27 + 40) )
          {
            v29 = *(_QWORD *)(v27 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_36;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_36:
              v28 = 1;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)v27;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_44;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_44:
              v28 = 0;
              break;
            }
          }
          v27 = v29;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 40), (PRTL_BALANCED_NODE)v27, v28, v9);
      v9 = Node;
      if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
        goto LABEL_58;
      v30 = Node->Children[0];
      if ( Node->Children[0]->Children[1] != Node )
        goto LABEL_58;
      Node = Node->Children[0];
      v10 = &Node;
      v30->Children[1] = (_RTL_BALANCED_NODE *)&Node;
    }
    while ( v9 != (PRTL_BALANCED_NODE)&Node );
  }
  ViewRangeValid = 0;
LABEL_41:
  if ( v4 )
  {
    v33 = *(void **)&v4[2].Privilege[0].Attributes;
    if ( v33 )
    {
      CmSiUnmapViewOfSection((__int64)v10, *(HANDLE **)(a1 + 24), v33);
      if ( *(_QWORD *)&v4[3].Control )
      {
        v34 = HvcallpNoHypervisorPresent();
        CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v35 * v34);
      }
    }
    CmSiFreeMemory(v4);
  }
  v31 = Node;
  if ( Node != (PRTL_BALANCED_NODE)&Node )
  {
    v36 = Node->Children[0];
    if ( (PRTL_BALANCED_NODE *)Node->Children[1] == &Node )
    {
      while ( v36->Children[1] == v31 )
      {
        Node = v36;
        v36->Children[1] = (_RTL_BALANCED_NODE *)&Node;
        if ( v31 == (PRTL_BALANCED_NODE)&Node )
          return (unsigned int)ViewRangeValid;
        v37 = v31[2].Children[1];
        if ( v37 )
        {
          CmSiUnmapViewOfSection((__int64)&Node, *(HANDLE **)(a1 + 24), v37);
          if ( v31[2].ParentValue )
          {
            v38 = HvcallpNoHypervisorPresent();
            CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v39 * v38);
          }
        }
        CmSiFreeMemory((PPRIVILEGE_SET)v31);
        v31 = Node;
        if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
          break;
        v36 = Node->Children[0];
      }
    }
    goto LABEL_58;
  }
  return (unsigned int)ViewRangeValid;
}
