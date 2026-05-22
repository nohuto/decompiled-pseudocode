/*
 * XREFs of ?OnMessage@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18019F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::OnMessage(
        BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl *this,
        const void *a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 80LL),
         &ICompObjectDiagnosticsRootPrincipal_Receive<BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dcompwinrtnestedg_g_parameters_sdevGguFXwOtP5_Hldukq$D2_sg_BamoGroup$e6b704d7,
         41LL,
         this,
         a2,
         a3);
  v4 = v3;
  if ( v3 == -2018375668 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
      (const char *)0x87B2080CLL);
  }
  else if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      4560LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
      (const char *)(unsigned int)v3,
      v6);
  }
  return v4;
}
