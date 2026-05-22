/*
 * XREFs of ?ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x18014E18C
 * Callers:
 *     ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x18014E130 (-ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::ToggleDetected(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        struct IMessageCallSendHost **a2,
        __int64 a3,
        const char *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  struct IMessageCallSendHost *v11; // xmm0_8
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      43968LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xABC4,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v16 - 16;
        if ( !v16 )
          v10 = 0LL;
        v10[72] = 1;
      }
      v11 = *a2;
      v12[0] = v14;
      v12[1] = v15;
      v16 = v11;
      return CoreUICallSend(v9, v12, 2LL, 62LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABCB,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
