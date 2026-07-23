/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x18001F014
 * Callers:
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x180084870 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
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
  NTSTATUS ThreadPreferredUILanguages; // eax
  __int64 ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    ReturnLength = 0LL;
    if ( (int)RtlpCreateProcessRegistryInfo(&ReturnLength) < 0 || !ReturnLength )
      return 0;
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(ReturnLength + 16) )
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
      *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
    }
  }
  LODWORD(ReturnLength) = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, (PULONG)&ReturnLength);
  if ( (int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789 )
  {
    if ( NtCurrentTeb()->MergedPrefLanguages )
      return 1;
  }
  return v0;
}
