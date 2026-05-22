/*
 * XREFs of ?UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@_N@Z @ 0x18016959C
 * Callers:
 *     ?DisconnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180147190 (-DisconnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskInfo@@@Z @ 0x18004D060 (-GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskI.c)
 *     ?UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapEntry@234@G_N@Z @ 0x18004D0E0 (-UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapE.c)
 *     ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0 (-GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAU.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::UnregisterAnimationTarget(
        struct _RTL_GENERIC_TABLE *this,
        Windows::UI::Composition::CompositorCommon **a2,
        HSTRING a3,
        char a4)
{
  int TargetMapEntry; // eax
  Windows::UI::Composition::AnimationBindingManager *v7; // rcx
  unsigned int v8; // ebx
  struct Windows::UI::Composition::TargetMapEntry *v9; // rdi
  unsigned __int16 SubchannelsFromMask; // ax
  Windows::UI::Composition::AnimationBindingManager *v11; // rcx
  Windows::UI::Composition::CompositorCommon *v12; // rcx
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  unsigned int v14; // edx
  __int64 v16; // [rsp+20h] [rbp-38h]
  struct SubchannelMaskInfo *v17; // [rsp+30h] [rbp-28h] BYREF
  struct Windows::UI::Composition::TargetMapEntry *v18[2]; // [rsp+40h] [rbp-18h] BYREF

  v17 = 0LL;
  v18[0] = 0LL;
  TargetMapEntry = Windows::UI::Composition::AnimationBindingManager::GetTargetMapEntry(
                     this,
                     (struct Windows::UI::Composition::ProxyObject *)a2,
                     a3,
                     &v17,
                     v18);
  v8 = TargetMapEntry;
  if ( TargetMapEntry < 0 )
  {
    v14 = 464;
  }
  else
  {
    v9 = v18[0];
    if ( !v18[0] )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_10;
    }
    SubchannelsFromMask = Windows::UI::Composition::AnimationBindingManager::GetSubchannelsFromMask(v7, v17);
    TargetMapEntry = Windows::UI::Composition::AnimationBindingManager::UnbindIntersectingAnimators(
                       v11,
                       v9,
                       SubchannelsFromMask,
                       a4);
    v8 = TargetMapEntry;
    if ( TargetMapEntry >= 0 )
    {
      v12 = a2[3];
      if ( *((_QWORD *)v12 + 105) )
      {
        AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v12, 0);
        v18[0] = 0LL;
        v18[1] = 0LL;
        LODWORD(v16) = 0;
        Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
          (__int64)AnimationLoggingManager,
          *(_DWORD *)v9,
          *((_DWORD *)v9 + 1),
          3,
          v16,
          (__int128 *)v18);
      }
      goto LABEL_6;
    }
    v14 = 475;
  }
  DoStackCaptureDirect(TargetMapEntry, v14);
LABEL_10:
  if ( v17 )
    operator delete(v17);
  return v8;
}
