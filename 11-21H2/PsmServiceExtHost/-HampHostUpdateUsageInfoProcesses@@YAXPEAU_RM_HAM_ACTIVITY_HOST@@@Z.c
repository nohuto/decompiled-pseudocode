/*
 * XREFs of ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E420
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostUpdateUsageInfoProcesses(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  DWORD v8; // esi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  _FILETIME v14; // [rsp+40h] [rbp+8h]
  _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = HampLockTrackerId;
  v14 = SystemTimeAsFileTime;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v4 = *((_QWORD *)a1 + 75);
  if ( !v4 )
    __int2c();
  if ( *((int *)a1 - 10) >= 0 )
    *((_QWORD *)a1 + 75) = v4 + 1;
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 1) == 0 )
      __int2c();
    v7 = v5[1]-- == 1;
    if ( v7 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v9 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v9 |= 2uLL;
    ++v9[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v10 = *((_QWORD *)a1 + 83);
  if ( (v10 & 0x2000000000000LL) != 0 )
    *((_FILETIME *)a1 + 129) = v14;
  else
    *((_FILETIME *)a1 + 128) = v14;
  v11 = ((v10 | 0x1000000000000000uLL) >> 59) & 1;
  *((_QWORD *)a1 + 83) = v10 | 0x1800000000000000LL;
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      __int2c();
    v7 = v12[2]-- == 1;
    if ( v7 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( (_DWORD)v11 )
  {
    RmpAcquireGlobalLock();
    v7 = (*((_QWORD *)a1 + 75))-- == 1LL;
    if ( v7 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
}
