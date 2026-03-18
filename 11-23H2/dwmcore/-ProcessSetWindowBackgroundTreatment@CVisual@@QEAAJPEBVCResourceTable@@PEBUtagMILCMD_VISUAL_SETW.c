/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800247F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800233AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800248FC (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18002492C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x18002498C (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800249FC (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180024B10 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007FD6C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180087F50 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CContent@@KAPEAX_K@Z @ 0x1800B30A8 (--2CContent@@KAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CBrush *Resource; // rsi
  unsigned int v8; // ecx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v10; // rbx
  CWindowBackgroundTreatment *v11; // rax
  unsigned int v12; // ecx
  struct CWindowBackgroundTreatment *v13; // rsi
  int v14; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-18h]
  struct CWindowBackgroundTreatment *v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = (struct CBrush *)CResourceTable::GetResource(a2, v5, 17LL);
    if ( !Resource )
    {
      v4 = -2003303421;
      v17 = 2596;
      goto LABEL_12;
    }
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
  if ( !WindowBackgroundTreatmentInternal || *((struct CBrush **)WindowBackgroundTreatmentInternal + 9) != Resource )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, WindowBackgroundTreatmentInternal);
    v10 = this[2];
    v18 = 0LL;
    v11 = (CWindowBackgroundTreatment *)CContent::operator new(0x160uLL);
    if ( v11 )
      v11 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v11, v10, Resource);
    Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=(&v18, v11);
    v13 = v18;
    if ( v18 )
    {
      v14 = CResource::RegisterNotifier((CResource *)this, v18);
      v4 = v14;
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(struct CWindowBackgroundTreatment *))(*(_QWORD *)v13 + 16LL))(v13);
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v13);
        CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment((CVisual *)this);
        CVisual::PropagateFlags(this, 5LL);
        return v4;
      }
      v16 = v14;
      v17 = 2607;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v16, v17, 0LL);
      return v4;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x14u, 0LL);
    v17 = 2606;
LABEL_12:
    v16 = v4;
    goto LABEL_16;
  }
  return v4;
}
