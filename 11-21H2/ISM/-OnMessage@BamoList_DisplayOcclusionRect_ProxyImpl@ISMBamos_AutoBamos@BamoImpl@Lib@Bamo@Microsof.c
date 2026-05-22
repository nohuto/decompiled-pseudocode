/*
 * XREFs of ?OnMessage@BamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z @ 0x18012F320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl::OnMessage(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 80LL),
         &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>::Type,
         &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_HKHYXjix3HXNPEixL_Vmp$ExqLM_BamoGroup$8466285,
         396LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 != -2018375668 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF88B,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v2,
        v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF88E,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B2080CLL);
  }
  return v3;
}
