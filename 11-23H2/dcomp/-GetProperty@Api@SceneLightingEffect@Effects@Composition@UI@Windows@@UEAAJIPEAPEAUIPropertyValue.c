/*
 * XREFs of ?GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue@Foundation@6@@Z @ 0x1800103F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@M@Z @ 0x18000B644 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM.c)
 *     ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics@Foundation@4@XZ @ 0x18000B6B8 (-GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BFI@AA @ 0x1800AF100 (--_9IPropertyValueStatics@Foundation@Windows@@$BFI@AA.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::GetProperty(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        int a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v8; // edi
  struct Windows::Foundation::IPropertyValueStatics *PropertyValueStatics; // rsi
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
             (__int64)this,
             a3);
  v4 = a2 - 1;
  if ( !v4 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
             (__int64)this,
             a3);
  v5 = v4 - 1;
  if ( !v5 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
             (__int64)this,
             a3);
  v6 = v5 - 1;
  if ( !v6 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
             (__int64)this,
             a3);
  if ( v6 != 1 )
    return 2147942487LL;
  v8 = *((_DWORD *)this + 10);
  *a3 = 0LL;
  v13 = 0LL;
  PropertyValueStatics = Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics();
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
  v10 =  Windows::Foundation::IPropertyValueStatics::`vcall'{88,{flat}}(PropertyValueStatics, v8, &v13);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\PropertyValueHelper.h",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v13);
  }
  else
  {
    v11 = 0;
    *a3 = v13;
  }
  return v11;
}
