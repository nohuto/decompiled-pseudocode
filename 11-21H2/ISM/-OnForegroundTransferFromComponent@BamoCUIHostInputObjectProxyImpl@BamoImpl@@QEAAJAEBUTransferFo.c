/*
 * XREFs of ?OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJAEBUTransferForegroundInfo@@@Z @ 0x180127AEC
 * Callers:
 *     ?OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxy@@UEAAJAEBUTransferForegroundInfo@@@Z @ 0x180127A90 (-OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxy@@UEAAJAEBUTransferForegroundInfo@.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::OnForegroundTransferFromComponent(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        const struct TransferForegroundInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v18; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+C0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v20; // [rsp+C8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      5659LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v20, &v18, &v19);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v20;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v20 - 16;
        if ( !v20 )
          v10 = 0LL;
        v10[72] = 1;
      }
      v11 = *(_OWORD *)a2;
      v16 = *((_DWORD *)a2 + 8);
      v12 = *((_OWORD *)a2 + 1);
      v13[0] = v18;
      v13[1] = v19;
      v14 = v11;
      v15 = v12;
      return CoreUICallSend(v9, v13, 2LL, 12LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1626,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
