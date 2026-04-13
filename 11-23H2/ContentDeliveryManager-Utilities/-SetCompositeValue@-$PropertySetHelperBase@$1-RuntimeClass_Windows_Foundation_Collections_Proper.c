/*
 * XREFs of ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E370
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E5E0 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009EFFC (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C10C (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x18009AF8C (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18009B2EC (--1RoVariant@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 *v12; // rsi
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  int v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  int v24; // [rsp+50h] [rbp-20h]
  __int64 *v25; // [rsp+58h] [rbp-18h]
  struct IInspectable *v26; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v28; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+48h] BYREF

  v20 = 0LL;
  v6 = **a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v7 = v6(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v22 = 0;
    v9 = *(__int64 **)(a1 + 8);
    v10 = *v9;
    v25 = &v21;
    v26 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IInspectable **))(v10 + 152))(v9, v20, &v26);
    v12 = v25;
    RoVariant::RoVariant((RoVariant *)&v23, v26);
    v13 = v23;
    v23 = 0LL;
    v14 = v24;
    v24 = 0;
    RoVariant::~RoVariant((RoVariant *)&v23);
    v15 = *v12;
    *v12 = v13;
    v23 = v15;
    v16 = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = v14;
    v24 = v16;
    RoVariant::~RoVariant((RoVariant *)&v23);
    if ( v11 >= 0 )
    {
      v29 = 0LL;
      v17 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
              &v29);
      v8 = v17;
      if ( v17 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v29 + 80LL))(v29, a2, v21, &v28);
        v8 = v17;
        if ( v17 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
          RoVariant::~RoVariant((RoVariant *)&v21);
          v8 = 0;
          goto LABEL_11;
        }
        v18 = 257LL;
      }
      else
      {
        v18 = 255LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      RoVariant::~RoVariant((RoVariant *)&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v11);
      RoVariant::~RoVariant((RoVariant *)&v21);
      v8 = v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v8;
}
