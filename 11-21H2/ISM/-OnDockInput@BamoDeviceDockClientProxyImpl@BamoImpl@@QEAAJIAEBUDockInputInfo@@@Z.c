/*
 * XREFs of ?OnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIAEBUDockInputInfo@@@Z @ 0x180180CFC
 * Callers:
 *     ?OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z @ 0x180180C90 (-OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::OnDockInput(
        BamoImpl::BamoDeviceDockClientProxyImpl *this,
        __int64 a2,
        const struct DockInputInfo *a3,
        const char *a4)
{
  char *v4; // rbx
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  struct IMessageCallSendHost *v16[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v17; // [rsp+50h] [rbp-29h]
  __int128 v18; // [rsp+60h] [rbp-19h]
  __int128 v19; // [rsp+70h] [rbp-9h]
  __int128 v20; // [rsp+80h] [rbp+7h]
  __int128 v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v24; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      12496LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D4,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v16, &v24, &v25);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v16[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v16[0] )
          v4 = (char *)v16[0] - 16;
        v4[72] = 1;
      }
      v11 = *(_OWORD *)a3;
      v12 = *((_OWORD *)a3 + 1);
      v16[0] = (struct IMessageCallSendHost *)v24;
      v17 = v11;
      v13 = *((_OWORD *)a3 + 2);
      v16[1] = (struct IMessageCallSendHost *)v25;
      v18 = v12;
      v14 = *((_OWORD *)a3 + 3);
      v19 = v13;
      v15 = *((_OWORD *)a3 + 4);
      v20 = v14;
      *(_QWORD *)&v14 = *((_QWORD *)a3 + 10);
      v21 = v15;
      v22 = v14;
      return CoreUICallSend(v10, v16, 2LL, 24LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30DB,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
