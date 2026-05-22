/*
 * XREFs of ?ResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z @ 0x18013F728
 * Callers:
 *     ?ResizeEnded@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z @ 0x18013F6B0 (-ResizeEnded@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeEnded(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  char *v4; // rbx
  __int64 v8; // r10
  int v10; // eax
  unsigned int v11; // esi
  struct IMessageCallSendHost *v12; // rcx
  unsigned int v13; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v14[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v17; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7D4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v14, &v17, &v13);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v14[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v14[0] )
          v4 = (char *)v14[0] - 16;
        v4[72] = 1;
      }
      v14[0] = (struct IMessageCallSendHost *)*a4;
      v14[1] = (struct IMessageCallSendHost *)*a3;
      v15[0] = v17;
      v15[1] = v13;
      return CoreUICallSend(v12, v15, 2LL, 77LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
