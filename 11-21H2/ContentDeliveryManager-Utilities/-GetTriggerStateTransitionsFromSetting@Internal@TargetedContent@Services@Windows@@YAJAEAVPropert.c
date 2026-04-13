/*
 * XREFs of ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AC338
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180050880.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180091EB8 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800AB584 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  HSTRING *v5; // r9
  const char *v6; // r9
  __int64 result; // rax
  int v8; // ebx
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  signed __int32 v15; // eax
  char *StringRawBuffer; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-38h]
  _QWORD v19[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int64 *v21; // [rsp+70h] [rbp+18h]
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
           (const wchar_t *)&string,
           v5) )
    {
      v21 = 0LL;
      v8 = 0;
      v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9
        && (v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>((__int64)v9),
            (v11 = v10) != 0) )
      {
        v21 = (volatile signed __int64 *)v10;
      }
      else
      {
        v8 = -2147024882;
        v11 = 0LL;
      }
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          338LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v8,
          v18);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 64);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 64), v12 + 1, v12);
            v13 = v12 == v14;
            v12 = v14;
            if ( !v13 )
              continue;
          }
          goto LABEL_17;
        }
        do
          v15 = *(_DWORD *)(2 * v12 + 0x10);
        while ( v15 != 0x7FFFFFFF
             && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v12 + 16), v15 + 1, v15) );
      }
LABEL_17:
      v19[0] = off_1801066A8;
      v19[1] = v11;
      v19[3] = v19;
      StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
      Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(StringRawBuffer, (__int64)v19);
      v17 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, volatile signed __int64 *))(*(_QWORD *)a2 + 328LL))(
              a2,
              v21);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          348LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v17,
          0);
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v21);
      WindowsDeleteString(string);
      result = 0LL;
    }
    else
    {
      WindowsDeleteString(string);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15F,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           v6);
  }
  return result;
}
