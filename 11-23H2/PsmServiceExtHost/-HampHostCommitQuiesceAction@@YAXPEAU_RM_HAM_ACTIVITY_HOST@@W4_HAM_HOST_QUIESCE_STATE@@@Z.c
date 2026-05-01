/*
 * XREFs of ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003625C
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180034F80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180014144 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 */

__int64 __fastcall HampHostCommitQuiesceAction(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned int v6; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == 3 )
  {
    HampHostRevokeQuiesceExtension(a1, 6u, 0);
  }
  else if ( a2 == 4 )
  {
    v5 = *(_QWORD *)(a1 + 664);
    if ( (v5 & 0xE0000000) != 0x80000000 )
      HampHostQueueTerminateEx(a1, (v5 >> 44) & 1 | 2, 0xE00u, 0LL, 3, 0, 0LL, &v6);
  }
  result = (*(_DWORD *)(a1 + 664) ^ (v2 << 29)) & 0xE0000000;
  *(_QWORD *)(a1 + 664) ^= result;
  return result;
}
