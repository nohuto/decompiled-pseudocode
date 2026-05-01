/*
 * XREFs of ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003DC30
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800294D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18003EA24 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 */

unsigned __int64 __fastcall HampHostCommitQuiesceAction(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned int v5; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 == 3 )
  {
    HampHostRevokeQuiesceExtension(a1, 6LL);
  }
  else if ( a2 == 4 && (*(_QWORD *)(a1 + 664) & 0xE0000000LL) != 0x80000000LL )
  {
    HampHostQueueTerminateEx(a1, (*(_QWORD *)(a1 + 664) >> 44) & 1 | 2, 0xE00u, 0LL, 3, 0, 0LL, &v5);
  }
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFF1FFFFFFFuLL;
  result = (unsigned __int64)(a2 & 7) << 29;
  *(_QWORD *)(a1 + 664) |= result;
  return result;
}
