/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18015B474
 * Callers:
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18015B3F0 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROP.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::OnConstantChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int128 *a5)
{
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  unsigned int v16; // [rsp+50h] [rbp-31h] BYREF
  struct IMessageCallSendHost *v17[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int128 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  unsigned int v23; // [rsp+E0h] [rbp+5Fh] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      10318LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2852,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v17,
           &v23,
           &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v17[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v11 = (char *)v17[0] - 16;
        if ( !v17[0] )
          v11 = 0LL;
        v11[72] = 1;
      }
      v12 = *a5;
      v13 = *((_QWORD *)a5 + 2);
      v17[0] = (struct IMessageCallSendHost *)v23;
      v17[1] = (struct IMessageCallSendHost *)v16;
      v18 = v12;
      v14 = *(_OWORD *)a4;
      v19 = v13;
      v15 = *((_QWORD *)a4 + 2);
      v20 = v14;
      v21 = v15;
      return CoreUICallSend(v10, v17, 2LL, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2859,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
