/*
 * XREFs of ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x1800AC514
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009B508 (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x18009AC78 (--0-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U-$Def.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AADA4 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggeredRegistration(__int64 *a1, __int64 *a2)
{
  int v4; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // r9
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+78h] [rbp+10h]

  *a2 = 0LL;
  v21 = 0LL;
  v4 = 0;
  v5 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>((__int64)v5),
        (v7 = v6) != 0) )
  {
    v21 = v6;
  }
  else
  {
    v4 = -2147024882;
    v7 = 0LL;
  }
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        432LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4,
        v17);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 64);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
          v9 = v8 == v10;
          v8 = v10;
          if ( !v9 )
            continue;
        }
        goto LABEL_14;
      }
      do
        v11 = *(_DWORD *)(2 * v8 + 0x10);
      while ( v11 != 0x7FFFFFFF
           && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v8 + 16), v11 + 1, v11) );
    }
LABEL_14:
    v18[0] = off_180106670;
    v18[1] = v7;
    v18[3] = v18;
    v17 = 0LL;
    v12 = a1[1];
    v13 = *a1;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v17, v13, v12);
    Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(
      (__int64 *)&v17,
      v14,
      (__int64)v18);
    *a2 = v21;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
    result = 0LL;
  }
  catch ( ... )
  {
    v22 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1BC,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            v15);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
    return v22;
  }
  return result;
}
