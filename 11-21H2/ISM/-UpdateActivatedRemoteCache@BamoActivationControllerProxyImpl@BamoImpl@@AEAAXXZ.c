/*
 * XREFs of ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18008F1EC
 * Callers:
 *     ?PushStateToPrincipal@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ @ 0x18008EF60 (-PushStateToPrincipal@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ.c)
 *     ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x18008F100 (-SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this)
{
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v3; // rax
  unsigned int *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  struct IMessageCallSendHost *v7; // rax
  unsigned int v8; // eax
  int v9; // [rsp+20h] [rbp-38h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)this) )
  {
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(this[2]);
      if ( SendHost )
        v3 = (__int64)SendHost + 56;
      else
        v3 = 72LL;
      *(_BYTE *)v3 = 1;
    }
    v4 = (unsigned int *)this[2];
    v5 = *((unsigned int *)this + 6);
    v6 = v4[9];
    v7 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v4);
    v10[0] = v6;
    v10[1] = v5;
    LOWORD(v9) = 0;
    v8 = CoreUICallSend(v7, v10, 2LL, 2LL);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5E1,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v8,
        v9);
  }
}
