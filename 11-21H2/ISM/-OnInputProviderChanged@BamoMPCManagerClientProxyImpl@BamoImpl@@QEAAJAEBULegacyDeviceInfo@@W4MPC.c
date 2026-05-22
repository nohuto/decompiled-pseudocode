/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18015C07C
 * Callers:
 *     ?OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18015C010 (-OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnInputProviderChanged(
        __int64 a1,
        const void *a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  struct IMessageCallSendHost *v11[2]; // [rsp+40h] [rbp-648h] BYREF
  _BYTE v12[1592]; // [rsp+50h] [rbp-638h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]
  unsigned int v14; // [rsp+690h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+6A8h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      12113LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F55,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
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
          v4 = (char *)v11[0] - 16;
        v4[72] = 1;
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
        (void *)0x2F5C,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
