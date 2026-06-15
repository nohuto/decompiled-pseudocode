/*
 * XREFs of ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C7C4
 * Callers:
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18015CED8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x18005DCFC (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18005E094 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC604 (--1-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX0@Z@wil@@@wi.c)
 *     wil::details::lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___::_lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___ @ 0x180159E38 (wil--details--lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___--_lambda_call__lambda_b3fa.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015A89C (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015AE40 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18015C2E8 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18015C92C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015E0AC (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  int updated; // eax
  int v16; // eax
  AtmosCheck *v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v20; // [rsp+60h] [rbp+8h] BYREF

  *a4 = 0;
  v8 = AtmosCheck::BeginAppSvcCall(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x606,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v8);
  v17 = this;
  v18 = 1;
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v20);
  if ( !v20 )
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 1550LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v10);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)&v20);
    wil::details::lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___::_lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___((__int64)&v17);
    return v9;
  }
  AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v20);
  v12 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a3);
  v13 = v12;
  if ( v12 == -1 )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 1556LL;
    goto LABEL_10;
  }
  AtmosCheck::PerformLicenseCheckHelper(this, a2, v12, v20, a4);
  if ( *a4 )
  {
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, v13, v20);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = (unsigned int)updated;
      v11 = 1565LL;
      goto LABEL_10;
    }
  }
  operator delete(v20);
  v16 = AtmosCheck::EndAppSvcCall(this);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60A,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v16);
  return 0LL;
}
