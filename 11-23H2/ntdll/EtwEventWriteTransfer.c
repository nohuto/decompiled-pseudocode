/*
 * XREFs of EtwEventWriteTransfer @ 0x180030320
 * Callers:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x1800827A4 (EtwpReleasePrivateBuffers.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v6; // edi
  int v9; // r14d
  __int16 v10; // rsi^4
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 Keyword; // rdx
  char v15; // si
  unsigned __int8 v16; // al
  _GUID v17; // xmm0
  NTSTATUS v18; // eax
  unsigned __int8 v20; // al
  GUID v21; // xmm0
  _BYTE Fields[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h]
  EVENT_DESCRIPTOR v24; // [rsp+80h] [rbp-80h]
  _GUID v25; // [rsp+98h] [rbp-68h]
  char v26; // [rsp+A8h] [rbp-58h]
  __int16 v27; // [rsp+AAh] [rbp-56h]
  ULONG v28; // [rsp+ACh] [rbp-54h]
  PEVENT_DATA_DESCRIPTOR v29; // [rsp+B0h] [rbp-50h]
  GUID v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[144]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = 0;
  v9 = (int)EventDescriptor;
  v10 = WORD2(RegHandle);
  if ( !EventDescriptor )
    return 87;
  v24 = *EventDescriptor;
  v11 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
  v13 = v11;
  if ( !v11 || v10 != *(_WORD *)(v11 + 84) )
    return 6;
  Keyword = v24.Keyword;
  if ( *(_BYTE *)(v11 + 236)
    && ((v20 = *(_BYTE *)(v11 + 237), v24.Level <= v20) || !v20)
    && ((*(_BYTE *)(v13 + 232) & 0x40) != 0 && !v24.Keyword
     || (v24.Keyword & *(_QWORD *)(v13 + 224)) != 0 && (v24.Keyword & *(_QWORD *)(v13 + 216)) == *(_QWORD *)(v13 + 216)) )
  {
    v15 = 1;
    v6 = EtwpWriteToPrivateBuffers(
           v13,
           v9,
           0,
           0,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData,
           (__int64)v32);
    if ( v6 )
    {
LABEL_30:
      EtwpReleasePrivateBuffers(v6, v32, v12);
      return v6;
    }
    Keyword = v24.Keyword;
  }
  else
  {
    v15 = 0;
  }
  if ( *(_BYTE *)(v13 + 116) )
  {
    v16 = *(_BYTE *)(v13 + 117);
    if ( (v24.Level <= v16 || !v16)
      && ((*(_BYTE *)(v13 + 112) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(v13 + 104)) != 0 && (Keyword & *(_QWORD *)(v13 + 96)) == *(_QWORD *)(v13 + 96)) )
    {
      v23 = 0;
      v28 = UserDataCount;
      v29 = UserData;
      if ( ActivityId )
        v17 = *ActivityId;
      else
        v17 = NtCurrentTeb()->ActivityId;
      v26 = 0;
      v25 = v17;
      if ( RelatedActivityId )
      {
        v21 = *RelatedActivityId;
        v26 = 1;
        v30 = v21;
      }
      v27 = 0;
      v31 = 0;
      v18 = NtTraceEvent(*(HANDLE *)(v13 + 88), 0x300u, 0x78u, Fields);
      if ( v18 )
        v6 = RtlNtStatusToDosError(v18);
      else
        v6 = 0;
    }
  }
  if ( v15 )
    goto LABEL_30;
  return v6;
}
