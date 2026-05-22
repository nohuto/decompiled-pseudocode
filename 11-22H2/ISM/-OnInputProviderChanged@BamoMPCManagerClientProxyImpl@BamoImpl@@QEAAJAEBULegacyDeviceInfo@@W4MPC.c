/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18018913C
 * Callers:
 *     ?OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z @ 0x1801890D0 (-OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnInputProviderChanged(__int64 a1, const void *a2)
{
  __int64 v2; // r9
  char *v3; // rbx
  __int64 v6; // r9
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  struct IMessageCallSendHost *v11[2]; // [rsp+40h] [rbp-648h] BYREF
  _BYTE v12[1592]; // [rsp+50h] [rbp-638h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]
  unsigned int v14; // [rsp+690h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+6A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  if ( *(_DWORD *)(v2 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3093,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)v2);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309C,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v11,
           &v14,
           &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v11[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v11[0] )
          v3 = (char *)v11[0] - 16;
        v3[72] = 1;
      }
      memcpy_0(v12, a2, 0x60CuLL);
      v11[0] = (struct IMessageCallSendHost *)v14;
      v11[1] = (struct IMessageCallSendHost *)v15;
      return CoreUICallSend(v10, v11, 2LL, 5LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30A3,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
