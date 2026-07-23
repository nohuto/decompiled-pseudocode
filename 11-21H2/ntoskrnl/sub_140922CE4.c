/*
 * XREFs of sub_140922CE4 @ 0x140922CE4
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409B5F30 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140922CE4(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49670, 0LL);
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v5 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v5 != a2) )
    __fastfail(3u);
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49670, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49670);
  sub_1402AFC00((ULONG_PTR)&stru_140C49670);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ExWaitForRundownProtectionRelease(a2 + 6);
  ExRundownCompleted(a2 + 6);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C49688 || a2 >= (struct _EX_RUNDOWN_REF *)&NewDescriptor )
    ExFreePoolWithTag(a2, 0);
}
