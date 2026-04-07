/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800485B8
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001F97C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180020F18 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180048924 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180008510 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180046B20 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int inserted; // eax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  void *v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CBaseObject *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( !a3 )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 0LL;
    if ( !v6 )
      return v3;
    while ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) + 32LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, v7);
    goto LABEL_11;
  }
  LODWORD(v14) = 100;
  inserted = CSecondaryWindowRepresentation::Create(1LL, (__int64)this + 16, (__int64)a2, 0, v14, &v16);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v3 = -2147024362;
      v13 = 181;
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v10) = v16;
        *((_DWORD *)this + 38) = v11;
        goto LABEL_9;
      }
      v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8u, 1, &v16);
      if ( (v3 & 0x80000000) == 0 )
      {
LABEL_9:
        _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
        inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v15 = 609;
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                       *((struct CVisual **)v16 + 6),
                       0LL,
                       0,
                       1);
          v3 = inserted;
          if ( inserted >= 0 )
            goto LABEL_11;
          v15 = 612;
        }
        goto LABEL_17;
      }
      v13 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v13);
    v12 = v3;
    v15 = 606;
    goto LABEL_19;
  }
  v15 = 604;
LABEL_17:
  v12 = inserted;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v15);
LABEL_11:
  if ( v16 )
    CBaseObject::Release(v16);
  return v3;
}
