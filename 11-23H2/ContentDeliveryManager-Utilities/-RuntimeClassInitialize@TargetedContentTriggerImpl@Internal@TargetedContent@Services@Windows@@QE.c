/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x18008A298
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAW4TargetedContentKnownTrigger@2345@AEAPEAUHSTRING__@@AEAPEAU7@AEAPEAU7@AEAPEAU7@AEAPEAU7@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@AEAW4TargetedContentKnownTrigger@4567@AEAPEAUHSTRING__@@2222@Z @ 0x1800866C4 (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V123.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003FC10 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A62C (-InternalRelease@-$ComPtr@V-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@Targ.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180087398 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Serv_ea_180087398.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        ...)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdi
  void *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 result; // rax
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v15; // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  HSTRING v17; // [rsp+58h] [rbp+20h] BYREF
  va_list va1; // [rsp+58h] [rbp+20h]
  HSTRING v19; // [rsp+60h] [rbp+28h] BYREF
  va_list va2; // [rsp+60h] [rbp+28h]
  HSTRING v21; // [rsp+68h] [rbp+30h] BYREF
  va_list va3; // [rsp+68h] [rbp+30h]
  va_list va4; // [rsp+70h] [rbp+38h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v17 = va_arg(va2, HSTRING);
  va_copy(va3, va2);
  v19 = va_arg(va3, HSTRING);
  va_copy(va4, va3);
  v21 = va_arg(va4, HSTRING);
  try
  {
    if ( !a2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL,
        v13[0]);
    *(_DWORD *)(a1 + 72) = a2;
    v3 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 128), (HSTRING *)va);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v3,
        v13[0]);
    v4 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 136), (HSTRING *)va1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v4,
        v13[0]);
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 104), (HSTRING *)va2);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v5,
        v13[0]);
    v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 80), (HSTRING *)va3);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v6,
        v13[0]);
    v7 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 120), (HSTRING *)va4);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v7,
        v13[0]);
    v8 = (__int64 *)(a1 + 192);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>::InternalRelease((__int64 *)(a1 + 192));
    *(_QWORD *)(a1 + 192) = 0LL;
    v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)v13 = v9;
    v10 = 0LL;
    if ( v9 )
    {
      v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>((__int64)v9);
      *(_QWORD *)v13 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>((void **)v13);
    if ( v10 )
    {
      *v8 = v10;
      v11 = 0LL;
    }
    else
    {
      v11 = 2147942414LL;
    }
    if ( (int)v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)v11,
        v13[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           (const char *)v11);
  }
  return result;
}
