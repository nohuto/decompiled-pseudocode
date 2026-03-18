/*
 * XREFs of ?RemoveChild@CChannel@@AEAAXII@Z @ 0x180073CFC
 * Callers:
 *     ?VisualMoveChild@CChannel@@UEAAJIII@Z @ 0x180070290 (-VisualMoveChild@CChannel@@UEAAJIII@Z.c)
 *     ?VisualRemoveChild@CChannel@@UEAAJII@Z @ 0x1800704C0 (-VisualRemoveChild@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CChannel::RemoveChild(CChannel *this, __int64 a2, unsigned int a3)
{
  int v5; // esi
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  __int64 v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v9 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  Entry = CHandleTable::GetEntry((CChannel *)((char *)this + 16), a3);
  if ( !Entry || *((_DWORD *)Entry + 2) )
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024890, 0x191u);
  }
  else
  {
    *((_DWORD *)Entry + 3) = 0;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
}
