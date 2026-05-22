/*
 * XREFs of ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180152450
 * Callers:
 *     ?PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ @ 0x180152100 (-PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ.c)
 *     ?SetOcclusionRects@BamoSystemContextEndpointProxy@@UEAAXPEAVBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801522E0 (-SetOcclusionRects@BamoSystemContextEndpointProxy@@UEAAXPEAVBamoList_DisplayOcclusionRect_Princi.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180006C70 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180030B64 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  struct Microsoft::Bamo::BamoPrincipal *v2; // rdx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rax
  unsigned int *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v2 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 4);
    if ( v2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        v2);
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2));
      if ( SendHost )
        v4 = (__int64)SendHost + 56;
      else
        v4 = 72LL;
      *(_BYTE *)v4 = 1;
    }
    v5 = (unsigned int *)*((_QWORD *)this + 2);
    v6 = *((unsigned int *)this + 6);
    v7 = v5[9];
    v8 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v5);
    v11[0] = v7;
    v11[1] = v6;
    LOWORD(v10) = 1;
    v9 = CoreUICallSend(v8, v11, 2LL, 86LL);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17BD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v9,
        v10);
  }
}
