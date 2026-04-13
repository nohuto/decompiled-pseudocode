/*
 * XREFs of ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800962F4
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18004C6DC (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180095C24 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
        int a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl **a7)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v12; // rax
  int v13; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v14; // rbx
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v18; // [rsp+90h] [rbp+38h]

  *a7 = 0LL;
  if ( WindowsIsStringEmpty(a2) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      312LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v16);
  if ( WindowsIsStringEmpty(a3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      313LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v16);
  if ( WindowsIsStringEmpty(a4) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      314LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v16);
  v18 = 0LL;
  v12 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                      0xD0uLL,
                                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v12);
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
            (__int64)v14,
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 8LL))(v14);
      v18 = v14;
      if ( v14 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = 0;
    }
    else if ( v14 )
    {
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      317LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v13,
      v16);
  *a7 = v18;
  return 0LL;
}
