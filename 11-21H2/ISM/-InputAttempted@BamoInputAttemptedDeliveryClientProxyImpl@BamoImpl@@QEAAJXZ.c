/*
 * XREFs of ?InputAttempted@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801532FC
 * Callers:
 *     ?InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x1801532B0 (-InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::InputAttempted(
        BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  char *v9; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      25646LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6432,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v14;
      if ( *((_BYTE *)this + 31) )
      {
        v9 = (char *)v14 - 16;
        if ( !v14 )
          v9 = 0LL;
        v9[72] = 1;
      }
      v10[0] = v12;
      v10[1] = v13;
      return CoreUICallSend(v8, v10, 2LL, 43LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6439,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
