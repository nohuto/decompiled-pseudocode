/*
 * XREFs of ?OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18035A500
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FEA8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1803564B0 (--$InvokeDelegates@V_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall CortanaExperienceManagerNotification::OnNotifyRelaunch(__int64 a1, __int128 *a2)
{
  RTL_SRWLOCK *result; // rax
  __int64 *v3; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int32 *v6; // [rsp+50h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+68h] [rbp+28h] BYREF

  result = *(RTL_SRWLOCK **)(a1 + 48);
  if ( result )
  {
    v3 = (__int64 *)&result[48];
    v5 = *a2;
    v7 = result;
    v4[0] = &v7;
    v4[1] = &v5;
    v6 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, result + 49);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v6, v3);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
    if ( v6 )
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        v4,
        (__int64)v6,
        v3);
    return (RTL_SRWLOCK *)Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v6);
  }
  return result;
}
