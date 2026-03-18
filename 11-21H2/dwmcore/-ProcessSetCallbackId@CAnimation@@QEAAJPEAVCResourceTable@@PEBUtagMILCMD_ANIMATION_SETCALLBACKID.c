/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1802097DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800EB714 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETCALLBACKID *a3)
{
  __int64 v4; // rdx
  __int64 v7; // r8
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  __int64 v10; // rcx
  struct CChannelContext *v11; // rdi
  unsigned int v12; // esi
  struct CChannelContext *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *((unsigned int *)this + 77);
  if ( (_DWORD)v4 )
  {
    v7 = *((unsigned int *)this + 76);
    if ( (_DWORD)v7 )
      CMessageConversationHost::FlushCallbackId(*(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1240LL), v4, v7);
  }
  v8 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v14);
  v11 = v14;
  v12 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, AttachedChannel, 0x222u);
  else
    *((_DWORD *)this + 77) = *((_DWORD *)v14 + 20);
  if ( v11 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v11);
  return v12;
}
