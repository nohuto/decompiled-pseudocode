/*
 * XREFs of ??$InvokeAll@PEAVCortanaSharedExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@J@Z @ 0x18035606C
 * Callers:
 *     ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x18035DE70 (-_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FEA8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_00e6cb6656eddfd32f7e15e711c38956_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_00e6cb6656eddfd32f7e15e711c38956_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180356210 (--$InvokeDelegates@V_lambda_00e6cb6656eddfd32f7e15e711c38956_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,long>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  int v9; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = a3;
  v8 = a2;
  v6[0] = &v8;
  v6[1] = &v9;
  v4 = 0;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v7, (__int64 *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  if ( v7 )
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_00e6cb6656eddfd32f7e15e711c38956_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>>(
           v6,
           v7,
           a1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v7);
  return v4;
}
