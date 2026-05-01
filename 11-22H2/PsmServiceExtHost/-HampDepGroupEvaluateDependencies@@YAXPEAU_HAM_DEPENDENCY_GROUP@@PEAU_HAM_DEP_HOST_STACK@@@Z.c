/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003B748
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B818 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB2C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BC14 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D630 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18004D7D0 (-HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x18007B76C (-HampActGetDependencyAction@@YA-AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB2C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB88 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180080C60 (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  struct _HAM_HOST_DEPENDENCY *i; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_HOST_DEPENDENCY *v10; // r14
  struct _HAM_HOST_DEPENDENCY *k; // rax
  struct _HAM_HOST_DEPENDENCY *v12; // rbx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // r15
  int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  struct _RTL_BALANCED_NODE *v21; // rdi
  void *v22; // rsi
  int v23; // ebp
  struct _RTL_BALANCED_NODE *v24; // rax
  __int64 v25; // r8
  struct _RTL_BALANCED_NODE *v26; // rdi
  void *v27; // rbp
  int v28; // esi
  struct _RTL_BALANCED_NODE *v29; // rax
  char v30; // al
  _DWORD *v31; // r8
  _DWORD *v32; // r9
  __int64 v33; // rdx
  int v34; // r11d
  unsigned __int64 v35; // [rsp+60h] [rbp+18h]

  for ( i = HampDepGroupGetFirstDependency(a1); i; i = HampDepGroupGetNextDependency(i) )
    *((_DWORD *)i + 8) = 0;
LABEL_3:
  if ( !HampDepHostStackIsEmpty((struct _HAM_DEP_HOST_STACK *)a2) )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( (v6 & 1) != 0 )
    {
      if ( v6 == 1 )
        v7 = 0LL;
      else
        v7 = v6 ^ (a2 | 1);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 8);
    }
    RtlRbRemoveNode(v5, v7);
    *(_QWORD *)(v7 + 16) = -1LL;
    v8 = v7 - 760;
    v35 = v8;
    for ( j = HampDepGroupFindFirstDependencyForHost(a1, (struct _RM_HAM_ACTIVITY_HOST *)v8);
          ;
          j = HampDepGroupGetNextDependencyForHost(v10) )
    {
      v10 = j;
      if ( !j )
        goto LABEL_3;
      if ( *((_BYTE *)j + 40) != 3 )
      {
        v13 = *((_DWORD *)j + 9);
        *((_DWORD *)j + 8) |= 8u;
        if ( (unsigned __int8)HampActGetDependencyAction(j, 2 * (v13 & 1u)) != 3 )
        {
          v14 = *(_DWORD *)(v8 + 784) >> 2;
          v15 = *(_QWORD *)(*(_QWORD *)v10 + 80LL);
          v16 = *(_DWORD *)(v15 + 784) >> 2;
          v17 = v16 & 3;
          if ( v17 <= (v14 & 3u) )
            LOBYTE(v16) = v14;
          v18 = *(_DWORD *)(v15 + 784) ^ ((unsigned __int8)*(_DWORD *)(v15 + 784) ^ (unsigned __int8)(4 * v16)) & 0xCu;
          *(_DWORD *)(v15 + 784) = v18;
          v19 = *(_QWORD *)v10;
          *(_QWORD *)(v19 + 432) |= 0x20uLL;
          *(_DWORD *)(v19 + 480) ^= (*(_DWORD *)(v19 + 480) ^ (*(_DWORD *)(v15 + 784) >> 2)) & 3;
          v20 = *(unsigned int *)(v15 + 784);
          if ( (v20 & 2) != 0 )
          {
            if ( v17 >= (((unsigned int)v20 >> 2) & 3) )
              continue;
            RtlRbRemoveNode(a2, v15 + 760);
            *(_QWORD *)(v15 + 776) = -1LL;
            v26 = *(struct _RTL_BALANCED_NODE **)a2;
            v27 = (void *)((*(_DWORD *)(v15 + 784) >> 2) & 3);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v26 )
              v26 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v26);
            LOBYTE(v25) = 0;
            v28 = *(_BYTE *)(a2 + 8) & 1;
            if ( v26 )
            {
              while ( 1 )
              {
                if ( (int)HampDepHostStackCompareHosts(v27, v26) < 0 )
                {
                  v29 = v26->Children[0];
                  if ( v28 )
                  {
                    if ( !v29 )
                      goto LABEL_54;
                    v29 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v26 ^ (unsigned __int64)v29);
                  }
                  if ( !v29 )
                  {
LABEL_54:
                    LOBYTE(v25) = 0;
                    break;
                  }
                }
                else
                {
                  v29 = v26->Children[1];
                  if ( v28 )
                  {
                    if ( !v29 )
                      goto LABEL_48;
                    v29 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v26 ^ (unsigned __int64)v29);
                  }
                  if ( !v29 )
                  {
LABEL_48:
                    LOBYTE(v25) = 1;
                    break;
                  }
                }
                v26 = v29;
              }
            }
            RtlRbInsertNodeEx(a2, v26, v25, v15 + 760);
          }
          else
          {
            v21 = *(struct _RTL_BALANCED_NODE **)a2;
            v22 = (void *)((v20 >> 2) & 3);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( v21 )
                v21 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v21);
            }
            LOBYTE(v18) = 0;
            v23 = *(_BYTE *)(a2 + 8) & 1;
            if ( v21 )
            {
              while ( 1 )
              {
                if ( (int)HampDepHostStackCompareHosts(v22, v21) < 0 )
                {
                  v24 = v21->Children[0];
                  if ( v23 )
                  {
                    if ( !v24 )
                      goto LABEL_36;
                    v24 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v24);
                  }
                  if ( !v24 )
                  {
LABEL_36:
                    LOBYTE(v18) = 0;
                    break;
                  }
                }
                else
                {
                  v24 = v21->Children[1];
                  if ( v23 )
                  {
                    if ( !v24 )
                      goto LABEL_30;
                    v24 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v24);
                  }
                  if ( !v24 )
                  {
LABEL_30:
                    LOBYTE(v18) = 1;
                    break;
                  }
                }
                v21 = v24;
              }
            }
            RtlRbInsertNodeEx(a2, v21, v18, v15 + 760);
            *(_DWORD *)(v15 + 784) |= 2u;
          }
          v8 = v35;
        }
      }
    }
  }
  for ( k = HampDepGroupGetFirstDependency(a1); ; k = HampDepGroupGetNextDependency(v12) )
  {
    v12 = k;
    if ( !k )
      break;
    v30 = *((_BYTE *)k + 40);
    if ( v30 == 1 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v12 + 6) + 816LL) > *((_QWORD *)v12 + 8)
        || *(_QWORD *)(*((_QWORD *)v12 + 7) + 816LL) > *((_QWORD *)v12 + 9) )
      {
        v31 = (_DWORD *)((char *)v12 + 36);
        *((_DWORD *)v12 + 9) |= 1u;
      }
      else
      {
        v31 = (_DWORD *)((char *)v12 + 36);
      }
    }
    else
    {
      v31 = (_DWORD *)((char *)v12 + 36);
      if ( v30 == 3 && HampTerminateDepShouldInvalidate(v12) )
        *v32 |= 1u;
    }
    v33 = (2 * (*v31 & 1)) | 1u;
    if ( (*((_DWORD *)v12 + 8) & 8) == 0 )
      v33 = 2 * (*v31 & 1u);
    LOBYTE(v34) = HampActGetDependencyAction(v12, v33);
    *((_DWORD *)v12 + 8) ^= (*((_DWORD *)v12 + 8) ^ v34) & 7;
  }
}
