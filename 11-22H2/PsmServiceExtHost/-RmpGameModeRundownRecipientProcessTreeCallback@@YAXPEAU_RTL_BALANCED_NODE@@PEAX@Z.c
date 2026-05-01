/*
 * XREFs of ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180089994
 * Callers:
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180089874 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800885FC (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x180088758 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008893C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRundownRecipientProcessTreeCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v2; // rbx
  struct _RTL_BALANCED_NODE *v3; // rsi
  _BYTE *v4; // rdi
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v5; // rax
  ULONG_PTR ParentValue; // rdx
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **v7; // rcx

  v2 = &a1[-1].16;
  v3 = a1[1].Children[0];
  RtlAcquireSRWLockExclusive(&v3[3]);
  LODWORD(v3[3].Right) = GetCurrentThreadId();
  if ( (*(_BYTE *)&v2[18] & 1) != 0 )
  {
    v5 = v2 + 7;
    ParentValue = v2[7].ParentValue;
    if ( *(union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)(ParentValue + 8) != &v2[7]
      || (v7 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)v2[8].ParentValue, *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)ParentValue;
    *(_QWORD *)(ParentValue + 8) = v7;
    *(_OWORD *)v5 = 0LL;
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
    v4 = (char *)&v2[21] + 2;
    if ( (*((_BYTE *)&v2[21] + 2) & 8) != 0 )
      RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2, 0LL);
  }
  else
  {
    v4 = (char *)&v2[21] + 2;
  }
  *v4 &= ~1u;
  LODWORD(v3[3].Right) = 0;
  RtlReleaseSRWLockExclusive(&v3[3]);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v2);
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
}
