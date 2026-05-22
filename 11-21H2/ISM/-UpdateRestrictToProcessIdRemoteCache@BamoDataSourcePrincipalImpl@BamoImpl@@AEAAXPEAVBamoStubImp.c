/*
 * XREFs of ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F899C
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F6B30 (-PushStateToProxyOnOutboundMessagesResumed@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessa.c)
 *     ?SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F7090 (-SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 *     ?UpdateRestrictToProcessIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F8A60 (-UpdateRestrictToProcessIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStu.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCache(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  unsigned int v2; // eax
  int v3; // [rsp+20h] [rbp-38h]
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v8, &v6, &v7);
    v4[0] = v6;
    v4[1] = v7;
    LOWORD(v3) = 10;
    v2 = CoreUICallSend(v8, v4, 2LL, 5LL);
    if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A89,
        (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v2,
        v3);
  }
}
