/*
 * XREFs of EtwEventWriteString @ 0x180121D10
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReleasePrivateBuffers @ 0x180005168 (EtwpReleasePrivateBuffers.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  ULONG v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  REGHANDLE v11; // rsi
  UCHAR v12; // al
  bool v13; // r15
  UCHAR v14; // al
  bool v15; // si
  _GUID ActivityId; // xmm0
  __int64 v17; // rax
  NTSTATUS v18; // eax
  PCWSTR v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  _BYTE Fields[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch]
  __int128 v25; // [rsp+88h] [rbp-78h] BYREF
  _GUID v26; // [rsp+A0h] [rbp-60h] BYREF
  char v27; // [rsp+B0h] [rbp-50h]
  __int16 v28; // [rsp+B2h] [rbp-4Eh]
  int v29; // [rsp+B4h] [rbp-4Ch]
  PCWSTR *v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+D0h] [rbp-30h]
  _BYTE v32[144]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0;
  v9 = ProviderHandleLookup(RegHandle, RegHandle);
  v10 = v9;
  if ( !v9 )
    return 6;
  v11 = HIDWORD(RegHandle);
  if ( !(_WORD)v11 || (_WORD)v11 != *(_WORD *)(v9 + 96) )
    return 6;
  if ( !String )
    return 87;
  v13 = *(_BYTE *)(v9 + 124)
     && ((v12 = *(_BYTE *)(v9 + 125), Level <= v12) || !v12)
     && ((*(_BYTE *)(v10 + 120) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v10 + 112)) != 0 && (Keyword & *(_QWORD *)(v10 + 104)) == *(_QWORD *)(v10 + 104));
  v15 = *(_BYTE *)(v10 + 244)
     && ((v14 = *(_BYTE *)(v10 + 245), Level <= v14) || !v14)
     && ((*(_BYTE *)(v10 + 240) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v10 + 232)) != 0 && (Keyword & *(_QWORD *)(v10 + 224)) == *(_QWORD *)(v10 + 224));
  if ( v13 || v15 )
  {
    v29 = 1;
    *(_QWORD *)&v25 = 0LL;
    BYTE4(v25) = Level;
    v30 = &v20;
    *((_QWORD *)&v25 + 1) = Keyword;
    v24 = 4;
    ActivityId = NtCurrentTeb()->ActivityId;
    v27 = 0;
    v17 = -1LL;
    v28 = 0;
    v26 = ActivityId;
    v31 = 0;
    v20 = String;
    do
      ++v17;
    while ( String[v17] );
    v22 = 0;
    v21 = 2 * v17 + 2;
    if ( v15 )
    {
      v8 = EtwpWriteToPrivateBuffers((_BYTE *)v10, &v25, 0, 0, 4, &v26, 0LL, 1u, (__int64)&v20, (__int64)v32);
      if ( v8 )
        goto LABEL_35;
    }
    if ( v13 )
    {
      v18 = NtTraceEvent(*(HANDLE *)(v10 + 88), 0x300u, 0x78u, Fields);
      if ( v18 )
        v8 = RtlNtStatusToDosError(v18);
      else
        v8 = 0;
    }
    if ( v15 )
LABEL_35:
      EtwpReleasePrivateBuffers(v8, (__int64)v32);
  }
  return v8;
}
