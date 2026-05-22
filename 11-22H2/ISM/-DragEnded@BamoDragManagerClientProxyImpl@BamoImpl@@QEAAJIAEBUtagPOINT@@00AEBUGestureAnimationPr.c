/*
 * XREFs of ?DragEnded@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180163058
 * Callers:
 *     ?DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180162FA0 (-DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragEnded(
        __int64 a1,
        __int64 a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        __int128 *a6)
{
  char *v6; // rbx
  __int64 v10; // r10
  int v12; // eax
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // r10
  __int64 v15; // xmm1_8
  struct IMessageCallSendHost *v16; // rcx
  unsigned int v17; // [rsp+70h] [rbp-41h] BYREF
  struct IMessageCallSendHost *v18[3]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-21h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-11h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+37h]
  unsigned int v23; // [rsp+F0h] [rbp+3Fh] BYREF

  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6D24,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v18,
            &v23,
            &v17);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v18[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v18[0] )
          v6 = (char *)v18[0] - 16;
        v6[72] = 1;
      }
      v15 = *((_QWORD *)a6 + 2);
      v20 = *a6;
      v21 = v15;
      v16 = *a5;
      v18[1] = *(struct IMessageCallSendHost **)a4;
      v18[2] = *a3;
      v19[0] = v23;
      v19[1] = v17;
      v18[0] = v16;
      return CoreUICallSend(v14, v19, 2LL, 30LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D34,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
