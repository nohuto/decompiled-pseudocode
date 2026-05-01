/*
 * XREFs of ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4_HOST_GROUP@@@Z @ 0x180009E54
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009DF4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 * Callees:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 */

void __fastcall HampAppTryChangeExecutionState(__int64 a1, int a2, unsigned __int8 a3)
{
  DWORD v3; // ebp
  _QWORD *Value; // rsi
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 > 1u )
    return;
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
    v8 = *(_DWORD *)(a1 + 616) >> 25;
  else
    v8 = *(_DWORD *)(a1 + 620) >> 5;
  v9 = v8 & 7;
  if ( v9 != a2 && (v9 != 4 || !a2) )
  {
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 2 )
      {
        if ( v9 == 3 )
          goto LABEL_16;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_16;
      }
    }
    v10 = a2 & 7;
    if ( a3 )
    {
      *(_DWORD *)(a1 + 616) &= 0xF1FFFFFF;
      *(_DWORD *)(a1 + 616) |= v10 << 25;
    }
    else
    {
      v14 = (32 * v10) | *(_DWORD *)(a1 + 620) & 0xFFFFFF1F;
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)a1, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v14);
    }
  }
LABEL_16:
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 0x20) == 0 )
      __int2c();
    if ( v11[6]-- == 1 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *(_DWORD *)(a1 + 592) = 0;
  RtlReleaseSRWLockExclusive(a1 + 584);
}
