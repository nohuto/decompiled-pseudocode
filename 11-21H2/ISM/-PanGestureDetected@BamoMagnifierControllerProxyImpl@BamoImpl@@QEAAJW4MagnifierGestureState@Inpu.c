/*
 * XREFs of ?PanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x18014DD80
 * Callers:
 *     ?PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18014DD08 (-PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::PanGestureDetected(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rcx
  struct IMessageCallSendHost *v11; // xmm0_8
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v16; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      44005LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xABE9,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           &v13,
           &v16,
           &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v13;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v13 )
          v4 = (char *)v13 - 16;
        v4[72] = 1;
      }
      v11 = *(struct IMessageCallSendHost **)a4;
      v14[0] = v16;
      v14[1] = v12;
      v13 = v11;
      return CoreUICallSend(v10, v14, 2LL, 62LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABF0,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
