/*
 * XREFs of ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009CF50
 * Callers:
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009F04C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C15C (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x18009AFDC (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18009B33C (--1RoVariant@@QEAA@XZ.c)
 *     ?get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z @ 0x1800A04E4 (-get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetCompositeValue(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3)
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rax
  int v8; // r15d
  _DWORD *v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  int v11; // edi
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rcx
  int v13; // eax
  int Type; // eax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v17; // rax
  _DWORD *v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-20h] BYREF
  int v22; // [rsp+38h] [rbp-18h]
  _DWORD *v23; // [rsp+40h] [rbp-10h] BYREF
  struct IInspectable *v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v28; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v28 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         a1,
         (__int64 *)&v28);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    v20 = 0;
    v7 = *v28;
    v23 = &v19;
    v24 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IInspectable **))(v7 + 48))(v28, a2, &v24);
    v9 = v23;
    RoVariant::RoVariant((RoVariant *)&v21, v24);
    v10 = v21;
    v21 = 0LL;
    v11 = v22;
    v22 = 0;
    RoVariant::~RoVariant((RoVariant *)&v21);
    v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v9;
    *(_QWORD *)v9 = v10;
    v21 = v12;
    v13 = v9[2];
    v9[2] = v11;
    v22 = v13;
    RoVariant::~RoVariant((RoVariant *)&v21);
    if ( v8 >= 0 )
    {
      v23 = v19;
      LODWORD(v24) = v20;
      Type = RoVariant::Accessor::get_Type((RoVariant::Accessor *)&v23, (enum Windows::Foundation::PropertyType *)&v26);
      v6 = Type;
      if ( Type >= 0 )
      {
        v27 = 0LL;
        if ( v26 == 13 )
        {
          v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
          v16 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v19;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          v6 = v16(v15, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v27);
          if ( v6 >= 0 )
          {
            v17 = v27;
            v27 = 0LL;
            *a3 = v17;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            RoVariant::~RoVariant((RoVariant *)&v19);
            v6 = 0;
            goto LABEL_13;
          }
        }
        else
        {
          v6 = -2147418113;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)Type);
      }
      RoVariant::~RoVariant((RoVariant *)&v19);
      goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v8);
    RoVariant::~RoVariant((RoVariant *)&v19);
    v6 = v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v5);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  return (unsigned int)v6;
}
