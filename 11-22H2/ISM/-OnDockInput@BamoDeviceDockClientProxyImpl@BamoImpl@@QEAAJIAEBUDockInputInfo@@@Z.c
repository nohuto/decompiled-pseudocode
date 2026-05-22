/*
 * XREFs of ?OnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIAEBUDockInputInfo@@@Z @ 0x1801ADECC
 * Callers:
 *     ?OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z @ 0x1801ADE60 (-OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::OnDockInput(
        BamoImpl::BamoDeviceDockClientProxyImpl *this,
        __int64 a2,
        const struct DockInputInfo *a3)
{
  __int64 v3; // r9
  char *v4; // rbx
  __int64 v7; // r9
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  struct IMessageCallSendHost *v17[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v18; // [rsp+50h] [rbp-29h]
  __int128 v19; // [rsp+60h] [rbp-19h]
  __int128 v20; // [rsp+70h] [rbp-9h]
  __int128 v21; // [rsp+80h] [rbp+7h]
  __int128 v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v25; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5BD1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v3);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v17, &v25, &v26);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v17[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v17[0] )
          v4 = (char *)v17[0] - 16;
        v4[72] = 1;
      }
      v12 = *(_OWORD *)a3;
      v13 = *((_OWORD *)a3 + 1);
      v17[0] = (struct IMessageCallSendHost *)v25;
      v18 = v12;
      v14 = *((_OWORD *)a3 + 2);
      v17[1] = (struct IMessageCallSendHost *)v26;
      v19 = v13;
      v15 = *((_OWORD *)a3 + 3);
      v20 = v14;
      v16 = *((_OWORD *)a3 + 4);
      v21 = v15;
      *(_QWORD *)&v15 = *((_QWORD *)a3 + 10);
      v22 = v16;
      v23 = v15;
      return CoreUICallSend(v11, v17, 2LL, 25LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BE1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
