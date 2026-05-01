/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x18043D690
 * Callers:
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18043E254 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x18043DA20 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@.c)
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x18043F71C (-RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection *>(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification **a1,
        struct CPeopleBarFlyoutExperienceManager::DebounceDetection **a2)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v4; // rax
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v5; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v6; // rdi
  int v7; // esi
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)operator new(
                                                                               0x40uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>(v4);
    *(_QWORD *)v5 = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable';
    *((_QWORD *)v5 + 1) = &CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `IImmersiveRawInputMouseNotification'};
    *((_QWORD *)v5 + 2) = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_DWORD *)v5 + 14) = 0;
    v9 = v6;
    v10 = 0LL;
    v7 = CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(v6, *a2);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
