/*
 * XREFs of ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800191D0
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostUpdateUsageInfoProcesses(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  __int64 v4; // rax
  struct _RM_ACTIVITY_HOST *v5; // rbp
  __int64 *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  DWORD v9; // esi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rcx
  _FILETIME v15; // [rsp+40h] [rbp+8h]
  _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = HampLockTrackerId;
  v15 = SystemTimeAsFileTime;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC590 = GetCurrentThreadId();
  v4 = *((_QWORD *)a1 + 75);
  if ( !v4 )
    __int2c();
  if ( *((int *)a1 - 10) >= 0 )
    *((_QWORD *)a1 + 75) = v4 + 1;
  v5 = 0LL;
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v7 = *v6;
    if ( (*v6 & 1) == 0 )
      __int2c();
    v8 = v6[1]-- == 1;
    if ( v8 )
      *v6 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v10 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v10 |= 2uLL;
    ++v10[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v11 = *((_QWORD *)a1 + 83);
  if ( (v11 & 0x2000000000000LL) != 0 )
    *((_FILETIME *)a1 + 129) = v15;
  else
    *((_FILETIME *)a1 + 128) = v15;
  v12 = ((v11 | 0x1000000000000000uLL) >> 59) & 1;
  *((_QWORD *)a1 + 83) = v11 | 0x1800000000000000LL;
  if ( HampLockTrackerId != -1 )
  {
    v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *v13;
    if ( (*v13 & 2) == 0 )
      __int2c();
    v8 = v13[2]-- == 1;
    if ( v8 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( (_DWORD)v12 )
  {
    RmpAcquireGlobalLock();
    v8 = (*((_QWORD *)a1 + 75))-- == 1LL;
    if ( v8 )
    {
      if ( a1 )
        v5 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64);
      RmpActivityHostCheckQueueDelete(v5);
    }
    RmpReleaseGlobalLock();
  }
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
}
