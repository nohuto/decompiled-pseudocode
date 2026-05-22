/*
 * XREFs of ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180006228
 * Callers:
 *     ?TryGetPropertyAnimator@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x1800061D0 (-TryGetPropertyAnimator@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAVCompositi.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskInfo@@@Z @ 0x18004D060 (-GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskI.c)
 *     ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0 (-GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAU.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::TryFindTargetAnimator(
        Windows::UI::Composition::AnimationBindingManager *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionPropertyAnimator **a4)
{
  struct Windows::UI::Composition::CompositionPropertyAnimator *v4; // rbx
  int TargetMapEntry; // eax
  Windows::UI::Composition::AnimationBindingManager *v7; // rcx
  unsigned int v8; // edi
  struct Windows::UI::Composition::TargetMapEntry *v9; // rdi
  unsigned __int16 SubchannelsFromMask; // ax
  Windows::UI::Composition::AnimationBindingManager *v11; // rcx
  __int64 v12; // rdi
  unsigned __int16 v13; // bp
  struct SubchannelMaskInfo *v15; // [rsp+30h] [rbp-28h] BYREF
  struct Windows::UI::Composition::TargetMapEntry *v16; // [rsp+38h] [rbp-20h] BYREF
  struct Windows::UI::Composition::CompositionPropertyAnimator *v17; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  TargetMapEntry = Windows::UI::Composition::AnimationBindingManager::GetTargetMapEntry(this, a2, a3, &v15, &v16);
  v8 = TargetMapEntry;
  if ( TargetMapEntry < 0 )
  {
    DoStackCaptureDirect(TargetMapEntry, 0x28Au);
  }
  else
  {
    v9 = v16;
    if ( v16 )
    {
      SubchannelsFromMask = Windows::UI::Composition::AnimationBindingManager::GetSubchannelsFromMask(v7, v15);
      v12 = *((_QWORD *)v9 + 1);
      v13 = SubchannelsFromMask;
      while ( v12 )
      {
        if ( Windows::UI::Composition::AnimationBindingManager::GetSubchannelsFromMask(
               v11,
               *(struct SubchannelMaskInfo **)v12) == v13 )
        {
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(&v17, v12 + 8);
          v4 = v17;
          break;
        }
        v12 = *(_QWORD *)(v12 + 24);
      }
    }
    *a4 = v4;
    v8 = 0;
  }
  if ( v15 )
    operator delete(v15, 8uLL);
  return v8;
}
