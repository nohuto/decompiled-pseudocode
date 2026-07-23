/*
 * XREFs of KiMcheckFastForward @ 0x14035AB90
 * Callers:
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430C80 (KiMcheckAbort.c)
 * Callees:
 *     KiRspInIstStack @ 0x14035AD30 (KiRspInIstStack.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiMcheckFastForward(ULONG_PTR BugCheckParameter4, char a2)
{
  unsigned int v4; // r11d
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 result; // rax
  int v9; // ecx
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  _MACHINE_CHECK_CONTEXT *McheckContext; // rdx
  unsigned __int64 GsBase; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v4 = 0;
  if ( (*(_BYTE *)(BugCheckParameter4 + 368) & 1) == 0 )
  {
    if ( (unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(BugCheckParameter4 + 384)) )
      _InterlockedAdd(&KiMcheckRecursive, 1u);
    if ( (unsigned int)KiRspInIstStack(2LL, v5) )
    {
      v4 |= 2u;
      _InterlockedAdd(&dword_140C40D24, 1u);
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 360);
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailMceBegin && v6 < (unsigned __int64)&KiMcheckExitMceTailMceEnd )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C40D28, 1u);
    }
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailNmiBegin && v6 < (unsigned __int64)KiMcheckExitMceTailNmiEnd )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C40D28, 1u);
    }
    if ( KiKvaShadow )
    {
      if ( v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailMceBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailMceEnd )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C40D2C, 1u);
      }
      if ( KiKvaShadow
        && v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailNmiBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailNmiEnd )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C40D2C, 1u);
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = v4 & 1;
  if ( a2 || (v4 & 1) != 0 )
  {
    _InterlockedAdd(&dword_140C40D38, 1u);
    if ( (v4 & 1) != 0 )
      _InterlockedAdd(&dword_140C40D40, 1u);
    v9 = 1;
  }
  else
  {
    _InterlockedAdd(&dword_140C40D3C, 1u);
    v9 = 0;
  }
  if ( KiKvaShadow )
  {
    v10 = CurrentPrcb[-1].PrcbPad141[473];
    if ( a2 )
    {
      v11 = *(_QWORD *)(v10 + 52);
      goto LABEL_19;
    }
    v11 = *(_QWORD *)(v10 + 44);
  }
  else
  {
    v11 = 0LL;
    if ( a2 )
    {
LABEL_19:
      if ( (v4 & 1) != 0 )
        KeBugCheckEx(
          0x111u,
          v4,
          *(_QWORD *)(BugCheckParameter4 + 384),
          *(_QWORD *)(BugCheckParameter4 + 360),
          BugCheckParameter4);
      goto LABEL_20;
    }
  }
  McheckContext = &CurrentPrcb->McheckContext[1];
  if ( !v9 )
LABEL_20:
    McheckContext = CurrentPrcb->McheckContext;
  if ( (v4 & 4) != 0 )
  {
    _InterlockedAdd(&dword_140C40D44, 1u);
    GsBase = McheckContext->GsBase;
    if ( KiKvaShadow )
    {
      *(_QWORD *)(v11 + 16) = GsBase;
      *(_QWORD *)(v11 + 24) = McheckContext->Cr3;
      if ( (McheckContext->Cr3 & 3) != 0 && CurrentPrcb->CurrentThread->Process->AddressPolicy != 1 )
      {
        _InterlockedAdd(&dword_140C40D48, 1u);
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentPrcb->ShadowFlags, 0);
        v14 = __readcr4();
        if ( (v14 & 0x20080) != 0 )
        {
          __writecr4(v14 ^ 0x80);
          __writecr4(v14);
        }
        else
        {
          v15 = __readcr3();
          __writecr3(v15);
        }
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter4 + 104) = GsBase;
    }
    *(_OWORD *)(BugCheckParameter4 + 360) = *(_OWORD *)&McheckContext->MachineFrame.Rip;
    *(_OWORD *)(BugCheckParameter4 + 376) = *(_OWORD *)&McheckContext->MachineFrame.EFlags;
    *(_QWORD *)(BugCheckParameter4 + 392) = *(_QWORD *)&McheckContext->MachineFrame.SegSs;
    *(_QWORD *)(BugCheckParameter4 + 48) = McheckContext->Rax;
    *(_QWORD *)(BugCheckParameter4 + 56) = McheckContext->Rcx;
    result = McheckContext->Rdx;
    *(_QWORD *)(BugCheckParameter4 + 64) = result;
    _InterlockedAdd(&dword_140C40D34, 1u);
    McheckContext->MachineFrame.SegCs = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd(&dword_140C40D30, 1u);
    *(_OWORD *)&McheckContext->MachineFrame.Rip = *(_OWORD *)(BugCheckParameter4 + 360);
    *(_OWORD *)&McheckContext->MachineFrame.EFlags = *(_OWORD *)(BugCheckParameter4 + 376);
    *(_QWORD *)&McheckContext->MachineFrame.SegSs = *(_QWORD *)(BugCheckParameter4 + 392);
    McheckContext->Rax = *(_QWORD *)(BugCheckParameter4 + 48);
    McheckContext->Rcx = *(_QWORD *)(BugCheckParameter4 + 56);
    McheckContext->Rdx = *(_QWORD *)(BugCheckParameter4 + 64);
    result = *(_QWORD *)(BugCheckParameter4 + 104);
    McheckContext->GsBase = result;
    if ( KiKvaShadow )
    {
      McheckContext->GsBase = *(_QWORD *)(v11 + 16);
      result = *(_QWORD *)(v11 + 24);
      McheckContext->Cr3 = result;
    }
  }
  return result;
}
