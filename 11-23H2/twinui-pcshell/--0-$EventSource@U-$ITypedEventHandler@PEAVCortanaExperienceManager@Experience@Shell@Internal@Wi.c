/*
 * XREFs of ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A167C
 * Callers:
 *     ??0UwpWindowWrapperBase@@QEAA@XZ @ 0x1800A144C (--0UwpWindowWrapperBase@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180134BDC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180134E94 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x180135120 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180135958 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x180135C88 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0UndockedSearchAppExperienceManager@@QEAA@XZ @ 0x1801713B4 (--0UndockedSearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x1804298D8 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x18045D64C (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0WindowWrapperBase@@QEAA@XZ @ 0x1804DB284 (--0WindowWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
