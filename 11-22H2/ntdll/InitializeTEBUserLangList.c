/*
 * XREFs of InitializeTEBUserLangList @ 0x180012C28
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180070640 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080A70 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpUpdateTEBLanguage @ 0x180070548 (RtlpUpdateTEBLanguage.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  struct _TEB *v2; // r8
  unsigned int v3; // r10d
  int updated; // edi
  unsigned int v7; // r14d
  int WowTebOffset; // eax
  bool v9; // si
  bool v10; // bp
  bool v11; // r15
  struct _TEB *v12; // rdx
  __int64 v13; // rax
  struct _TEB *v14; // rcx
  __int64 v15; // rax
  unsigned int MuiImpersonation; // edx
  unsigned int v17; // r9d
  struct _TEB *v18; // rax
  void *UserPrefLanguages; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  int v25; // r8d
  _DWORD *v26; // rcx
  int v27; // eax
  bool v28; // zf
  struct _TEB *v30; // r8
  int v31; // eax
  struct _TEB *v32; // rdx
  __int64 v33; // rax
  struct _TEB *v34; // rcx
  __int64 v35; // rax
  char v36; // cl
  __int64 v37; // rcx
  unsigned int v38; // r8d
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // [rsp+80h] [rbp+18h] BYREF
  __int64 v42; // [rsp+88h] [rbp+20h] BYREF

  v2 = NtCurrentTeb();
  v3 = 0;
  v41 = 0LL;
  v42 = 0LL;
  updated = 0;
  v7 = 0;
  WowTebOffset = v2->WowTebOffset;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( WowTebOffset < 0 )
    LODWORD(v2) = WowTebOffset + (_DWORD)v2;
  v12 = NtCurrentTeb();
  v13 = v12->WowTebOffset;
  if ( (int)v13 < 0 )
    v12 = (struct _TEB *)((char *)v12 + v13);
  v14 = NtCurrentTeb();
  v15 = v14->WowTebOffset;
  if ( (_DWORD)v2 == LODWORD(v12->NtTib.SubSystemTib) )
  {
    if ( (int)v15 < 0 )
      v14 = (struct _TEB *)((char *)v14 + v15);
    MuiImpersonation = HIDWORD(v14->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v15 < 0 )
      v14 = (struct _TEB *)((char *)v14 + v15);
    MuiImpersonation = v14->MuiImpersonation;
  }
  v17 = MEMORY[0x7FFE03A4];
  v18 = NtCurrentTeb();
  if ( !MEMORY[0x7FFE03A4] )
    v17 = 1;
  UserPrefLanguages = v18->UserPrefLanguages;
  if ( a2 )
  {
    v20 = *(_QWORD *)(a2 + 24);
    if ( v20 )
    {
      if ( *(_WORD *)(v20 + 6) )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 )
        {
          if ( MuiImpersonation >= v17 )
            goto LABEL_16;
          if ( *(_WORD *)(v20 + 6) > 1u )
          {
            v11 = 1;
          }
          else if ( (*(_BYTE *)v21 & 1) == 0 )
          {
            v38 = 0;
            do
            {
              v39 = v38 + 1;
              if ( ((*(_WORD *)(v21 + 8) >> (2 * v3)) & 3) == 0 )
                v39 = v38;
              ++v3;
              v38 = v39;
            }
            while ( v3 < 3 );
            updated = 0;
            v11 = v39 > 1;
          }
          v30 = NtCurrentTeb();
          v31 = v30->WowTebOffset;
          if ( v31 < 0 )
            LODWORD(v30) = v31 + (_DWORD)v30;
          v32 = NtCurrentTeb();
          v33 = v32->WowTebOffset;
          if ( (int)v33 < 0 )
            v32 = (struct _TEB *)((char *)v32 + v33);
          v34 = NtCurrentTeb();
          v35 = v34->WowTebOffset;
          if ( (_DWORD)v30 == LODWORD(v32->NtTib.SubSystemTib) )
          {
            if ( (int)v35 < 0 )
              v34 = (struct _TEB *)((char *)v34 + v35);
            HIDWORD(v34->glDispatchTable[186]) = v17;
          }
          else
          {
            if ( (int)v35 < 0 )
              v34 = (struct _TEB *)((char *)v34 + v35);
            v34->MuiImpersonation = v17;
          }
          if ( v11 )
          {
            if ( !UserPrefLanguages )
              goto LABEL_26;
            v23 = *(_DWORD **)UserPrefLanguages;
            v24 = *(_DWORD **)UserPrefLanguages;
            if ( !*(_QWORD *)UserPrefLanguages )
              goto LABEL_26;
          }
          else
          {
LABEL_16:
            if ( !UserPrefLanguages )
            {
LABEL_46:
              if ( !a1 && !v10 )
              {
                v36 = 1;
                if ( !v9 )
                {
LABEL_49:
                  updated = InitializeUserOrMachineLangList(a2, 1, (unsigned int)&v41, 3 - (unsigned int)(a1 != 0), v36);
                  if ( updated >= 0 )
                  {
                    v37 = v41;
                    if ( v41 )
                    {
                      if ( a1 )
                        *(_DWORD *)(v41 + 40) |= 0x20u;
                      else
                        *(_DWORD *)(v41 + 40) |= 0x10u;
                      if ( v10 )
                        *(_DWORD *)(v37 + 40) |= 2u;
                      if ( v9 )
                        *(_DWORD *)(v37 + 40) |= 4u;
                      if ( v10 || v9 )
                        *(_DWORD *)(v37 + 40) |= v7;
                      updated = RtlpUpdateTEBLanguage(v37, 0LL, 4LL);
                    }
                    if ( v11 )
                    {
                      v40 = RtlpLoadLanguageConfigList(8, &v42, a2);
                      updated = v40;
                      if ( v40 >= 0 )
                        return (unsigned int)RtlpUpdateTEBLanguage(0LL, v42, 5LL);
                    }
                  }
                  return (unsigned int)updated;
                }
              }
LABEL_63:
              v36 = 0;
              goto LABEL_49;
            }
            if ( !*(_QWORD *)UserPrefLanguages
              || (v22 = *(_QWORD *)(*(_QWORD *)UserPrefLanguages + 16LL)) == 0
              || *(_DWORD *)(v22 + 12) >= *(_DWORD *)(a2 + 12) )
            {
LABEL_29:
              v26 = *(_DWORD **)UserPrefLanguages;
              if ( *(_QWORD *)UserPrefLanguages )
              {
                v27 = v26[10];
                if ( a1 )
                  v28 = (v27 & 0x20) == 0;
                else
                  v28 = (v27 & 0x10) == 0;
                if ( !v28 )
                  return (unsigned int)updated;
                if ( (v27 & 2) != 0 )
                  v10 = 1;
                if ( (v27 & 4) != 0 )
                  v9 = 1;
                if ( v10 || v9 )
                  v7 = v27 & 0xFFFF0000;
                RtlpMuiRegFreeLanguageList(v26);
                *(_QWORD *)UserPrefLanguages = 0LL;
                if ( NtCurrentTeb()->MergedPrefLanguages )
                {
                  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                  NtCurrentTeb()->MergedPrefLanguages = 0LL;
                }
              }
LABEL_62:
              if ( v11 )
                goto LABEL_63;
              goto LABEL_46;
            }
            v23 = *(_DWORD **)UserPrefLanguages;
            v24 = *(_DWORD **)UserPrefLanguages;
          }
          v25 = v24[10];
          v10 = (v25 & 2) != 0;
          v9 = (v25 & 4) != 0;
          if ( (v25 & 2) != 0 || (v24[10] & 4) != 0 )
            v7 = v25 & 0xFFFF0000;
          RtlpMuiRegFreeLanguageList(v23);
          *(_QWORD *)UserPrefLanguages = 0LL;
LABEL_26:
          if ( NtCurrentTeb()->MergedPrefLanguages )
            *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
          if ( !UserPrefLanguages )
            goto LABEL_62;
          goto LABEL_29;
        }
      }
    }
  }
  return 3221225485LL;
}
