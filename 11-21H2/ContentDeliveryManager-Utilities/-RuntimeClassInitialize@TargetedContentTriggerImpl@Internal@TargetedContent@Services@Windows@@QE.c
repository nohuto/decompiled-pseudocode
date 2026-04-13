/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180095C24
 * Callers:
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800962F4 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180050880.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180091EB8 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING *v10; // rdi
  HRESULT v11; // eax
  HSTRING *v12; // rdi
  HRESULT v13; // eax
  HSTRING *v14; // rdi
  HRESULT v15; // eax
  HSTRING *v16; // rdi
  HRESULT v17; // eax
  HSTRING *v18; // rdi
  HRESULT v19; // eax
  volatile signed __int64 *v20; // rcx
  int v21; // edi
  void *v22; // rax
  __int64 v23; // rax
  const char *v25; // r9
  __int64 *v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  int v28; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v30; // [rsp+38h] [rbp+10h]

  if ( !a2 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        28LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL,
        v28);
    }
    catch ( ... )
    {
      v26 = &v27;
      *((_DWORD *)v26 + 14) = wil::details::in1diag3::Return_CaughtException(
                                (wil::details::in1diag3 *)v26[5],
                                (void *)0x28,
                                (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                                v25);
      return v30;
    }
  }
  *(_DWORD *)(a1 + 72) = a2;
  v10 = (HSTRING *)(a1 + 128);
  v11 = 0;
  if ( !a3 || a3 != *v10 )
  {
    WindowsDeleteString(*v10);
    *v10 = 0LL;
    v11 = WindowsDuplicateString(a3, (HSTRING *)(a1 + 128));
  }
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      31LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v11,
      v28);
  v12 = (HSTRING *)(a1 + 136);
  v13 = 0;
  if ( !a4 || a4 != *v12 )
  {
    WindowsDeleteString(*v12);
    *v12 = 0LL;
    v13 = WindowsDuplicateString(a4, (HSTRING *)(a1 + 136));
  }
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      32LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v13,
      v28);
  v14 = (HSTRING *)(a1 + 104);
  v15 = 0;
  if ( !string || string != *v14 )
  {
    WindowsDeleteString(*v14);
    *v14 = 0LL;
    v15 = WindowsDuplicateString(string, (HSTRING *)(a1 + 104));
  }
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      33LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v15,
      v28);
  v16 = (HSTRING *)(a1 + 80);
  v17 = 0;
  if ( !a6 || a6 != *v16 )
  {
    WindowsDeleteString(*v16);
    *v16 = 0LL;
    v17 = WindowsDuplicateString(a6, (HSTRING *)(a1 + 80));
  }
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      34LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v17,
      v28);
  v18 = (HSTRING *)(a1 + 120);
  v19 = 0;
  if ( !a7 || a7 != *v18 )
  {
    WindowsDeleteString(*v18);
    *v18 = 0LL;
    v19 = WindowsDuplicateString(a7, (HSTRING *)(a1 + 120));
  }
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      35LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v19,
      v28);
  v20 = *(volatile signed __int64 **)(a1 + 192);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 192) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v20);
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  v21 = 0;
  v22 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v22
    && (v23 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>((__int64)v22)) != 0 )
  {
    *(_QWORD *)(a1 + 192) = v23;
  }
  else
  {
    v21 = -2147024882;
  }
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v21,
      v28);
  return 0LL;
}
