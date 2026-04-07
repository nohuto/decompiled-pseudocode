/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180019650 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x1800197D4 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180019AC0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180019BF0 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180019D90 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180019FF0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001D828 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18005C49C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // edi
  CSecondaryWindowRepresentation *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  CSecondaryWindowRepresentation *v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  CBaseObject *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CThumbnailVisual::EnsureVisualBrush(this);
    if ( updated < 0 )
    {
      v13 = 62LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 22) &= ~0x2000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v4 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 48);
    if ( v4 )
    {
      updated = CSecondaryWindowRepresentation::Validate(v4);
      if ( updated < 0 )
      {
        v13 = 73LL;
        goto LABEL_42;
      }
      v1 = *((_DWORD *)this + 22);
    }
    v1 &= ~0x80u;
    *((_DWORD *)this + 22) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    if ( updated < 0 )
    {
      v13 = 81LL;
      goto LABEL_42;
    }
    *((_DWORD *)this + 22) &= ~0x4000u;
  }
  updated = CRenderDataVisual::UpdateLayout(this, 0);
  if ( updated < 0 )
  {
    v13 = 86LL;
    goto LABEL_42;
  }
  v5 = *((_DWORD *)this + 22);
  if ( (v5 & 0x1000) != 0 )
  {
    updated = CThumbnailVisual::UpdateDestinationRect(this);
    if ( updated < 0 )
    {
      v13 = 93LL;
      goto LABEL_42;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 22) &= ~0x1000u;
    v5 = *((_DWORD *)this + 22);
  }
  if ( (v5 & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( (*((_DWORD *)this + 22) & 0x10000) != 0 )
      {
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v13 = 105LL;
          goto LABEL_42;
        }
        updated = CRenderDataVisual::ClearInstructions(this);
        if ( updated < 0 )
        {
          v13 = 106LL;
          goto LABEL_42;
        }
        v14 = (CBaseObject *)*((_QWORD *)this + 48);
        if ( v14 )
        {
          CBaseObject::Release(v14);
          *((_QWORD *)this + 48) = 0LL;
        }
        *((_BYTE *)this + 482) = 0;
        updated = CThumbnailVisual::EnsureVisualBrush(this);
        if ( updated < 0 )
        {
          v13 = 109LL;
          goto LABEL_42;
        }
        updated = CThumbnailVisual::UpdateSourceRect(this);
        if ( updated < 0 )
        {
          v13 = 110LL;
          goto LABEL_42;
        }
        updated = CThumbnailVisual::UpdateDestinationRect(this);
        if ( updated < 0 )
        {
          v13 = 111LL;
          goto LABEL_42;
        }
        *((_DWORD *)this + 22) &= 0xFFFE8F7F;
      }
    }
    else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
    {
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v13 = 121LL;
        goto LABEL_42;
      }
      updated = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
      if ( updated < 0 )
      {
        v13 = 122LL;
        goto LABEL_42;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v12, (int)&UdwmThumbnailVisualValidated_Info, 1);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v6, (int)&UdwmThumbnailVisualValidated_Info, 0);
      updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
      if ( updated < 0 )
      {
        v13 = 128LL;
        goto LABEL_42;
      }
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v13 = 129LL;
        goto LABEL_42;
      }
      updated = CThumbnailVisual::EnsureVisualBrush(this);
      if ( updated < 0 )
      {
        v13 = 130LL;
        goto LABEL_42;
      }
      v7 = *((_QWORD *)this + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          updated = CVisualProxy::SetClip(*(CVisualProxy **)(v8 + 16), 0LL);
          if ( updated < 0 )
          {
            v13 = 134LL;
            goto LABEL_42;
          }
        }
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 34LL) )
        CVisual::ClearInterpolationMode(this);
    }
    *((_DWORD *)this + 22) &= ~0x8000u;
    v5 = *((_DWORD *)this + 22);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode(this, 6LL);
    else
      CVisual::ClearInterpolationMode(this);
    *((_DWORD *)this + 22) &= ~0x20000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v13 = 165LL;
    goto LABEL_42;
  }
  v9 = *((_DWORD *)this + 22);
  if ( (v9 & 0x40000) != 0 )
  {
    v10 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 48);
    if ( v10 )
    {
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v10,
        *((struct CCachedVisualImageProxy **)this + 55),
        *((struct CImageLegacyMilBrushProxy **)this + 49),
        (CThumbnailVisual *)((char *)this + 508));
      v9 = *((_DWORD *)this + 22);
    }
    *((_DWORD *)this + 22) = v9 & 0xFFFBFFFF;
  }
  return 0LL;
}
