/*
 * XREFs of PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A79CC (PopPowerRequestStatsCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     PsGetCurrentProcess @ 0x140317A00 (PsGetCurrentProcess.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A8140 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     PopPowerRequestStatsFreeId @ 0x1407A86F4 (PopPowerRequestStatsFreeId.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A87B8 (PopAnsiStringToUnicodeString.c)
 *     PopPowerRequestStatsIdConcat @ 0x1407A8CC0 (PopPowerRequestStatsIdConcat.c)
 *     PopUnicodeStringDeepCopy @ 0x1408599E0 (PopUnicodeStringDeepCopy.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // rbx
  char v6; // r14
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  signed int v10; // esi
  char *Pool2; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  UNICODE_STRING *v14; // rbp
  _KPROCESS *CurrentProcess; // rax
  int v16; // eax
  UNICODE_STRING v17; // xmm0
  __int64 v19; // rsi
  const WCHAR *i; // rbp
  __int64 v21; // rax
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
    if ( *(_DWORD *)v2 )
    {
      CurrentProcess = PsGetCurrentProcess();
      RtlInitAnsiString(&DestinationString, (PCSZ)&CurrentProcess[1].ActiveProcessors);
      v14 = (UNICODE_STRING *)(Pool2 + 8);
      v10 = PopAnsiStringToUnicodeString((PUNICODE_STRING)(Pool2 + 8), &DestinationString);
      if ( v10 < 0 )
        goto LABEL_26;
      *(_DWORD *)Pool2 |= 2u;
    }
    else
    {
      v12 = *(_QWORD *)(v2 + 8);
      if ( v12 && (v13 = *(_QWORD *)(v12 + 8)) != 0 )
      {
        v14 = (UNICODE_STRING *)(Pool2 + 8);
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v13 + 56);
      }
      else
      {
        v14 = (UNICODE_STRING *)(Pool2 + 8);
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 8), UNIDENTIFIED_DRIVER);
      }
    }
    v16 = *(_DWORD *)Pool2;
    if ( v6 )
    {
      *(_DWORD *)Pool2 = v16 | 1;
      *((_WORD *)Pool2 + 20) = *(_WORD *)(v5 + 16);
      *((_DWORD *)Pool2 + 11) = *(_DWORD *)(v5 + 20);
      RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
      v19 = 0LL;
      for ( i = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
            (unsigned int)v19 < *((_DWORD *)Pool2 + 11);
            i = (const WCHAR *)((char *)i + *(unsigned __int16 *)&Pool2[8 * v21] + 2) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&Pool2[16 * v19 + 48], i);
        v21 = 2 * (v19 + 3);
        v19 = (unsigned int)(v19 + 1);
      }
      goto LABEL_30;
    }
    if ( (v16 & 2) != 0 )
    {
LABEL_23:
      if ( v5 )
      {
        if ( (*(_DWORD *)v5 & 1) != 0 )
        {
          RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
          v10 = PopPowerRequestStatsIdConcat(v14, &SourceString);
          if ( v10 < 0 )
            goto LABEL_26;
        }
      }
LABEL_30:
      *a2 = Pool2;
      return 0;
    }
    SourceString = 0LL;
    v10 = PopUnicodeStringDeepCopy(&SourceString, v14);
    if ( v10 >= 0 )
    {
      v17 = SourceString;
      *(_DWORD *)Pool2 |= 2u;
      *v14 = v17;
      goto LABEL_23;
    }
LABEL_26:
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
