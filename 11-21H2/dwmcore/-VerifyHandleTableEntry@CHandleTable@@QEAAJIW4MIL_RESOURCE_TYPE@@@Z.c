/*
 * XREFs of ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070D3C
 * Callers:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180070C60 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 */

__int64 __fastcall CHandleTable::VerifyHandleTableEntry(CHandleTable *a1, unsigned int a2, int a3)
{
  unsigned int v6; // esi
  unsigned int *Entry; // rax
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &g_csCompositionEngine;
  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  Entry = (unsigned int *)CHandleTable::GetEntry(a1, a2);
  if ( !Entry || Entry[2] )
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024890, 0x159u, 0LL);
  }
  else if ( a3 )
  {
    v10 = *Entry;
    if ( *Entry - 1 > 0xCD )
    {
LABEL_8:
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x15Fu, 0LL);
    }
    else
    {
      while ( v10 != a3 )
      {
        v10 = dword_1803681D0[v10];
        if ( !v10 )
          goto LABEL_8;
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v6;
}
