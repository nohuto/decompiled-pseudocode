/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800DEBCC
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800DEB7C (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEC88 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  char v5; // bp
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( a2 != this[31] )
  {
    v5 = 0;
    if ( a2 )
      v5 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 200LL))(a2);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xA77u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags((__int64)this, 5u);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v3;
}
