/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800138C8
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013838 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001CF40 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180030330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180037A24 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180015250 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001C97C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800355DC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  int v12; // esi
  int v13; // r9d
  unsigned int v14; // eax
  void *v15; // [rsp+20h] [rbp-18h]
  bool v16; // [rsp+20h] [rbp-18h]
  unsigned int v17; // [rsp+20h] [rbp-18h]
  CBaseObject *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v18 = 0LL;
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
  LODWORD(v15) = 100;
  inserted = CSecondaryWindowRepresentation::Create(
               1,
               ((_DWORD)this + 16) & (unsigned int)-(this != 0LL),
               (int)a2,
               0,
               v15,
               (__int64)&v18);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v3 = -2147024362;
      v14 = 181;
      v12 = -2147024362;
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v10) = v18;
        *((_DWORD *)this + 38) = v11;
        goto LABEL_9;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 128, 8LL, 1LL, &v18);
      v3 = v12;
      if ( v12 >= 0 )
      {
LABEL_9:
        _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
        inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v17 = 609;
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                       *((struct CVisual **)v18 + 6),
                       0LL,
                       0,
                       v16);
          v3 = inserted;
          if ( inserted >= 0 )
            goto LABEL_11;
          v17 = 612;
        }
        goto LABEL_17;
      }
      v14 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v14, 0LL);
    v13 = v12;
    v17 = 606;
    goto LABEL_19;
  }
  v17 = 604;
LABEL_17:
  v13 = inserted;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v17, 0LL);
LABEL_11:
  if ( v18 )
    CBaseObject::Release(v18);
  return v3;
}
