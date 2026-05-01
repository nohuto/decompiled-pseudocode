/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180082914
 * Callers:
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007FA50 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008283C (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall HampSlsEndScenarioInstance(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  unsigned __int64 v1; // rdi
  bool v3; // zf
  struct _RTL_BALANCED_NODE *v4; // rcx
  int v5; // esi
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rax
  struct _RTL_BALANCED_NODE *v8; // rdx
  unsigned __int64 v9; // rbx

  v1 = (unsigned __int64)a1 + 16;
  v3 = (*((_BYTE *)a1 + 24) & 1) == 0;
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 2);
  if ( !v3 && v4 )
    v4 = (struct _RTL_BALANCED_NODE *)(v1 ^ (unsigned __int64)v4);
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v6 = v4;
          if ( v5 )
            v4 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v4->Children[0] ^ (unsigned __int64)v4);
          else
            v4 = v4->Children[0];
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64)v4->Children[1];
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 = (struct _RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v4);
        else
          v4 = v4->Children[1];
        v8->Children[1] = 0LL;
      }
      v9 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= (unsigned __int64)v4;
      HampSlsBlockerTreeDeleteCallback(v4, a1);
      if ( !v9 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v9;
    }
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *((_DWORD *)a1 + 8) &= ~1u;
}
