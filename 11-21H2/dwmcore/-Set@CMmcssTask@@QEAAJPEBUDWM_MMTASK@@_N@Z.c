/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D624
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18002A558 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ @ 0x18002BC20 (-InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x18002DBC0 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18003D3E4 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D7DC (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18002BB04 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18003D934 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18003DE68 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800F4DA0 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(struct _RTL_CRITICAL_SECTION *this, const struct DWM_MMTASK *a2, char a3)
{
  const struct DWM_MMTASK *v3; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rax
  int Runtime; // eax
  unsigned int v10; // ecx
  int v11; // esi
  unsigned int v12; // ecx
  _DWORD *p_Type; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  v3 = 0LL;
  EnterCriticalSection(this);
  if ( a2 && *(_WORD *)a2 )
    v3 = a2;
  if ( !CMmcssTask::AreEqualMmTask(&this[1].DebugInfo->Type, (LPCWCH)v3) )
  {
    if ( this[1].DebugInfo )
      CMmcssTask::Revert(this);
    if ( !v3 )
    {
      p_Type = &this[1].DebugInfo->Type;
LABEL_16:
      operator delete(p_Type, 0x90uLL);
      this[1].DebugInfo = 0LL;
      goto LABEL_5;
    }
    DebugInfo = this[1].DebugInfo;
    if ( !DebugInfo )
    {
      Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
      v11 = Runtime;
      if ( Runtime < 0 )
      {
        v14 = 188;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Runtime, v14, 0LL);
        goto LABEL_20;
      }
      DebugInfo = (struct _RTL_CRITICAL_SECTION_DEBUG *)operator new(0x90uLL);
      this[1].DebugInfo = DebugInfo;
      if ( !DebugInfo )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0xC0u, 0LL);
LABEL_20:
        p_Type = &this[1].DebugInfo->Type;
        if ( !p_Type )
          goto LABEL_5;
        if ( v11 == -2147023096 )
        {
          p_Type[33] = 0;
          goto LABEL_5;
        }
        goto LABEL_16;
      }
    }
    *(_OWORD *)&DebugInfo->Type = *(_OWORD *)v3;
    DebugInfo->ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 1);
    *(_OWORD *)&DebugInfo->EntryCount = *((_OWORD *)v3 + 2);
    *(_OWORD *)&DebugInfo[1].Type = *((_OWORD *)v3 + 3);
    DebugInfo[1].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 4);
    *(_OWORD *)&DebugInfo[1].EntryCount = *((_OWORD *)v3 + 5);
    *(_OWORD *)&DebugInfo[2].Type = *((_OWORD *)v3 + 6);
    DebugInfo[2].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v3 + 7);
    *(_OWORD *)&DebugInfo[2].EntryCount = *((_OWORD *)v3 + 8);
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
    if ( !a3 )
      goto LABEL_5;
    Runtime = CMmcssTask::Apply((CMmcssTask *)this, 0);
    v11 = Runtime;
    if ( Runtime >= 0 )
      goto LABEL_5;
    v14 = 204;
    goto LABEL_19;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return 0LL;
}
