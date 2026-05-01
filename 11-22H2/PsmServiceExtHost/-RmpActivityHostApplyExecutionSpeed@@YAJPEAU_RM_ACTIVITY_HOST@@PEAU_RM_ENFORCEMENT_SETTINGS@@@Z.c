/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000E724
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180027750 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000E8B8 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800325FC (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // ebx
  int v4; // esi
  __int64 result; // rax
  unsigned __int8 v7; // al
  _BYTE *v8; // rbx
  char v9; // cl
  DWORD v10; // r14d
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // rdx

  v2 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a1 + 304);
  if ( v4 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v7 = v2 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0;
    v8 = (char *)a1 + 1220;
    v9 = v4 >= 2 && (*v8 & 2) != 0;
    if ( v7 != v9 )
      RmHamHostActOnProcesses(a1, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)v7);
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 64);
    CurrentThreadId = GetCurrentThreadId();
    v13 = HampLockTrackerId;
    *((_DWORD *)a1 + 18) = CurrentThreadId;
    *((_DWORD *)a1 + 304) = *((_DWORD *)a2 + 6);
    *v8 ^= (*v8 ^ *((_BYTE *)a2 + 28)) & 2;
    if ( v13 != -1 )
    {
      v14 = (__int64 *)TlsGetValue(v13);
      v15 = *v14;
      if ( (*v14 & 2) == 0 )
        __int2c();
      if ( v14[2]-- == 1 )
        *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a1 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 64);
    return 0LL;
  }
  return result;
}
