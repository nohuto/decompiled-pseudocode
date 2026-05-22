/*
 * XREFs of ?UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180192640
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801917E0 (-PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationManagerPrincipalImpl@BamoImpl.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCache(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-38h]
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v8, &v6, &v7);
    if ( v2 < 0 || (v4[0] = v6, v4[1] = v7, LOWORD(v3) = 0, v2 = CoreUICallSend(v8, v4, 2LL, 20LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A74,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v2,
          v3);
    }
  }
}
