/*
 * XREFs of SmEtwEnableCallback @ 0x1408434E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     SmEtwEnabled @ 0x140342DF4 (SmEtwEnabled.c)
 *     SmKmStoreReferenceEx @ 0x140344C68 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140344CA4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CD180 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreChange @ 0x1409D8824 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D8934 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 *i; // rbx
  unsigned int j; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned int k; // edi
  struct _EX_RUNDOWN_REF *v11; // rax
  unsigned __int64 v12; // rax

  if ( ControlCode <= 1 && (dword_140C6B3EC = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C6B3D8, 0LL);
    for ( i = (__int64 *)qword_140C6B3C8; i != &qword_140C6B3C8; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v8 = SmKmStoreReferenceEx((__int64)(i - 245), j, v5);
        v9 = v8;
        if ( v8 )
        {
          SmKmEtwLogStoreStats(&qword_140C6B3E0, v8);
          SmKmEtwLogStoreChange(&qword_140C6B3E0, v9, SmEventStoreRundown);
          v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)(i - 245), j & 0x3FF);
          ExReleaseRundownProtection_0(v11 + 1);
        }
      }
      if ( SmEtwEnabled(3) )
      {
        for ( k = 0; k < 0x400; ++k )
        {
          v12 = SmKmStoreReferenceEx((__int64)(i - 245), k, v5);
          if ( v12 )
            SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)(i - 245), v12);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B3D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B3D8);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B3D8);
    KeLeaveCriticalRegion();
  }
}
