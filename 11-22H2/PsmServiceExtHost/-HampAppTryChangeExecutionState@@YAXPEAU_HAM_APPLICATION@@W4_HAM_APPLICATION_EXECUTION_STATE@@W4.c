/*
 * XREFs of ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4_HOST_GROUP@@@Z @ 0x18001782C
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800177C0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180019944 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampAppTryChangeExecutionState(__int64 a1, unsigned int a2, char a3)
{
  DWORD v3; // ebp
  _QWORD *Value; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ebx
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(a1 + 584);
  *(_DWORD *)(a1 + 592) = GetCurrentThreadId();
  if ( a3 )
    v9 = *(_DWORD *)(a1 + 616) >> 25;
  else
    v9 = *(_DWORD *)(a1 + 620) >> 5;
  v10 = v9 & 7;
  if ( v10 != a2 && (v10 != 4 || !a2) )
  {
    v8 = a2;
    if ( a2 )
    {
      v8 = a2 - 1;
      if ( a2 == 1 || (v8 = a2 - 2, a2 == 2) )
      {
        if ( v10 == 3 )
          goto LABEL_20;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_20;
      }
    }
    v11 = a2 & 7;
    if ( a3 )
    {
      *(_DWORD *)(a1 + 616) &= 0xF1FFFFFF;
      *(_DWORD *)(a1 + 616) |= v11 << 25;
    }
    else
    {
      v13 = (32 * v11) | *(_DWORD *)(a1 + 620) & 0xFFFFFF1F;
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)a1, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v13);
    }
  }
LABEL_20:
  CempLockTrackerMarkReleased(HampLockTrackerId, v8, 5LL);
  *(_DWORD *)(a1 + 592) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 584);
}
