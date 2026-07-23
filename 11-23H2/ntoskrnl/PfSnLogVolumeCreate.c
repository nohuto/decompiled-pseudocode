/*
 * XREFs of PfSnLogVolumeCreate @ 0x1407DAD10
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF7B0 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PfSnLogHelper @ 0x140773AB8 (PfSnLogHelper.c)
 *     PfSnGetNLLogEntry @ 0x140773C6C (PfSnGetNLLogEntry.c)
 *     RtlUpcaseUnicodeString @ 0x140773CE0 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v5; // esi
  struct _EX_RUNDOWN_REF *v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  _DWORD *NLLogEntry; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 30);
  v2 = 0;
  v4 = *(_QWORD *)a1;
  v5 = 2 * v1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v17 = 0LL;
  v6 = PfSnLogHelper(v4, (unsigned int)(v5 + 97) >> 4, &v17);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = v17;
    *(_OWORD *)v17 = 0LL;
    *v8 = (8LL * (((unsigned int)(v5 + 97) >> 4) - 1)) | 5;
    v8[1] = v7;
    NLLogEntry = PfSnGetNLLogEntry((__int64)v8, 2, v5 + 66, *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 56));
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v5;
    DestinationString.Buffer = (wchar_t *)(NLLogEntry + 14);
    v10 = NLLogEntry[9];
    SourceString.Buffer = *(wchar_t **)(a1 + 40);
    *((_QWORD *)NLLogEntry + 3) = *(_QWORD *)(a1 + 8);
    v11 = (*(_DWORD *)(a1 + 48) ^ v10) & 0xF;
    SourceString.Length = v5;
    v12 = NLLogEntry[9] ^ v11;
    NLLogEntry[9] = v12;
    v13 = (*(_DWORD *)(a1 + 48) ^ v12) & 0xF0;
    SourceString.MaximumLength = v5;
    NLLogEntry[9] = v12 ^ v13;
    *((_QWORD *)NLLogEntry + 2) = *(_QWORD *)(a1 + 16);
    NLLogEntry[8] = *(_DWORD *)(a1 + 24);
    *((_WORD *)NLLogEntry + 20) = v5;
    *((_WORD *)NLLogEntry + 21) = v5;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *((_WORD *)NLLogEntry + *(unsigned __int16 *)(a1 + 30) + 28) = 0;
    ExReleaseRundownProtection_0(v6 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v2;
}
