/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x180042F40
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180041A78 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x180066B4C (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AE0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 */

char LdrpSetThreadPreferredLangList()
{
  char v0; // bl
  struct _TEB *v1; // rdx
  int WowTebOffset; // eax
  struct _TEB *v3; // r8
  __int64 v4; // rax
  struct _TEB *v5; // rcx
  __int64 v6; // rax
  unsigned int MuiImpersonation; // eax
  struct _TEB *v9; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    v11 = 0LL;
    if ( (int)RtlpCreateProcessRegistryInfo(&v11) < 0 || !v11 )
      return 0;
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v11 + 16) )
    {
      v1 = NtCurrentTeb();
      WowTebOffset = v1->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v1) = WowTebOffset + (_DWORD)v1;
      v3 = NtCurrentTeb();
      v4 = v3->WowTebOffset;
      if ( (int)v4 < 0 )
        v3 = (struct _TEB *)((char *)v3 + v4);
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (_DWORD)v1 == LODWORD(v3->NtTib.SubSystemTib) )
      {
        if ( (int)v6 < 0 )
          v5 = (struct _TEB *)((char *)v5 + v6);
        MuiImpersonation = HIDWORD(v5->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v6 < 0 )
          v5 = (struct _TEB *)((char *)v5 + v6);
        MuiImpersonation = v5->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
    }
    else
    {
      v9 = NtCurrentTeb();
      *((_DWORD *)v9->MergedPrefLanguages + 10) |= 0x80u;
    }
  }
  LODWORD(v11) = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48LL, &v12, 0LL, &v11);
  if ( (int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789 )
  {
    if ( NtCurrentTeb()->MergedPrefLanguages )
      return 1;
  }
  return v0;
}
