/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F058C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18008B4E4 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800F0720 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800F5590 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1800F806C (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v5; // ebp
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  struct CResource *v9; // rsi
  __int64 v10; // r13
  struct CResource **v11; // rdi
  __int64 Resource; // rax
  __int64 v13; // rcx
  struct CResource *v14; // r14
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rcx
  struct CResource **v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // r10
  __int64 v26; // rcx
  unsigned int Slot; // eax
  __int64 v28; // r10
  CVisual *v29; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v8 = *((_DWORD *)a3 + 2);
  v9 = 0LL;
  v10 = 0LL;
  v29 = TransformParentDataInternal;
  v11 = (struct CResource **)TransformParentDataInternal;
  if ( v8 )
  {
    Resource = CResourceTable::GetResource(v7, v8, 0xC7u);
    v9 = (struct CResource *)Resource;
    if ( !Resource )
    {
      v5 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2003303421, 0x99Eu);
      return v5;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Resource + 184LL))(Resource);
  }
  v14 = 0LL;
  v15 = 0LL;
  if ( v11 )
  {
    v14 = *v11;
    v15 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)*v11 + 184LL))(*v11);
  }
  if ( v9 != v14 )
  {
    CResource::UnRegisterNotifierInternal(this, v14);
    if ( v9 )
    {
      v16 = CResource::RegisterNotifier(this, v9);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x9B0u);
        return v5;
      }
      if ( !v11 )
      {
        v18 = (struct CResource **)operator new(0x10uLL);
        v11 = v18;
        if ( v18 )
          *(_OWORD *)v18 = 0LL;
        else
          v11 = 0LL;
        CVisual::SetTransformParentDataInternal(this, (struct TransformParentData *)v11);
      }
      *v11 = v9;
      *((_BYTE *)v11 + 8) = *((_BYTE *)a3 + 12) != 0;
    }
    else if ( v11 )
    {
      SAFE_DELETE<TransformParentData>(&v29);
      v25 = (_DWORD *)*((_QWORD *)this + 29);
      if ( (*v25 & 0x1000000) != 0 )
      {
        v26 = *((_QWORD *)this + 29);
        *v25 &= ~0x1000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v26, 8);
        if ( Slot < *(_DWORD *)(v28 + 4) )
          *(_BYTE *)(Slot + v28 + 8) = 0;
      }
    }
  }
  if ( *((_BYTE *)this + 102) >> 7 != (v9 != 0LL) )
  {
    v19 = *((_QWORD *)this + 2);
    v29 = this;
    if ( v9 )
    {
      v20 = *(_DWORD *)(v19 + 1040);
      v21 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v21 > *(_DWORD *)(v19 + 1036) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 1016, 8u, 1, &v29);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v19 + 1016) + 8LL * v20) = this;
        *(_DWORD *)(v19 + 1040) = v21;
      }
      *((_BYTE *)this + 102) |= 0x80u;
    }
    else
    {
      DynArray<CVisual *,0>::Remove(v19 + 1016, &v29);
      *((_BYTE *)this + 102) &= ~0x80u;
    }
  }
  if ( v10 != v15 )
  {
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
  }
  return v5;
}
