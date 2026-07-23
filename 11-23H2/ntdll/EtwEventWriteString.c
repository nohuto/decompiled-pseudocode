/*
 * XREFs of EtwEventWriteString @ 0x180124E60
 * Callers:
 *     <none>
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x1800827A4 (EtwpReleasePrivateBuffers.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  __int16 v7; // rsi^4
  ULONG v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  UCHAR v11; // al
  bool v12; // r15
  UCHAR v13; // al
  bool v14; // si
  _GUID ActivityId; // xmm0
  __int64 v16; // rax
  NTSTATUS v17; // eax
  PCWSTR v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  _BYTE Fields[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch]
  __int128 v24; // [rsp+88h] [rbp-78h] BYREF
  _GUID v25; // [rsp+A0h] [rbp-60h] BYREF
  char v26; // [rsp+B0h] [rbp-50h]
  __int16 v27; // [rsp+B2h] [rbp-4Eh]
  int v28; // [rsp+B4h] [rbp-4Ch]
  PCWSTR *v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+D0h] [rbp-30h]
  _BYTE v31[144]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = WORD2(RegHandle);
  v8 = 0;
  v9 = ProviderHandleLookup(RegHandle, RegHandle);
  v10 = v9;
  if ( !v9 || v7 != *(_WORD *)(v9 + 84) )
    return 6;
  if ( !String )
    return 87;
  v12 = *(_BYTE *)(v9 + 116)
     && ((v11 = *(_BYTE *)(v9 + 117), Level <= v11) || !v11)
     && ((*(_BYTE *)(v10 + 112) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v10 + 104)) != 0 && (Keyword & *(_QWORD *)(v10 + 96)) == *(_QWORD *)(v10 + 96));
  v14 = *(_BYTE *)(v10 + 236)
     && ((v13 = *(_BYTE *)(v10 + 237), Level <= v13) || !v13)
     && ((*(_BYTE *)(v10 + 232) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v10 + 224)) != 0 && (Keyword & *(_QWORD *)(v10 + 216)) == *(_QWORD *)(v10 + 216));
  if ( v12 || v14 )
  {
    v28 = 1;
    *(_QWORD *)&v24 = 0LL;
    BYTE4(v24) = Level;
    v29 = &v19;
    *((_QWORD *)&v24 + 1) = Keyword;
    v23 = 4;
    ActivityId = NtCurrentTeb()->ActivityId;
    v26 = 0;
    v16 = -1LL;
    v27 = 0;
    v25 = ActivityId;
    v30 = 0;
    v19 = String;
    do
      ++v16;
    while ( String[v16] );
    v21 = 0;
    v20 = 2 * v16 + 2;
    if ( v14 )
    {
      v8 = EtwpWriteToPrivateBuffers((_BYTE *)v10, &v24, 0, 0, 4, &v25, 0LL, 1u, (__int64)&v19, (__int64)v31);
      if ( v8 )
        goto LABEL_34;
    }
    if ( v12 )
    {
      v17 = NtTraceEvent(*(HANDLE *)(v10 + 88), 0x300u, 0x78u, Fields);
      if ( v17 )
        v8 = RtlNtStatusToDosError(v17);
      else
        v8 = 0;
    }
    if ( v14 )
LABEL_34:
      EtwpReleasePrivateBuffers(v8, (__int64)v31);
  }
  return v8;
}
