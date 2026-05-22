/*
 * XREFs of ?OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x18014770C
 * Callers:
 *     ?OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1801476B0 (-OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@In.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputObserverClientProxyImpl::OnMouseInputGenerated(
        BamoImpl::BamoInputObserverClientProxyImpl *this,
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _QWORD v16[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+17h]
  __int128 v20; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v22; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+77h] BYREF
  struct IMessageCallSendHost *v24; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA105,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA10E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v24, &v22, &v23);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v24;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v24 - 16;
        if ( !v24 )
          v11 = 0LL;
        v11[72] = 1;
      }
      v12 = *(_OWORD *)a2;
      v13 = *((_OWORD *)a2 + 1);
      v16[0] = v22;
      v16[1] = v23;
      v17 = v12;
      v14 = *((_OWORD *)a2 + 2);
      v18 = v13;
      v15 = *((_OWORD *)a2 + 3);
      v19 = v14;
      v20 = v15;
      return CoreUICallSend(v10, v16, 2LL, 52LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA115,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
