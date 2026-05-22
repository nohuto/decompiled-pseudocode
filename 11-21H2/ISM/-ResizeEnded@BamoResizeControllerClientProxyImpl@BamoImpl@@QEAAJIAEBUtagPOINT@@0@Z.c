/*
 * XREFs of ?ResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z @ 0x180116768
 * Callers:
 *     ?ResizeEnded@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z @ 0x1801166F0 (-ResizeEnded@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeEnded(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  char *v4; // rbx
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v13[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      52509LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD21,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v13, &v16, &v12);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v13[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v13[0] )
          v4 = (char *)v13[0] - 16;
        v4[72] = 1;
      }
      v13[0] = (struct IMessageCallSendHost *)*a4;
      v13[1] = (struct IMessageCallSendHost *)*a3;
      v14[0] = v16;
      v14[1] = v12;
      return CoreUICallSend(v11, v14, 2LL, 75LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD28,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
