/*
 * XREFs of ?GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E9A8
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x14002B690 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x14002E59C (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x14002E75C (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E808 (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140050438 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14005D104 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetEffectPackFxPropertyStore(struct _GUID *a1, struct IPropertyStore **a2)
{
  int EffectPackDevNodeId; // eax
  unsigned int v5; // ebx
  int EffectPackDevNodeRegistryRoot; // eax
  __int64 v7; // rdx
  struct _GUID v9; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HKEY phkDevice; // [rsp+50h] [rbp+20h] BYREF
  DEVINSTID_W pDeviceID; // [rsp+58h] [rbp+28h] BYREF

  *a2 = 0LL;
  pDeviceID = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&pDeviceID,
    0LL);
  v9 = *a1;
  EffectPackDevNodeId = GetEffectPackDevNodeId(&v9, &pDeviceID);
  v5 = EffectPackDevNodeId;
  if ( EffectPackDevNodeId >= 0 )
  {
    phkDevice = 0LL;
    EffectPackDevNodeRegistryRoot = GetEffectPackDevNodeRegistryRoot(pDeviceID, &phkDevice);
    v5 = EffectPackDevNodeRegistryRoot;
    if ( EffectPackDevNodeRegistryRoot >= 0 )
    {
      v9 = *a1;
      EffectPackDevNodeRegistryRoot = GetEffectPackFxPropertyStore(phkDevice, &v9, a2);
      v5 = EffectPackDevNodeRegistryRoot;
      if ( EffectPackDevNodeRegistryRoot >= 0 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkDevice);
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 102LL;
    }
    else
    {
      v7 = 100LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)EffectPackDevNodeRegistryRoot,
      v9.Data1);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkDevice);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)EffectPackDevNodeId,
      v9.Data1);
  }
LABEL_9:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pDeviceID);
  return v5;
}
