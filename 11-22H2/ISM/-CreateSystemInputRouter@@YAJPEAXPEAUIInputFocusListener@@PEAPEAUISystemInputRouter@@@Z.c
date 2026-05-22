/*
 * XREFs of ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004E820
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18002B3A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800581AC (IsGetMPCInputPostProcessorPresent.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop@@@details@wil@@QEAA_NXZ @ 0x1800684AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincip.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1801C5D80 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 */

__int64 __fastcall CreateSystemInputRouter(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop>::GetImpl'::`2'::impl) )
  {
    v7 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v14);
    v8 = v14;
    v9 = v7;
    if ( v14 )
      FreeTransientObjectSecurityDescriptor();
    if ( v9 >= 0 && (unsigned __int8)IsGetMPCInputPostProcessorPresent(v8) )
    {
      v10 = MPCInputRouter::Create(a1, a2, a3);
      if ( v10 < 0 )
      {
        v11 = 49LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    else
    {
      v10 = DWMInputRouter::Create(a1, a2, a3);
      if ( v10 < 0 )
      {
        v11 = 53LL;
        goto LABEL_8;
      }
    }
  }
  else if ( (unsigned __int8)IsGetMPCInputPostProcessorPresent(v6) )
  {
    v10 = MPCInputRouter::Create(a1, a2, a3);
    if ( v10 < 0 )
    {
      v11 = 60LL;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = DWMInputRouter::Create(a1, a2, a3);
    if ( v10 < 0 )
    {
      v11 = 64LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
