/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18008A420 (RtlpInitializeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18000A078 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A360 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A450 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000A664 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A0D80 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180111520 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Heap; // rax
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  int v6; // edi
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF
  HANDLE v17; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h] BYREF

  v1 = 0LL;
  v16 = 0LL;
  if ( !a1 || *a1 )
  {
    v6 = -1073741811;
    goto LABEL_15;
  }
  v15 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, 0LL) < 0 )
  {
LABEL_17:
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v16 = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v6 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095);
      if ( v6 >= 0 )
      {
        v6 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 0xFFFu);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v16);
        v1 = 0LL;
      }
      goto LABEL_15;
    }
LABEL_21:
    v6 = -1073741801;
    goto LABEL_15;
  }
  if ( !v15 )
    goto LABEL_21;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v15);
  v4 = (_DWORD *)Heap;
  if ( !Heap )
  {
    v1 = v16;
    goto LABEL_21;
  }
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, Heap) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, v15, &v16) < 0
    || (v1 = v16, v6 = RtlpMuiRegAddNeutralToInstalled(v16), v6 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v1 + 40) && (int)OpenGlobalizationUserSettingsKey(0x2000000LL, v5, &Handle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    v17 = 0LL;
    v11 = Handle;
    v10 = 48;
    p_DestinationString = &DestinationString;
    v13 = 64;
    v14 = 0LL;
    if ( (int)NtOpenKey(&v17, 131097LL, &v10) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4);
      NtClose(v17);
    }
    NtClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568);
LABEL_15:
  *a1 = v1;
  return (unsigned int)v6;
}
