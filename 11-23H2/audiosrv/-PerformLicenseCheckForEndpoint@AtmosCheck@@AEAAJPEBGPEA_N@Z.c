/*
 * XREFs of ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C5EC
 * Callers:
 *     _lambda_573cde38f26cc631e17f9a09e8537aa1_::operator() @ 0x18015A3C0 (_lambda_573cde38f26cc631e17f9a09e8537aa1_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18015C4C8 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x18005DCFC (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18005E094 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC604 (--1-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX0@Z@wil@@@wi.c)
 *     wil::details::lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___::_lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___ @ 0x180159E78 (wil--details--lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___--_lambda_call__lambda_bc14.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015A89C (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015AE40 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18015C92C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18015E028 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForEndpoint(AtmosCheck *this, unsigned __int16 *a2, bool *a3)
{
  int v6; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  int updated; // eax
  int v13; // eax
  AtmosCheck *v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v17; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = AtmosCheck::BeginAppSvcCall(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5DC,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
  v14 = this;
  v15 = 1;
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v17);
  v7 = v17;
  if ( !v17 )
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 1508LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v9);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)&v17);
    wil::details::lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___::_lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___((__int64)&v14);
    return v8;
  }
  AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v17);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 0, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 1, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 2, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 3, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 4, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 5, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 6, v7, a3);
  updated = AtmosCheck::UpdateEndpointUnderLock(this, a2);
  v8 = updated;
  if ( updated < 0 )
  {
    v9 = (unsigned int)updated;
    v10 = 1523LL;
    goto LABEL_7;
  }
  operator delete(v7);
  v13 = AtmosCheck::EndAppSvcCall(this);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E0,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v13);
  return 0LL;
}
