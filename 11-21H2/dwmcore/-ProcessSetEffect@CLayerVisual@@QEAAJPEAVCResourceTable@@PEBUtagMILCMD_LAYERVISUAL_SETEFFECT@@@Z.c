/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1802239BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F1960 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022355C (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 v7; // rcx
  struct CResource *Resource; // rsi
  struct CResource **v9; // rax
  struct CResource **v10; // rdi
  struct CResource *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x37u);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0x31u);
      return v4;
    }
    v9 = (struct CResource **)*((_QWORD *)this + 92);
    if ( !v9 )
    {
      v9 = (struct CResource **)DefaultHeap::AllocClear(0x10uLL);
      if ( !v9 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v9[1] = 0LL;
      *v9 = 0LL;
      *((_QWORD *)this + 92) = v9;
    }
    if ( *v9 != Resource )
    {
      CResource::UnRegisterNotifierInternal(this, *v9);
      v10 = (struct CResource **)*((_QWORD *)this + 92);
      if ( *v10 != Resource )
      {
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
        v11 = *v10;
        *v10 = Resource;
        if ( v11 )
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = CResource::RegisterNotifier(this, Resource);
      v4 = v12;
      if ( v12 >= 0 )
      {
        CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(this, v13);
LABEL_18:
        CVisual::PropagateFlags((__int64)this, 5u);
        return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v12, 0x3Fu);
    }
  }
  else if ( *((_QWORD *)this + 92) )
  {
    CLayerVisual::ClearTreeEffect((struct CResource ***)this);
    goto LABEL_18;
  }
  return v4;
}
