/*
 * XREFs of ?OnMessage@BamoAsyncHRESULTPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18016FD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncHRESULTPrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncHRESULTPrincipalImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 80LL),
         &IAsyncHRESULTPrincipal_Receive<BamoImpl::BamoAsyncHRESULTPrincipalImpl>::Type,
         &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_JDDlkUxZTIoeRRRsFd6I6MjXKbU_BamoGroup$21dcf589,
         3LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 != -2018375668 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x529,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCAsyncHelpers.bamo.h",
        (const char *)(unsigned int)v2,
        v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52C,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCAsyncHelpers.bamo.h",
      (const char *)0x87B2080CLL);
  }
  return v3;
}
