/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800815C0
 * Callers:
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007E990 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1800814E8 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall HampSlsEndScenarioInstance(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  unsigned __int64 v1; // rdi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbx

  v1 = (unsigned __int64)a1 + 16;
  v3 = (*((_BYTE *)a1 + 24) & 1) == 0;
  v4 = *((_QWORD *)a1 + 2);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (struct _RTL_BALANCED_NODE *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64 *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 8) )
          break;
        if ( v5 )
          v4 ^= *v7;
        else
          v4 = *v7;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      HampSlsBlockerTreeDeleteCallback((struct _RTL_BALANCED_NODE *)v4, a1);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *((_DWORD *)a1 + 8) &= ~1u;
}
