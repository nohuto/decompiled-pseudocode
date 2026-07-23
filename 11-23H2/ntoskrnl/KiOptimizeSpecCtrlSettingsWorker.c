/*
 * XREFs of KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     KiUpdateSpeculationControl @ 0x140325E50 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     KiIsBranchConfusionPresent @ 0x140382944 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsMitigationDesired @ 0x140410CBC (KiIsRfdsMitigationDesired.c)
 *     KiIsRfdsMitigationSupported @ 0x140410CD4 (KiIsRfdsMitigationSupported.c)
 *     KiIsSrsoMitigationDesired @ 0x140410D10 (KiIsSrsoMitigationDesired.c)
 *     KiIsSrsoMitigationSupported @ 0x140410DB8 (KiIsSrsoMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x140410DF4 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x140410E10 (KiIsTsaMitigationSupported.c)
 *     KiSetVirtualMitigationControl @ 0x140410EF0 (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x14053FF40 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x14053FFC0 (HvlIsStibpPairingRecommended.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140574158 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140574240 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140574280 (KiIsBranchConfusionMitigationSupported.c)
 */

ULONG_PTR __fastcall KiOptimizeSpecCtrlSettingsWorker(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned __int16 v13; // ax
  signed __int32 v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // eax
  int v17; // r9d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  signed __int32 v27; // eax
  unsigned int v28; // edi
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  int v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+80h] [rbp+18h]
  int v36; // [rsp+88h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  v4 = 0x10000000000LL;
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  v5 = 0x4000000000LL;
  v6 = 256LL;
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(v4, CoreProcessorSet, 256LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v7 = 0x8000000000000LL;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( !(unsigned int)KiIsRfdsMitigationSupported(0x8000000000000LL, &KiSpeculationFeatures, v6) )
    {
      v8 = 0x4000000000000LL;
LABEL_32:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v8);
      goto LABEL_35;
    }
    if ( !(unsigned int)KiIsRfdsMitigationDesired() )
    {
      v8 = 0x2000000000000LL;
      goto LABEL_32;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v7);
  }
