/*
 * XREFs of CempListRemoveHeadAndClear @ 0x18003D3CC
 * Callers:
 *     RmpWnfCleanupPendingCallbackList @ 0x1800056C0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003D2D0 (-RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008A8A4 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CempListRemoveHeadAndClear(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}
