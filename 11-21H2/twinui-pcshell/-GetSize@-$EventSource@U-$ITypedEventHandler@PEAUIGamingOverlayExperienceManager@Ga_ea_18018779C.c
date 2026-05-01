/*
 * XREFs of ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x18018779C
 * Callers:
 *     ?remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180187710 (-remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18033B0E4 (-WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033CA40 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize(
        RTL_SRWLOCK *a1)
{
  __int64 v1; // rbx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !a1->Ptr )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v4, a1 + 1);
  if ( a1->Ptr )
    v1 = (__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
  return v1;
}
