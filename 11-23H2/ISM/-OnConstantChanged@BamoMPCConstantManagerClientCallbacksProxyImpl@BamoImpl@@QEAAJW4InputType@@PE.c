/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18017A6B4
 * Callers:
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18017A630 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROP.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::OnConstantChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int128 *a5)
{
  __int64 v7; // r10
  int v9; // eax
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  unsigned int v17; // [rsp+50h] [rbp-31h] BYREF
  struct IMessageCallSendHost *v18[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  __int128 v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  unsigned int v24; // [rsp+E0h] [rbp+5Fh] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28E8,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F1,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v18,
           &v24,
           &v17);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v18[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v12 = (char *)v18[0] - 16;
        if ( !v18[0] )
          v12 = 0LL;
        v12[72] = 1;
      }
      v13 = *a5;
      v14 = *((_QWORD *)a5 + 2);
      v18[0] = (struct IMessageCallSendHost *)v24;
      v18[1] = (struct IMessageCallSendHost *)v17;
      v19 = v13;
      v15 = *(_OWORD *)a4;
      v20 = v14;
      v16 = *((_QWORD *)a4 + 2);
      v21 = v15;
      v22 = v16;
      return CoreUICallSend(v11, v18, 2LL, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28F8,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
