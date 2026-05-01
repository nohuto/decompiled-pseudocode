/*
 * XREFs of ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x1800400F4
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003FE9C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D510 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampActTerminate(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, int a5, char a6)
{
  __int64 v6; // rdi
  int v11; // ebx
  struct _HAM_ACTIVITY *i; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  v16 = 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v6, 0);
  if ( *(_BYTE *)(a1 + 562) == 4 )
  {
    v11 = -1073741275;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a1 + 512) )
  {
    if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
    {
      v11 = -1058275327;
      goto LABEL_7;
    }
    if ( (a6 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 112) & 0x10000) == 0 )
      {
        v11 = -1073741580;
        goto LABEL_7;
      }
      for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v6); i; i = HampHostGetNextActivity(i) )
      {
        if ( i != (struct _HAM_ACTIVITY *)a1
          && *((_QWORD *)i + 64) == *(_QWORD *)(v6 + 816)
          && (v15 & *((_DWORD *)i + 28)) != 0
          && (*((_BYTE *)i + 552) & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 552) = v14 | 0x10;
          v11 = -1058275328;
          goto LABEL_7;
        }
      }
    }
    v11 = HampHostQueueTerminateEx(v6, a2, a3, *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64), 1, a5, a4, &v16);
    if ( v11 >= 0 )
      v11 = 0;
  }
  else
  {
    v11 = -1073741436;
  }
LABEL_7:
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v6);
  if ( v16 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 704));
  return (unsigned int)v11;
}
