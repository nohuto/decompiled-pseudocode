/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017968
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CempListEntryIsNull @ 0x18002AB98 (CempListEntryIsNull.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // r14d
  unsigned __int64 v3; // rdi
  _QWORD *Value; // rbx
  char *v5; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char **v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char **v15; // rax
  int v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+34h] [rbp-35h] BYREF
  int v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  int *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  int *v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+98h] [rbp+2Fh]
  int v29; // [rsp+9Ch] [rbp+33h]

  v2 = HampLockTrackerId;
  v3 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 392;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockExclusive(v3);
  *(_DWORD *)(v3 + 8) = GetCurrentThreadId();
  v5 = (char *)a1 + 992;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 120)
                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*((_BYTE *)a1 + 680) & 0x40) != 0 )
      break;
    if ( (*((_QWORD *)a1 + 83) & 0x200000000000LL) != 0 )
      break;
    if ( !*(_DWORD *)(v6 + 672) )
    {
      v7 = (_QWORD *)(v6 + 656);
      if ( (_QWORD *)*v7 == v7 || (char *)*v7 == v5 )
        break;
    }
    if ( (unsigned int)CempListEntryIsNull((char *)a1 + 992) )
    {
      v10 = *(char ***)(v3 + 1056);
      if ( *v10 != (char *)(v3 + 1048) )
        goto LABEL_25;
      *(_QWORD *)v5 = v3 + 1048;
      *((_QWORD *)a1 + 125) = v10;
      *v10 = v5;
      *(_QWORD *)(v3 + 1056) = v5;
    }
    v18 = *(_DWORD *)(v3 + 1068);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
    v12 = 64LL;
    if ( a1 )
      v12 = (__int64)a1;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v12, v11);
    RmpReleaseGlobalLock();
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    {
      v13 = *(_DWORD *)(v3 + 1064);
      v29 = 0;
      v26 = 0;
      v23 = 0;
      v16 = v13;
      v17 = *((_DWORD *)a1 + 170);
      v19 = *((_QWORD *)a1 - 4);
      v27 = &v16;
      v24 = &v17;
      v21 = &v19;
      v28 = 4;
      v25 = 4;
      v22 = 8;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800BF5BF, 0, 0, 5u, &v20);
    }
    RtlWaitOnAddress(v3 + 1068, &v18, 4LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
  }
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 992) )
  {
    v14 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v15 = (char **)*((_QWORD *)a1 + 125), *v15 != v5) )
LABEL_25:
      __fastfail(3u);
    *v15 = (char *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_OWORD *)v5 = 0LL;
  }
  v9 = HampLockTrackerId;
  ++*(_DWORD *)(v3 + 1064);
  CempLockTrackerMarkReleased(v9, v8, 10LL);
  *(_DWORD *)(v3 + 8) = 0;
  RtlReleaseSRWLockExclusive(v3);
}
