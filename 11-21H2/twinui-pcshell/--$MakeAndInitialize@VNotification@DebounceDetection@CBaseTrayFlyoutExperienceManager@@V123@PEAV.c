/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x180392A80
 * Callers:
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803938EC (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180367AA0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@.c)
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1803967C0 (-RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection *>(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification **a1,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection **a2)
{
  CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *v4; // rax
  CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *v5; // rbx
  CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *v6; // rdi
  int v7; // esi
  CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *)operator new(
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
    v7 = CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(v6, *a2);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *))(*(_QWORD *)v6 + 8LL))(v6);
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
