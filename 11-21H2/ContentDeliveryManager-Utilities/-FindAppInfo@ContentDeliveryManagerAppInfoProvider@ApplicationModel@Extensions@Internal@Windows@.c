/*
 * XREFs of ?FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@25@@Z @ 0x1800D8410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008EF10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_18008EF10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8960 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@A.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x1800D96E0 (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::FindAppInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  const WCHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct Windows::ApplicationModel::IAppInfo *v11; // r14
  _QWORD *v12; // rax
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *v13; // rbx
  int Interface; // edi
  _QWORD *v15; // rdi
  HSTRING v16; // rdx
  __int64 *v18; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::ApplicationModel::IAppInfo *v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy!App", -1, 1) != 2 )
    return 2147943568LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.Internal.Extensions.ApplicationModel.UniversalAppInfoProvider",
         0x45u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x1800D87D0LL);
  }
  v18 = 0LL;
  v7 = RoActivateInstance(string, &v20);
  if ( v7 < 0 )
    goto LABEL_32;
  if ( *(_QWORD *)&GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v8 = v20;
    v18 = v20;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v20)(
         v20,
         &GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67,
         &v18);
  (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  if ( v7 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)v7);
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    return (unsigned int)v7;
  }
  v8 = v18;
LABEL_9:
  v9 = *v8;
  v19 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, struct Windows::ApplicationModel::IAppInfo **))(v9 + 48))(
          v8,
          a2,
          &v19);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)v10);
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    return (unsigned int)v7;
  }
  v11 = v19;
  *a3 = 0LL;
  v12 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *)v12;
  if ( !v12 )
  {
    Interface = -2147024882;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)Interface);
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    return (unsigned int)Interface;
  }
  v15 = v12 + 3;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v12 + 3));
  *((_QWORD *)v13 + 8) = 1LL;
  *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::IAppInfo'};
  *((_QWORD *)v13 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v13 + 2) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v15 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v13 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::`vftable'{for `Windows::ApplicationModel::IAppInfo'};
  *((_QWORD *)v13 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v13 + 2) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v15 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v13 + 9) = 0LL;
  *((_QWORD *)v13 + 10) = 0LL;
  Interface = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize(
                v13,
                v16,
                v11);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v13,
                  &GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1,
                  a3);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v13);
  if ( Interface < 0 )
    goto LABEL_22;
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
  return 0LL;
}
