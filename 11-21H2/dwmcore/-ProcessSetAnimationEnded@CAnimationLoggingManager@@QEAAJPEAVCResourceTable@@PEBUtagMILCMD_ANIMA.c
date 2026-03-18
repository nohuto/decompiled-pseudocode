/*
 * XREFs of ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x1801FD190
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801FC3C0 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetAnimationEnded(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *a3)
{
  unsigned int v3; // r9d
  struct CResource *ResourceWithoutType; // rax
  CAnimationLoggingManager *v5; // r10

  v3 = *((_DWORD *)a3 + 2);
  ResourceWithoutType = 0LL;
  v5 = this;
  if ( v3 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 32LL), v3);
  CAnimationLoggingManager::LogAnimationEnded(
    (wchar_t *)v5,
    *(_QWORD *)(*((_QWORD *)v5 + 2) + 496LL),
    ResourceWithoutType,
    v3,
    *((_DWORD *)a3 + 3),
    *((_DWORD *)a3 + 4));
  return 0LL;
}
