/*
 * XREFs of ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180046B20
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180020A60 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180046938 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800485B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180046C20 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180046C64 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // esi
  volatile signed __int32 *v2; // rbx
  int v4; // eax
  int v5; // eax
  volatile signed __int32 *v6; // rdi
  int inserted; // eax
  CBaseObject *v9; // [rsp+50h] [rbp+20h] BYREF
  CBaseObject *v10; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v4 = CVisual::Create(&v9);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xC7u);
      v6 = (volatile signed __int32 *)v9;
    }
    else
    {
      v5 = CRenderDataVisual::Create(&v10);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC8u);
        v6 = (volatile signed __int32 *)v9;
        v2 = (volatile signed __int32 *)v10;
      }
      else
      {
        v6 = (volatile signed __int32 *)v9;
        v2 = (volatile signed __int32 *)v10;
        inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v9 + 32), v10, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xC9u);
        }
        else
        {
          *((_QWORD *)this + 6) = v6;
          if ( v6 )
          {
            _InterlockedIncrement(v6 + 2);
            v6 = (volatile signed __int32 *)v9;
            v2 = (volatile signed __int32 *)v10;
          }
          *((_QWORD *)this + 7) = v2;
          if ( v2 )
          {
            _InterlockedIncrement(v2 + 2);
            v6 = (volatile signed __int32 *)v9;
            v2 = (volatile signed __int32 *)v10;
          }
          CSecondaryWindowRepresentation::SetDirtyFlags(this, 4u);
          CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
          CSecondaryWindowRepresentation::OnWindowOffsetUpdated(this);
        }
      }
    }
    if ( v6 )
      CBaseObject::Release((CBaseObject *)v6);
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  return v1;
}
