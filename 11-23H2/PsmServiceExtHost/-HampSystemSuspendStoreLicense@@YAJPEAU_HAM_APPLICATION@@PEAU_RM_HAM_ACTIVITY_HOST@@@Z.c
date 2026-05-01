/*
 * XREFs of ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015CC0
 * Callers:
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180049D9C (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemSuspendStoreLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v3; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // edi
  _QWORD *v7; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // edi

  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    v3 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v3) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    CurrentThreadId = GetCurrentThreadId();
    v6 = HampLockTrackerId;
    dword_1800DC580 = CurrentThreadId;
    if ( HampLockTrackerId != -1 )
    {
      v7 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v7 |= 0x20uLL;
      ++v7[6];
    }
    RtlAcquireSRWLockShared((char *)a1 + 584);
    v8 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 71);
    if ( v8 )
    {
      v9 = 0LL;
      if ( RmHamHostReferenceUnsafe(v8) )
        v9 = *((_QWORD *)a1 + 71);
    }
    else
    {
      v9 = 0LL;
    }
    if ( HampLockTrackerId != -1 )
    {
      v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v11 = *v10;
      if ( (*v10 & 0x20) == 0 )
        __int2c();
      v12 = v10[6]-- == 1;
      if ( v12 )
        *v10 = v11 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared((char *)a1 + 584);
    dword_1800DC580 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v14 = *v13;
      if ( (*v13 & 1) == 0 )
        __int2c();
      v12 = v13[1]-- == 1;
      if ( v12 )
        *v13 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v15 = 0LL;
    if ( v9 )
      v15 = *(_QWORD *)(v9 + 576);
    v16 = PackageSuspendedNotificationForStoreLicense2(
            (char *)a1 + 96,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
            *((_QWORD *)a1 + 11) + 228LL,
            v15);
    if ( v16 >= 0 )
      v16 = 0;
    if ( v9 )
    {
      RmpAcquireGlobalLock();
      v12 = (*(_QWORD *)(v9 + 600))-- == 1LL;
      if ( v12 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v9 - 64));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v16;
}
