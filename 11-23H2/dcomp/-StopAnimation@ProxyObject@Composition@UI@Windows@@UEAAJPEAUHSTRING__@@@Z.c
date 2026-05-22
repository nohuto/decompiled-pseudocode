/*
 * XREFs of ?StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18004D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskInfo@@@Z @ 0x18004D060 (-GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskI.c)
 *     ?UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapEntry@234@G_N@Z @ 0x18004D0E0 (-UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapE.c)
 *     ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0 (-GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAU.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::StopAnimation(
        Windows::UI::Composition::ProxyObject *this,
        HSTRING a2)
{
  __int64 v2; // rbx
  Windows::UI::Composition::AnimationBindingManager *v5; // rax
  int TargetMapEntry; // eax
  Windows::UI::Composition::AnimationBindingManager *v7; // rcx
  struct SubchannelMaskInfo *v8; // rbp
  unsigned int v9; // ebx
  struct Windows::UI::Composition::TargetMapEntry *v10; // rdi
  unsigned __int16 SubchannelsFromMask; // ax
  Windows::UI::Composition::AnimationBindingManager *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  Windows::UI::Composition::AnimationBindingManager *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  struct Windows::UI::Composition::TargetMapEntry **v20; // [rsp+20h] [rbp-38h]
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF
  struct SubchannelMaskInfo *v22; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::UI::Composition::TargetMapEntry *v23; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 3);
  v5 = *(Windows::UI::Composition::AnimationBindingManager **)(v2 + 832);
  if ( !v5 )
  {
    v17 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v17 )
    {
      v5 = (Windows::UI::Composition::AnimationBindingManager *)Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v17);
      *(_QWORD *)(v2 + 832) = v5;
      if ( v5 )
        goto LABEL_2;
    }
    else
    {
      *(_QWORD *)(v2 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v18);
  }
LABEL_2:
  v22 = 0LL;
  v23 = 0LL;
  TargetMapEntry = Windows::UI::Composition::AnimationBindingManager::GetTargetMapEntry(v5, this, a2, &v22, &v23);
  v8 = v22;
  v9 = TargetMapEntry;
  if ( TargetMapEntry < 0 )
  {
    v19 = 464;
  }
  else
  {
    v10 = v23;
    if ( !v23 )
    {
LABEL_7:
      v9 = 0;
      goto LABEL_8;
    }
    SubchannelsFromMask = Windows::UI::Composition::AnimationBindingManager::GetSubchannelsFromMask(v7, v22);
    TargetMapEntry = Windows::UI::Composition::AnimationBindingManager::UnbindIntersectingAnimators(
                       v12,
                       v10,
                       SubchannelsFromMask,
                       1);
    v9 = TargetMapEntry;
    if ( TargetMapEntry >= 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 3) + 840LL);
      if ( v13 )
      {
        v14 = *((_DWORD *)v10 + 1);
        v15 = *(_DWORD *)v10;
        v21 = 0uLL;
        LODWORD(v20) = 0;
        Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(v13, v15, v14, 3, (__int64)v20, &v21);
      }
      goto LABEL_7;
    }
    v19 = 475;
  }
  DoStackCaptureDirect(TargetMapEntry, v19);
LABEL_8:
  if ( v8 )
    operator delete(v8, 8uLL);
  return v9;
}
