/*
 * XREFs of ?OnMessage@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18013A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::OnMessage(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 80LL),
         &IInputSpacePayloadProxy_Receive<BamoImpl::BamoInputSpacePayloadProxyImpl>::Type,
         &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_oKHvvrZKb975WEBSdgfSkNZBCbc_BamoGroup$a1339a61,
         437LL);
  v3 = v2;
  if ( v2 == -2018375668 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC994,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B2080CLL);
  }
  else if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC991,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v2,
      v5);
  }
  return v3;
}
