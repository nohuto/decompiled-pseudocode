/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18004FC8C (-HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800752B0 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007537C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x1800753EC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180075450 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180076CEC (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180076D14 (-HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x18007791C (-HampActGetDependencyAction@@YA-AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18007C418 (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  struct _HAM_HOST_DEPENDENCY *i; // rax
  struct _HAM_DEP_HOST_STACK *v5; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r15
  int v11; // r8d
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  struct _RTL_BALANCED_NODE *v16; // rbx
  void *v17; // rsi
  int v18; // ebp
  struct _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // r8
  struct _RTL_BALANCED_NODE *v21; // rbx
  void *v22; // rbp
  int v23; // esi
  struct _RTL_BALANCED_NODE *v24; // rax
  struct _HAM_HOST_DEPENDENCY *v25; // r14
  struct _HAM_HOST_DEPENDENCY *k; // rax
  int v27; // r8d
  unsigned int v28; // r8d
  __int64 v29; // rdx
  int v30; // r11d
  struct _HAM_HOST_DEPENDENCY *v31; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+60h] [rbp+18h]

  for ( i = HampDepGroupGetFirstDependency(a1); i; i = HampDepGroupGetNextDependency(i) )
    *((_DWORD *)i + 8) = 0;
LABEL_4:
  if ( !(unsigned int)HampDepHostStackIsEmpty(a2) )
  {
    v32 = HampDepHostStackPop(v5);
    v6 = v32;
    for ( j = HampDepGroupFindFirstDependencyForHost(a1, v32); ; j = HampDepGroupGetNextDependencyForHost(v25) )
    {
      v25 = j;
      if ( !j )
        goto LABEL_4;
      if ( *((_BYTE *)j + 40) != 3 )
      {
        v8 = *((_DWORD *)j + 9);
        *((_DWORD *)j + 8) |= 8u;
        if ( (unsigned __int8)HampActGetDependencyAction(j, 2 * (v8 & 1u)) != 3 )
        {
          v9 = *((_DWORD *)v6 + 196) >> 2;
          v10 = *(_QWORD *)(*(_QWORD *)v25 + 80LL);
          v11 = *(_DWORD *)(v10 + 784) >> 2;
          v12 = v11 & 3;
          if ( v12 <= (v9 & 3u) )
            LOBYTE(v11) = v9;
          v13 = *(_DWORD *)(v10 + 784) ^ ((unsigned __int8)*(_DWORD *)(v10 + 784) ^ (unsigned __int8)(4 * v11)) & 0xCu;
          *(_DWORD *)(v10 + 784) = v13;
          v14 = *(_QWORD *)v25;
          *(_QWORD *)(v14 + 432) |= 0x20uLL;
          *(_DWORD *)(v14 + 480) ^= (*(_DWORD *)(v14 + 480) ^ (*(_DWORD *)(v10 + 784) >> 2)) & 3;
          v15 = *(unsigned int *)(v10 + 784);
          if ( (v15 & 2) != 0 )
          {
            if ( v12 >= (((unsigned int)v15 >> 2) & 3) )
              continue;
            RtlRbRemoveNode(a2, v10 + 760);
            *(_QWORD *)(v10 + 776) = -1LL;
            v21 = *(struct _RTL_BALANCED_NODE **)a2;
            v22 = (void *)((*(_DWORD *)(v10 + 784) >> 2) & 3);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v21 )
              v21 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v21);
            LOBYTE(v20) = 0;
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
                      goto LABEL_44;
                    v24 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v24);
                  }
                  if ( !v24 )
                  {
LABEL_44:
                    LOBYTE(v20) = 0;
                    break;
                  }
                }
                else
                {
                  v24 = v21->Children[1];
                  if ( v23 )
                  {
                    if ( !v24 )
                      goto LABEL_38;
                    v24 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v24);
                  }
                  if ( !v24 )
                  {
LABEL_38:
                    LOBYTE(v20) = 1;
                    break;
                  }
                }
                v21 = v24;
              }
            }
            RtlRbInsertNodeEx(a2, v21, v20, v10 + 760);
          }
          else
          {
            v16 = *(struct _RTL_BALANCED_NODE **)a2;
            v17 = (void *)((v15 >> 2) & 3);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( v16 )
                v16 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v16);
            }
            LOBYTE(v13) = 0;
            v18 = *(_BYTE *)(a2 + 8) & 1;
            if ( v16 )
            {
              while ( 1 )
              {
                if ( (int)HampDepHostStackCompareHosts(v17, v16) < 0 )
                {
                  v19 = v16->Children[0];
                  if ( v18 )
                  {
                    if ( !v19 )
                      goto LABEL_26;
                    v19 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v16 ^ (unsigned __int64)v19);
                  }
                  if ( !v19 )
                  {
LABEL_26:
                    LOBYTE(v13) = 0;
                    break;
                  }
                }
                else
                {
                  v19 = v16->Children[1];
                  if ( v18 )
                  {
                    if ( !v19 )
                      goto LABEL_20;
                    v19 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v16 ^ (unsigned __int64)v19);
                  }
                  if ( !v19 )
                  {
LABEL_20:
                    LOBYTE(v13) = 1;
                    break;
                  }
                }
                v16 = v19;
              }
            }
            RtlRbInsertNodeEx(a2, v16, v13, v10 + 760);
            *(_DWORD *)(v10 + 784) |= 2u;
          }
          v6 = v32;
        }
      }
    }
  }
  for ( k = HampDepGroupGetFirstDependency(a1); ; k = HampDepGroupGetNextDependency(v31) )
  {
    v31 = k;
    if ( !k )
      break;
    if ( *((_BYTE *)k + 40) == 1 )
    {
      if ( *(_QWORD *)(*((_QWORD *)k + 6) + 816LL) <= *((_QWORD *)k + 8)
        && *(_QWORD *)(*((_QWORD *)k + 7) + 816LL) <= *((_QWORD *)k + 9) )
      {
        v27 = *((_DWORD *)k + 9);
        goto LABEL_59;
      }
      *((_DWORD *)k + 9) |= 1u;
    }
    v27 = *((_DWORD *)k + 9);
    if ( *((_BYTE *)k + 40) == 3 && HampTerminateDepShouldInvalidate(k) )
    {
      v27 |= 1u;
      *((_DWORD *)v31 + 9) = v27;
    }
LABEL_59:
    v28 = 2 * (v27 & 1);
    v29 = v28 | 1;
    if ( (*((_DWORD *)v31 + 8) & 8) == 0 )
      v29 = v28;
    LOBYTE(v30) = HampActGetDependencyAction(v31, v29);
    *((_DWORD *)v31 + 8) ^= (*((_DWORD *)v31 + 8) ^ v30) & 7;
  }
}
