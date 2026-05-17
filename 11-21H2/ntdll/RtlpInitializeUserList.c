/*
 * XREFs of RtlpInitializeUserList @ 0x18006E308
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18006DEA0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     InitializeUserOrMachineLangList @ 0x18004D8E4 (InitializeUserOrMachineLangList.c)
 *     RtlpUpdateTEBLanguage @ 0x18006E500 (RtlpUpdateTEBLanguage.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1)
{
  int updated; // r8d
  int v4; // edi
  struct _TEB *v5; // rdx
  int WowTebOffset; // eax
  struct _TEB *v7; // r8
  __int64 v8; // rax
  struct _TEB *v9; // rcx
  __int64 v10; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v12; // rcx
  struct _TEB *v13; // rdx
  int v14; // eax
  struct _TEB *v15; // r9
  __int64 v16; // rax
  struct _TEB *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  struct _TEB *v20; // rcx
  int v21; // eax
  struct _TEB *v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  struct _TEB *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF
  __int64 v29; // [rsp+50h] [rbp+18h] BYREF

  updated = 0;
  v28 = 0LL;
  v29 = 0LL;
  if ( !NtCurrentTeb()->UserPrefLanguages || !*(_QWORD *)NtCurrentTeb()->UserPrefLanguages )
  {
    if ( a1 )
    {
      v4 = 1;
      updated = InitializeUserOrMachineLangList(a1, 1u, &v28, 3, 0);
      if ( updated >= 0 )
      {
        v5 = NtCurrentTeb();
        WowTebOffset = v5->WowTebOffset;
        if ( WowTebOffset < 0 )
          LODWORD(v5) = WowTebOffset + (_DWORD)v5;
        v7 = NtCurrentTeb();
        v8 = v7->WowTebOffset;
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        v9 = NtCurrentTeb();
        v10 = v9->WowTebOffset;
        if ( (_DWORD)v5 == LODWORD(v7->NtTib.SubSystemTib) )
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = HIDWORD(v9->glDispatchTable[186]);
        }
        else
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = v9->MuiImpersonation;
        }
        if ( MuiImpersonation || (updated = RtlpLoadLanguageConfigList(8LL, &v29, a1), updated >= 0) )
        {
          v12 = v28;
          *(_DWORD *)(v28 + 40) |= 0x10u;
          updated = RtlpUpdateTEBLanguage(v12, 0LL, 4LL);
          if ( updated >= 0 && v29 )
            updated = RtlpUpdateTEBLanguage(0LL, v29, 5LL);
          v13 = NtCurrentTeb();
          v14 = v13->WowTebOffset;
          if ( v14 < 0 )
            LODWORD(v13) = v14 + (_DWORD)v13;
          v15 = NtCurrentTeb();
          v16 = v15->WowTebOffset;
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          v17 = NtCurrentTeb();
          v18 = v17->WowTebOffset;
          if ( (_DWORD)v13 == LODWORD(v15->NtTib.SubSystemTib) )
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            v19 = HIDWORD(v17->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            v19 = v17->MuiImpersonation;
          }
          if ( !v19 )
          {
            v20 = NtCurrentTeb();
            v21 = v20->WowTebOffset;
            if ( v21 < 0 )
              LODWORD(v20) = v21 + (_DWORD)v20;
            v22 = NtCurrentTeb();
            v23 = v22->WowTebOffset;
            if ( (int)v23 < 0 )
              v22 = (struct _TEB *)((char *)v22 + v23);
            v24 = (_DWORD)v20 == LODWORD(v22->NtTib.SubSystemTib);
            v25 = NtCurrentTeb();
            if ( v24 )
            {
              if ( MEMORY[0x7FFE03A4] )
                v4 = MEMORY[0x7FFE03A4];
              v27 = v25->WowTebOffset;
              if ( (int)v27 < 0 )
                v25 = (struct _TEB *)((char *)v25 + v27);
              HIDWORD(v25->glDispatchTable[186]) = v4;
            }
            else
            {
              if ( MEMORY[0x7FFE03A4] )
                v4 = MEMORY[0x7FFE03A4];
              v26 = v25->WowTebOffset;
              if ( (int)v26 < 0 )
                v25 = (struct _TEB *)((char *)v25 + v26);
              v25->MuiImpersonation = v4;
            }
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)updated;
}
