/*
 * XREFs of ?UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B2808
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B10C0 (-PushStateToProxyOnOutboundMessagesResumed@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessa.c)
 *     ?SendMaterializeProxy@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B18D0 (-SendMaterializeProxy@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 *     ?UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B28E8 (-UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800A4AD8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCache(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-48h]
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 5);
    if ( v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v3,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
    v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v10, &v8, &v9);
    if ( v4 < 0 || (v6[0] = v8, v6[1] = v9, LOWORD(v5) = 0, v4 = CoreUICallSend(v10, v6, 2LL, 4LL), v4 < 0) )
    {
      if ( v4 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B16,
          (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
          (const char *)(unsigned int)v4,
          v5);
    }
  }
}
