/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18009E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18009CE50 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        RTL_SRWLOCK *a1,
        void **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 Ptr_low; // r8
  signed __int32 Ptr; // ecx
  int v8; // ebx
  PVOID v9; // rcx
  signed __int32 v11; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v13; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  Ptr_low = LODWORD(a1[-15].Ptr);
  v12 = -2;
  _InterlockedCompareExchange(&v12, Ptr_low, -2);
  if ( v12 != 3 )
  {
    if ( v12 != 1 )
    {
      v8 = -2147483634;
      RoOriginateError(2147483662LL, 0LL, Ptr_low, a4);
      return (unsigned int)v8;
    }
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
                           a1 + 13,
                           a2);
  }
  Ptr = (signed __int32)a1[-15].Ptr;
  v13 = -2;
  _InterlockedCompareExchange(&v13, Ptr, -2);
  if ( v13 == 3 )
  {
    _InterlockedCompareExchange(&v11, HIDWORD(a1[-15].Ptr), v11);
    v9 = a1[-16].Ptr;
    if ( v9 )
      SetRestrictedErrorInfo(v9);
    v8 = v11;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
                           a1 + 13,
                           a2);
  return (unsigned int)v8;
}
