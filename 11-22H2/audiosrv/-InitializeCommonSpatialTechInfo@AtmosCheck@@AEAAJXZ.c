/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005DAD0
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D69C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(AtmosCheck *this)
{
  signed int v2; // ebp
  GUID *v3; // r14
  GUID *v4; // r15
  __int64 v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // ebx
  GUID v8; // xmm0
  unsigned int v9; // ecx
  char *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 96) )
  {
LABEL_5:
    v9 = 0;
    v10 = (char *)this + 273;
    do
    {
      *(_WORD *)(v10 - 1) = 0;
      v10 += 48;
      ++v9;
    }
    while ( v9 < 7 );
    return 0LL;
  }
  else
  {
    v2 = 0;
    v3 = &AtmosCheck::s_spatialSubtypes;
    v4 = (GUID *)((char *)this + 276);
    while ( 1 )
    {
      v5 = 48LL * v2;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v5 + 296),
        0LL);
      v6 = StringFromCLSID(&AtmosCheck::s_spatialSubtypes + v2, (LPOLESTR *)((char *)this + v5 + 296));
      v7 = v6;
      if ( v6 < 0 )
        break;
      v8 = *v3;
      ++v2;
      ++v3;
      *v4 = v8;
      v4 += 3;
      if ( (unsigned int)v2 >= 7 )
        goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC3,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
