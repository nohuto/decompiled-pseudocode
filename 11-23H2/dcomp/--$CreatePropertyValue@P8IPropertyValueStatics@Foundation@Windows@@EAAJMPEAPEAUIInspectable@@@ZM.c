/*
 * XREFs of ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@M@Z @ 0x18000B644
 * Callers:
 *     ?GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue@Foundation@6@@Z @ 0x1800103F0 (-GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue.c)
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics@Foundation@4@XZ @ 0x18000B6B8 (-GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA @ 0x1800AF120 (--_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  struct Windows::Foundation::IPropertyValueStatics *PropertyValueStatics; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  PropertyValueStatics = Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics();
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v5 =  Windows::Foundation::IPropertyValueStatics::`vcall'{112,{flat}}(PropertyValueStatics, v3, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\PropertyValueHelper.h",
      (const char *)(unsigned int)v5,
      v8);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v10);
    return v6;
  }
  else
  {
    *a2 = v10;
    return 0LL;
  }
}
