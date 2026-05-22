/*
 * XREFs of ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJEPEAPEAUIInspectable@@@Z_N@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@_N@Z @ 0x18018B60C
 * Callers:
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics@Foundation@4@XZ @ 0x18000B6B8 (-GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x1800B1110 (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned char,IInspectable * *),bool>(
        __int64 a1,
        _QWORD *a2)
{
  struct Windows::Foundation::IPropertyValueStatics *PropertyValueStatics; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  PropertyValueStatics = Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics();
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v4 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}((__int64)PropertyValueStatics);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\PropertyValueHelper.h",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v8);
    return v5;
  }
}
