/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18001CAD4
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001C97C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001EA48 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800355DC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180053F60 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180053F94 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        CSecondaryWindowRepresentation *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // ebp
  int SnapshotIndex; // eax
  CTransitionVisualController *v16; // rcx
  int v17; // r9d
  unsigned int v18; // eax
  struct CTransitionWindowSnapshot *v19; // r8
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v22; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 21) = a3;
  *((_QWORD *)this + 4) = a4;
  if ( (a2 & 1) != 0 )
  {
    v11 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v21 = 142;
LABEL_15:
      v17 = v11;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v21, 0LL);
      return v12;
    }
  }
  v22 = this;
  v9 = *(_DWORD *)(a4 + 520);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v12 = -2147024362;
    v18 = 181;
    v14 = -2147024362;
    goto LABEL_16;
  }
  if ( v10 <= *(_DWORD *)(a4 + 516) )
  {
    *(_QWORD *)(*(_QWORD *)(a4 + 496) + 8LL * v9) = this;
    *(_DWORD *)(a4 + 520) = v10;
    goto LABEL_5;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 496, 8LL, 1LL, &v22);
  v12 = v14;
  if ( v14 < 0 )
  {
    v18 = 192;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v18, 0LL);
    v17 = v14;
    v21 = 145;
    goto LABEL_17;
  }
LABEL_5:
  *((_BYTE *)this + 160) = 1;
  v11 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    v21 = 154;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v16, SnapshotIndex, &v23) >= 0 )
    {
      v19 = v23;
      if ( *((_BYTE *)v23 + 364) )
      {
        v20 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v20 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 36) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 36) + 32LL) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 36) + 32LL) + 56LL)
             - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 36) + 32LL) + 48LL);
        if ( v6 == v20 )
        {
          *((_QWORD *)this + 51) = v23;
          _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
          *((_BYTE *)this + 161) = 1;
        }
      }
    }
  }
  return v12;
}
