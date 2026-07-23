/*
 * XREFs of PopPowerRequestStatsGetIdForRequest @ 0x1407A8268
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A7CEC (PopPowerRequestStatsCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     PsGetCurrentProcess @ 0x140317590 (PsGetCurrentProcess.c)
 *     Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994 (Feature_2932140347__private_IsEnabledDeviceUsage.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A84C0 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     PopPowerRequestStatsFreeId @ 0x1407A8AB4 (PopPowerRequestStatsFreeId.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A8B78 (PopAnsiStringToUnicodeString.c)
 *     PopPowerRequestStatsIdConcat @ 0x1407A9080 (PopPowerRequestStatsIdConcat.c)
 *     PopUnicodeStringDeepCopy @ 0x14085A324 (PopUnicodeStringDeepCopy.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // r14
  char v6; // r15
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  signed int v10; // ebx
  char *Pool2; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  UNICODE_STRING *v14; // rsi
  const WCHAR *v15; // rdx
  __int64 v16; // rdx
  const CHAR *p_ActiveProcessors; // rdx
  int v18; // eax
  UNICODE_STRING v19; // xmm0
  __int64 v21; // rsi
  const WCHAR *i; // rbp
  __int64 v23; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  SourceString = 0LL;
  IsDetailedRequestReason = PopPowerRequestStatsIsDetailedRequestReason(v2);
  v5 = 0LL;
  v6 = IsDetailedRequestReason;
  if ( !*(_QWORD *)(v2 + 48) || (v5 = (v2 + 63) & 0xFFFFFFFFFFFFFFF8uLL, !IsDetailedRequestReason) )
  {
LABEL_8:
    v7 = 64;
LABEL_9:
    Pool2 = (char *)ExAllocatePool2(256LL, v7, 1414616912LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( !*(_DWORD *)v2 )
    {
      v12 = *(_QWORD *)(v2 + 8);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          v14 = (UNICODE_STRING *)(Pool2 + 8);
          *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v13 + 56);
          goto LABEL_25;
        }
      }
      v14 = (UNICODE_STRING *)(Pool2 + 8);
      v15 = UNIDENTIFIED_DRIVER;
LABEL_17:
      RtlInitUnicodeString(v14, v15);
      goto LABEL_25;
    }
    v14 = (UNICODE_STRING *)(Pool2 + 8);
    if ( (unsigned int)Feature_2932140347__private_IsEnabledDeviceUsage() )
    {
      p_ActiveProcessors = (const CHAR *)&PsGetCurrentProcess()[1].ActiveProcessors;
    }
    else
    {
      v16 = *(_QWORD *)(v2 + 8);
      if ( !v16 )
      {
        v15 = UNIDENTIFIED_PROCESS;
        goto LABEL_17;
      }
      p_ActiveProcessors = (const CHAR *)(v16 + 1448);
    }
    RtlInitAnsiString(&DestinationString, p_ActiveProcessors);
    v10 = PopAnsiStringToUnicodeString((PUNICODE_STRING)(Pool2 + 8), &DestinationString);
    if ( v10 < 0 )
      goto LABEL_32;
    *(_DWORD *)Pool2 |= 2u;
LABEL_25:
    v18 = *(_DWORD *)Pool2;
    if ( v6 )
    {
      *(_DWORD *)Pool2 = v18 | 1;
      *((_WORD *)Pool2 + 20) = *(_WORD *)(v5 + 16);
      *((_DWORD *)Pool2 + 11) = *(_DWORD *)(v5 + 20);
      RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
      v21 = 0LL;
      for ( i = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
            (unsigned int)v21 < *((_DWORD *)Pool2 + 11);
            i = (const WCHAR *)((char *)i + *(unsigned __int16 *)&Pool2[8 * v23] + 2) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&Pool2[16 * v21 + 48], i);
        v23 = 2 * (v21 + 3);
        v21 = (unsigned int)(v21 + 1);
      }
      goto LABEL_36;
    }
    if ( (v18 & 2) != 0 )
    {
LABEL_29:
      if ( v5 )
      {
        if ( (*(_DWORD *)v5 & 1) != 0 )
        {
          RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
          v10 = PopPowerRequestStatsIdConcat(v14, &SourceString);
          if ( v10 < 0 )
            goto LABEL_32;
        }
      }
LABEL_36:
      *a2 = Pool2;
      return 0;
    }
    SourceString = 0LL;
    v10 = PopUnicodeStringDeepCopy(&SourceString, v14);
    if ( v10 >= 0 )
    {
      v19 = SourceString;
      *(_DWORD *)Pool2 |= 2u;
      *v14 = v19;
      goto LABEL_29;
    }
LABEL_32:
    PopPowerRequestStatsFreeId(Pool2);
    return (unsigned int)v10;
  }
  v7 = -1;
  v8 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v9 = v8 + 48;
  if ( (int)v8 + 48 >= (unsigned int)v8 )
    v7 = v8 + 48;
  v10 = v9 < (unsigned int)v8 ? 0xC0000095 : 0;
  if ( v9 >= (unsigned int)v8 )
  {
    if ( v7 > 0x40 )
      goto LABEL_9;
    goto LABEL_8;
  }
  return (unsigned int)v10;
}