LABEL_35:
  if ( ((unsigned __int64)KiSpeculationFeatures & v7) != 0 )
  {
    CurrentPrcb->BpbState |= v6;
    CurrentPrcb->VerwSelector = 24;
  }
  v9 = 0x80000000LL;
  if ( Argument )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v11 = ~v10 & 0x80000000;
    if ( (v10 & 0x7FFFFFFF) != 0 )
    {
      v12 = *(_DWORD *)Argument & 0x80000000;
      v33 = 0;
      if ( v12 != v11 )
      {
        do
        {
          KeYieldProcessorEx(&v33);
          v9 = 0x80000000LL;
        }
        while ( (*(_DWORD *)Argument & 0x80000000) != v11 );
        v5 = 0x4000000000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v11;
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v5);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
    CurrentPrcb->BpbFeatures |= 2u;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_83;
    v7 = 1LL;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      v7 = 3LL;
    CurrentPrcb->BpbKernelSpecCtrl = v7;
    CurrentPrcb->BpbUserSpecCtrl = v7;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v7;
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      v13 = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        v13 |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = v13;
      CurrentPrcb->BpbUserSpecCtrl = v13;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v13;
    }
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( (((unsigned __int64)KiSpeculationFeatures & v5) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
      && KiSsbdMsr == 72 )
    {
      CurrentPrcb->BpbNmiSpecCtrl |= 4u;
    }
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) != 0 )
      {
        if ( BYTE12(KiSpeculationFeatures) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
        }
        else if ( (KiSpeculationFeatures & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
          CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
          CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
          CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
        }
        else
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000000uLL);
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000000uLL);
      }
    }
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
LABEL_83:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (KiSpeculationFeatures & 0x4000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 2u;
      if ( (KiSpeculationFeatures & 0x2000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
      if ( (((unsigned __int64)KiSpeculationFeatures & v5) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( CurrentPrcb->CpuVendor == 1 )
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000000000uLL);
        if ( Argument )
        {
          v14 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v15 = ~v14 & 0x80000000;
          if ( (v14 & 0x7FFFFFFF) != 0 )
          {
            v16 = *(_DWORD *)Argument & 0x80000000;
            v34 = 0;
            while ( v16 != v15 )
            {
              KeYieldProcessorEx(&v34);
              v16 = *(_DWORD *)Argument & 0x80000000;
            }
          }
          else
          {
            *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v15;
          }
        }
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        {
          CurrentPrcb->BpbRetpolineState |= 4u;
          KeExitRetpoline(v7, CoreProcessorSet, v9);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
          CurrentPrcb->BpbFeatures |= 1u;
        }
        v17 = 0;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
        {
          v9 = CurrentPrcb->CoreProcessorSet;
          v18 = v9 - ((v9 >> 1) & 0x5555555555555555LL);
          CoreProcessorSet = v18 & 0x3333333333333333LL;
          v19 = ((v18 & 0x3333333333333333LL)
               + ((v18 >> 2) & 0x3333333333333333LL)
               + (((v18 & 0x3333333333333333LL) + ((v18 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
          v7 = 0x101010101010101LL;
          if ( (0x101010101010101LL * v19) >> 56 == 2
            && (!HvlHypervisorConnected
             || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, CoreProcessorSet, v9)
             || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
          {
            v20 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v21, __ROR8__(v9, v20));
            v35 = v21;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * CurrentPrcb->Group
                                                                                           + (((unsigned __int8)v21 + v20) & 0x3F)]);
            v17 = 1;
            CurrentPrcb->PairRegister = 6;
          }
        }
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !v17
          && (KiSpeculationFeatures & 0x10000000000LL) == 0
          && HvlHypervisorConnected
          && (unsigned __int8)HvlIsCoreSharingPossible(v7, CoreProcessorSet, v9) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x4000) != 0
          && !v17
          && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
        }
        if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
LABEL_131:
          v5 = 0x4000000000LL;
          goto LABEL_173;
        }
        if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
          if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
          {
            if ( (unsigned int)KiIsBranchConfusionMitigationSupported(CurrentPrcb, &KiSpeculationFeatures) )
              goto LABEL_138;
            v23 = 0x200000000000LL;
          }
          else
          {
            v23 = 0x100000000000LL;
          }
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v23);
        }
LABEL_138:
        if ( (KiSpeculationFeatures & 0x2000000) == 0 )
          goto LABEL_145;
        if ( (unsigned int)KiIsTsaMitigationDesired() )
        {
          if ( (unsigned int)KiIsTsaMitigationSupported(CurrentPrcb) )
          {
            CurrentPrcb->BpbFeatures |= 0x40u;
LABEL_145:
            if ( (KiSpeculationFeatures & 0x200000) == 0 )
              goto LABEL_151;
            if ( (unsigned int)KiIsSrsoMitigationSupported(v22, &KiSpeculationFeatures) )
            {
              if ( (unsigned int)KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
                goto LABEL_151;
              v25 = 0x800000000000LL;
            }
            else
            {
              v25 = 0x1000000000000LL;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v25);
LABEL_151:
            if ( (KiSpeculationFeatures & 0x10000) != 0 )
            {
              if ( (KiFeatureSettings & 0x800000) == 0 )
              {
                v26 = 0x10000000000000LL;
LABEL_159:
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v26);
                goto LABEL_160;
              }
              if ( BYTE12(KiSpeculationFeatures) )
              {
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
                CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
              }
              else
              {
                if ( (KiSpeculationFeatures & 0x20000) == 0 )
                {
                  v26 = 0x20000000000000LL;
                  goto LABEL_159;
                }
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
                CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
                CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
                CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
                CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
              }
            }
LABEL_160:
            if ( Argument )
            {
              v27 = _InterlockedDecrement((volatile signed __int32 *)Argument);
              v28 = ~v27 & 0x80000000;
              if ( (v27 & 0x7FFFFFFF) != 0 )
              {
                v36 = 0;
                while ( (*(_DWORD *)Argument & 0x80000000) != v28 )
                  KeYieldProcessorEx(&v36);
              }
              else
              {
                *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v28;
              }
            }
            KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
            goto LABEL_131;
          }
          v24 = 0x400000000000000LL;
        }
        else
        {
          v24 = 0x200000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v24);
        goto LABEL_145;
      }
    }
  }
LABEL_173:
  v30 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v30;
  if ( (_WORD)v30 )
  {
    CoreProcessorSet = 0LL;
    __writemsr(0x48u, v30);
  }
  if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 && KiSsbdMsr != 72 )
  {
    v31 = KiSsbdBit | __readmsr(KiSsbdMsr);
    CoreProcessorSet = HIDWORD(v31);
    __writemsr(KiSsbdMsr, v31);
  }
  KiSetVirtualMitigationControl(CurrentPrcb, CoreProcessorSet, v9);
  return 0LL;
}
