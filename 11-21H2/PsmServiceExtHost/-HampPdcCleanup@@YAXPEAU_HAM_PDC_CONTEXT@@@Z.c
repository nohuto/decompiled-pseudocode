/*
 * XREFs of ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E9D0
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008283C (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall HampPdcCleanup(struct _HAM_PDC_CONTEXT *a1)
{
  unsigned __int64 v1; // rbx
  bool v3; // zf
  struct _RTL_BALANCED_NODE *v4; // rcx
  char v5; // al
  int v6; // ebp
  struct _RTL_BALANCED_NODE *v7; // rdx
  unsigned __int64 v8; // rax
  struct _RTL_BALANCED_NODE *v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v1 = (unsigned __int64)a1 + 48;
  v3 = (*((_BYTE *)a1 + 56) & 1) == 0;
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 6);
  if ( !v3 && v4 )
    v4 = (struct _RTL_BALANCED_NODE *)(v1 ^ (unsigned __int64)v4);
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v7 = v4;
          if ( v6 )
            v4 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v4->Children[0] ^ (unsigned __int64)v4);
          else
            v4 = v4->Children[0];
          v7->Children[0] = 0LL;
        }
        v8 = (unsigned __int64)v4->Children[1];
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 = (struct _RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v4);
        else
          v4 = v4->Children[1];
        v9->Children[1] = 0LL;
      }
      v10 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= (unsigned __int64)v4;
      HampSlsBlockerTreeDeleteCallback(v4, (char *)a1 + 32);
      if ( !v10 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *((_QWORD *)a1 + 3) )
    Pdcv2ActivationClientUnregister();
  v11 = *((_QWORD *)a1 + 10);
  if ( v11 )
    TpReleaseWork(v11);
  v12 = *((_QWORD *)a1 + 11);
  if ( v12 )
    TpReleaseWork(v12);
  v13 = *((_QWORD *)a1 + 9);
  if ( v13 )
    TpReleaseWork(v13);
}
