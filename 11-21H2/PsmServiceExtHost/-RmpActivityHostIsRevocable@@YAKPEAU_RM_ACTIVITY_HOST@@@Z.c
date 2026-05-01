/*
 * XREFs of ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087514 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008D250 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18008D3D4 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180090AD0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180091924 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall RmpActivityHostIsRevocable(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ecx
  unsigned int v4; // ebp
  int v5; // r12d
  BOOL v6; // r14d
  DWORD v7; // r15d
  _QWORD *Value; // rsi
  struct _RM_ACTIVITY_HOST *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  struct _HAM_ACTIVITY *NextActivity; // rax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 508LL) & 4;
  if ( !v2 && ((*((_BYTE *)a1 + 1176) & 4) == 0 || (*((_BYTE *)a1 + 1178) & 4) == 0) )
    return 0LL;
  v4 = 0;
  if ( (*((_BYTE *)a1 + 852) & 1) != 0 )
  {
    v5 = 1;
    v6 = v2 == 0;
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockShared((char *)a1 + 64);
    if ( (*((_QWORD *)a1 + 91) & 0x2000000000000LL) != 0 )
    {
      v9 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 84);
      if ( v9 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 672)
        || (NextActivity = (struct _RM_ACTIVITY_HOST *)((char *)v9 - 96), v9 == (struct _RM_ACTIVITY_HOST *)96) )
      {
LABEL_12:
        if ( !v6
          || (RmHamHostGetCurrentState(
                (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
                (union _RM_OPTIMIZATION_STATE *)&v14,
                (union _RM_OPTIMIZATION_STATE *)&v15),
              v14 < 0)
          && v15 >= 0 )
        {
LABEL_15:
          if ( HampLockTrackerId != -1 )
          {
            v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v11 = *v10;
            if ( (*v10 & 2) == 0 )
              __int2c();
            if ( v10[2]-- == 1 )
              *v10 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          RtlReleaseSRWLockShared((char *)a1 + 64);
          if ( !v5 )
            return 0LL;
          goto LABEL_21;
        }
      }
      else
      {
        while ( (*((_DWORD *)NextActivity + 28) & 0x200) == 0 )
        {
          NextActivity = HampHostGetNextActivity(NextActivity);
          if ( !NextActivity )
            goto LABEL_12;
        }
      }
    }
    v5 = 0;
    goto LABEL_15;
  }
LABEL_21:
  LOBYTE(v4) = (*((_BYTE *)a1 + 1178) & 0x30) != 0;
  return v4;
}
