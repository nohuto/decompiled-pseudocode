/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x18015528C
 * Callers:
 *     ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@6@22W4GestureProcessorType@@@Z @ 0x1801551A0 (-DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
        __int64 a1,
        __int64 a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        __int128 *a6)
{
  __int64 v9; // r10
  int v11; // eax
  unsigned int v12; // edi
  struct IMessageCallSendHost *v13; // r10
  char *v14; // rax
  __int64 v15; // xmm1_8
  struct IMessageCallSendHost *v16; // rcx
  unsigned int v17; // [rsp+90h] [rbp-49h] BYREF
  struct IMessageCallSendHost *v18[3]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v19[2]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-19h]
  __int64 v21; // [rsp+D0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+2Fh]
  unsigned int v23; // [rsp+110h] [rbp+37h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6A48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A51,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v18,
            &v23,
            &v17);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v18[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v14 = (char *)v18[0] - 16;
        if ( !v18[0] )
          v14 = 0LL;
        v14[72] = 1;
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
      return CoreUICallSend(v13, v19, 2LL, 30LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A58,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
