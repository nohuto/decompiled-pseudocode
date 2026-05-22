/*
 * XREFs of ?UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18015F7E0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18015D3A0 (-PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 *     ?SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18015EF10 (-SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost.c)
 *     ?UpdateInputSpaceRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18015F8A4 (-UpdateInputSpaceRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180008434 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCache(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-40h]
  _QWORD v4[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v6; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v7; // [rsp+90h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+98h] [rbp+38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v8, &v6, &v7);
    if ( v2 < 0 || (v4[0] = v6, v4[1] = v7, LOWORD(v3) = 0, v2 = CoreUICallSend(v8, v4, 2LL, 58LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC8A9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v2,
          v3);
    }
  }
}
