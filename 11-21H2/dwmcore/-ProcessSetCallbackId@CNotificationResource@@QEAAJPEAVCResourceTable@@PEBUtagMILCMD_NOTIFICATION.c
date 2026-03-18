/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800BDBD8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800EB714 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  unsigned int v3; // edx
  int AttachedChannel; // eax
  __int64 v7; // rcx
  struct CChannelContext *v8; // rsi
  unsigned int v9; // edi
  unsigned int *v10; // rcx
  unsigned int v11; // r8d
  CComposition *v12; // rax
  struct CChannelContext *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v14 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this[2], v3, &v14);
  v8 = v14;
  v9 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, AttachedChannel, 0x53u);
  }
  else
  {
    v10 = (unsigned int *)this[6];
    if ( !v10 || !v10[19] )
    {
LABEL_8:
      *((_DWORD *)this + 16) = *((_DWORD *)a3 + 2);
      v12 = *this;
      this[6] = v8;
      (*((void (__fastcall **)(CComposition **))v12 + 23))(this);
      goto LABEL_9;
    }
    if ( v14 == (struct CChannelContext *)v10 )
    {
      if ( v10[19] )
      {
        v11 = *((_DWORD *)this + 16);
        if ( v11 )
          CMessageConversationHost::FlushCallbackId(*((CMessageConversationHost **)this[2] + 155), v10[19], v11);
      }
      goto LABEL_8;
    }
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, -2003303421, 0x5Bu);
  }
LABEL_9:
  if ( v8 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v8);
  return v9;
}
