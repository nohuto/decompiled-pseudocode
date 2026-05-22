/*
 * XREFs of ?ResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x18013153C
 * Callers:
 *     ?ResizeCancelled@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z @ 0x1801314B0 (-ResizeCancelled@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Wi.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeCancelled(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  char *v6; // rbx
  __int64 v8; // r10
  int v10; // eax
  unsigned int v11; // esi
  struct IMessageCallSendHost *v12; // r10
  struct IMessageCallSendHost *v13; // rcx
  unsigned int v14; // [rsp+60h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v15[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v16[3]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+4Fh]
  unsigned int v18; // [rsp+C0h] [rbp+57h] BYREF

  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3AC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v15,
            &v18,
            &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v15[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v15[0] )
          v6 = (char *)v15[0] - 16;
        v6[72] = 1;
      }
      v15[0] = *a6;
      v13 = *a5;
      v16[0] = v18;
      v16[1] = v14;
      v15[1] = v13;
      return CoreUICallSend(v12, v16, 2LL, 77LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
