/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B86C8
 * Callers:
 *     CitSetInfo @ 0x1C0033570 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C00B885C (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int16 v3; // r14
  __int64 v4; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  struct tagPROCESSINFO *v7; // rdi
  struct tagPROCESSINFO **v8; // rax
  struct tagPROCESSINFO **v9; // rbp
  struct _CIT_INTERACTION_SUMMARY *v10; // rsi
  char *v11; // rbx
  char *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  char v17; // al
  char v18; // al
  char v19; // al

  v2 = xmmword_1C0293D30;
  v3 = *((_WORD *)a1 + 1);
  v4 = (unsigned __int16)*(_DWORD *)a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v7 = (struct tagPROCESSINFO *)(v6 & CurrentProcessWin32Process);
  }
  v8 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v7, (const char *)v6);
  v9 = v8;
  if ( !v8 )
    return 3221225473LL;
  v10 = CitpInteractionSummaryEnsure(v2, v8, 16);
  v11 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)dword_1C02898C4 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C02898B8);
    v12 = (char *)(v9 + 13);
    v13 = 10LL;
    if ( v10 )
      v11 = (char *)v10 + 116;
  }
  else
  {
    if ( (unsigned int)dword_1C02884AC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C02884A0);
    v12 = (char *)v9 + 105;
    v13 = 11LL;
    if ( v10 )
      v11 = (char *)v10 + 124;
  }
  v14 = *v12;
  if ( v4 == 3 )
  {
    if ( v14 != -1 )
    {
      v17 = v14 + 1;
      *v12 = v17;
      if ( v17 == 1 )
        PsUpdateComponentPower(*(_QWORD *)v7, v13);
    }
    if ( v11 )
    {
      v18 = v11[3];
      if ( v18 != -1 )
      {
        v19 = v18 + 1;
        v11[3] = v19;
        if ( v19 == 1 )
          *((_DWORD *)v11 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v14 )
    {
      v15 = v14 - 1;
      *v12 = v15;
      if ( !v15 )
        PsUpdateComponentPower(*(_QWORD *)v7, v13);
    }
    if ( v11 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v11, 1u);
  }
  return 0LL;
}
