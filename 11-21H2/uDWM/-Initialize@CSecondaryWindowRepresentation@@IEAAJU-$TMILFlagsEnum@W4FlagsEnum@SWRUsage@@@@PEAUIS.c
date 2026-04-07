/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180020A60
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180046B20 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
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
  __int64 v9; // r10
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // esi
  __int64 v15; // rbp
  int SnapshotIndex; // eax
  int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v22; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  v9 = a4;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v12 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = 142;
LABEL_16:
      v17 = v12;
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v21);
      return (unsigned int)v13;
    }
    v9 = *((_QWORD *)this + 4);
  }
  v10 = *(_DWORD *)(v9 + 520);
  v22 = this;
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v13 = -2147024362;
    v18 = 181;
    goto LABEL_17;
  }
  if ( v11 <= *(_DWORD *)(v9 + 516) )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 496) + 8LL * v10) = this;
    *(_DWORD *)(v9 + 520) = v11;
    goto LABEL_5;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 496, 8LL, 1LL, &v22);
  if ( v13 < 0 )
  {
    v18 = 192;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v18);
    v17 = v13;
    v21 = 145;
    goto LABEL_18;
  }
LABEL_5:
  *((_BYTE *)this + 160) = 1;
  v12 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v13 = v12;
  if ( v12 < 0 )
  {
    v21 = 154;
    goto LABEL_16;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    v15 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      (CTransitionVisualController *)v15,
                      *(HWND *)(a4 + 40));
    if ( SnapshotIndex >= 0 && SnapshotIndex < *(_DWORD *)(v15 + 80) )
    {
      _mm_lfence();
      v19 = *(_QWORD *)(*(_QWORD *)(v15 + 56) + 16LL * (unsigned int)SnapshotIndex + 8);
      if ( *(_BYTE *)(v19 + 364) )
      {
        v20 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v20 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 288) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 288) + 32LL) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 288) + 32LL) + 56LL)
             - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 288) + 32LL) + 48LL);
        if ( v6 == v20 )
        {
          *((_QWORD *)this + 51) = v19;
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          *((_BYTE *)this + 161) = 1;
        }
      }
    }
  }
  return (unsigned int)v13;
}
