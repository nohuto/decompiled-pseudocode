/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801BE6D4
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x1801BE680 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ @ 0x1801DFF80 (-PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800F0114 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801BCA90 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
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
    v8 = CoreUICallSend(v7, v10, 2LL, 0LL, 4, &unk_1803434A5);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        9178LL,
        (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v8,
        v9);
  }
}
