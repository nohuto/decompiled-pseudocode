/*
 * XREFs of ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AAEBC
 * Callers:
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800ADB24 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051E10 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800A8E5C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetCompositeValue(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  char *v18; // [rsp+28h] [rbp-18h]
  __int64 *v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v23 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         a1,
         (__int64 *)&v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v5);
    v7 = (__int64)v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  v17 = 0LL;
  LODWORD(v18) = 0;
  v8 = *v23;
  v19 = &v17;
  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 48))(v23, a2, &v20);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v19);
  if ( (v6 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v6);
    if ( v17 && (((_DWORD)v18 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
    v9 = (__int64)v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v6;
  }
  v6 = (unsigned int)v18;
  if ( (int)v18 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v6);
    if ( v17 && (((_DWORD)v18 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
    v10 = (__int64)v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v6;
  }
  if ( !(_DWORD)v18 )
  {
    v11 = 0;
    goto LABEL_26;
  }
  if ( (_DWORD)v18 == 1 || (_DWORD)v18 == 3 )
  {
    v11 = 13;
LABEL_26:
    v22 = v11;
    goto LABEL_27;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 48LL))(v17, &v22);
  if ( (v6 & 0x80000000) != 0 )
    goto LABEL_17;
  v11 = v22;
LABEL_27:
  v24 = 0LL;
  if ( v11 != 13 )
  {
    v6 = -2147418113;
    goto LABEL_36;
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
         v17,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v24);
  if ( (v6 & 0x80000000) != 0 )
  {
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v6);
    v15 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v17 && (((_DWORD)v18 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
    v16 = (__int64)v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v6;
  }
  v12 = v24;
  v24 = 0LL;
  *a3 = v12;
  if ( v17 && (((_DWORD)v18 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
  v13 = (__int64)v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
