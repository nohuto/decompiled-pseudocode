/*
 * XREFs of ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015563C
 * Callers:
 *     _lambda_927672e9d3fcd1dcc3c28ac2b7f193c2_::operator() @ 0x180153278 (_lambda_927672e9d3fcd1dcc3c28ac2b7f193c2_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180155538 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x1800414A0 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180041AB8 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180041AE8 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015375C (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180153CC8 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18015595C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForEndpoint(AtmosCheck *this, unsigned __int16 *a2, bool *a3)
{
  int v6; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int updated; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v15; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = AtmosCheck::BeginAppSvcCall(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5DE,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v15);
  v7 = v15;
  if ( !v15 )
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 1510LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v9);
    goto LABEL_9;
  }
  AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v15);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 0, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 1, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 2, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 3, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 4, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 5, v7, a3);
  AtmosCheck::PerformLicenseCheckHelper(this, a2, 6, v7, a3);
  updated = AtmosCheck::UpdateEndpointUnderLock((__int64)this, a2, (__int64 *)&v15);
  v8 = updated;
  if ( updated < 0 )
  {
    v9 = (unsigned int)updated;
    v10 = 1525LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_9:
  if ( v7 )
    operator delete(v7);
  v12 = AtmosCheck::EndAppSvcCall(this);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E2,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v12);
  return v8;
}
