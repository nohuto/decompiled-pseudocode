/*
 * XREFs of ?UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019EE98
 * Callers:
 *     ?PushStateToProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019D70C (-PushStateToProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 *     ?UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019EF64 (-UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCache(
        BamoImpl::BamoDockableDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v3; // eax
  __int128 v4; // xmm0
  int v5; // [rsp+20h] [rbp-48h]
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v11, &v9, &v10);
    if ( v3 < 0
      || (v4 = *((_OWORD *)this + 3),
          v6[0] = v9,
          v6[1] = v10,
          LOWORD(v5) = 1,
          v7 = v4,
          v3 = CoreUICallSend(v11, v6, 2LL, 28LL),
          v3 < 0) )
    {
      if ( v3 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6177,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
}
