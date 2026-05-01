/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008BC14
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800837C4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180006780 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008BD30 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  struct _RTL_BALANCED_NODE *v3; // rcx
  char v4; // al
  int v5; // esi
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rax
  struct _RTL_BALANCED_NODE *v8; // rdx
  unsigned __int64 v9; // rdi

  if ( *((_QWORD *)a1 + 8) )
  {
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
    RmpGameModeQueuePolicyWorkerWithLock(a1);
    *((_BYTE *)a1 + 148) |= 4u;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  }
  v2 = (unsigned __int64)a1 + 8;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 1);
  if ( (*((_BYTE *)a1 + 16) & 1) != 0 && v3 )
    v3 = (struct _RTL_BALANCED_NODE *)(v2 ^ (unsigned __int64)v3);
  v4 = *((_BYTE *)a1 + 16);
  v5 = v4 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v3->Children[0] )
        {
          v6 = v3;
          if ( v5 )
            v3 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v3->Children[0] ^ (unsigned __int64)v3);
          else
            v3 = v3->Children[0];
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64)v3->Children[1];
        if ( !v7 )
          break;
        v8 = v3;
        if ( v5 )
          v3 = (struct _RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v3);
        else
          v3 = v3->Children[1];
        v8->Children[1] = 0LL;
      }
      v9 = v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= (unsigned __int64)v3;
      RmpGameModeRundownRecipientProcessTreeCallback(v3, 0LL);
      if ( !v9 )
        break;
      v3 = (struct _RTL_BALANCED_NODE *)v9;
    }
    v4 = *(_BYTE *)(v2 + 8);
  }
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (v4 & 1) != 0 )
    *(_BYTE *)(v2 + 8) = 1;
}
