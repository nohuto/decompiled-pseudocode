/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801227A0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18011FDD0 (-PushStateToProxyOnOutboundMessagesResumed@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessa.c)
 *     ?SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180120970 (-SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012289C (-UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micr.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180008434 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-48h]
  struct IMessageCallSendHost *v5; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v5, &v8, &v9);
    if ( v3 < 0
      || (v10 = *((_QWORD *)this + 5),
          v6[0] = v8,
          v6[1] = v9,
          LOWORD(v4) = 9,
          v3 = CoreUICallSend(v5, v6, 2LL, 5LL),
          v3 < 0) )
    {
      if ( v3 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x339A,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v3,
          v4);
    }
  }
}
