/*
 * XREFs of ?OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18045E110
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18045CE70 (--$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

RTL_SRWLOCK *__fastcall SearchAppExperienceManagerNotification::OnNotifyRelaunch(__int64 a1, __int128 *a2)
{
  RTL_SRWLOCK *result; // rax
  volatile int *v3; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int32 *v6; // [rsp+50h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+68h] [rbp+28h] BYREF

  result = *(RTL_SRWLOCK **)(a1 + 40);
  if ( result )
  {
    v3 = (volatile int *)&result[48];
    v5 = *a2;
    v8 = result;
    v6 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, result + 49);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v6, v3);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
    if ( v6 )
    {
      v4[0] = &v8;
      v4[1] = &v5;
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_721e5e573830a3eafdff38e0e874721f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        v4,
        v6,
        (RTL_SRWLOCK *)v3);
    }
    return (RTL_SRWLOCK *)Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v6);
  }
  return result;
}
