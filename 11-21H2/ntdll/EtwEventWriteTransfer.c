/*
 * XREFs of EtwEventWriteTransfer @ 0x180004F40
 * Callers:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 * Callees:
 *     EtwpReleasePrivateBuffers @ 0x180005168 (EtwpReleasePrivateBuffers.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
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
  __int64 v11; // rax
  __int64 v12; // rbx
  REGHANDLE v13; // rsi
  unsigned __int64 Keyword; // rdx
  unsigned __int8 v15; // al
  char v16; // si
  unsigned __int8 v17; // al
  _GUID v18; // xmm0
  GUID v19; // xmm0
  NTSTATUS v20; // eax
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
  if ( !EventDescriptor )
    return 87;
  v24 = *EventDescriptor;
  v11 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
  v12 = v11;
  if ( !v11 )
    return 6;
  v13 = HIDWORD(RegHandle);
  if ( !(_WORD)v13 || (_WORD)v13 != *(_WORD *)(v11 + 96) )
    return 6;
  Keyword = v24.Keyword;
  if ( *(_BYTE *)(v11 + 244)
    && ((v15 = *(_BYTE *)(v11 + 245), v24.Level <= v15) || !v15)
    && ((*(_BYTE *)(v12 + 240) & 0x40) != 0 && !v24.Keyword
     || (v24.Keyword & *(_QWORD *)(v12 + 232)) != 0 && (v24.Keyword & *(_QWORD *)(v12 + 224)) == *(_QWORD *)(v12 + 224)) )
  {
    v16 = 1;
    v6 = EtwpWriteToPrivateBuffers(
           v12,
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
LABEL_32:
      EtwpReleasePrivateBuffers(v6, v32);
      return v6;
    }
    Keyword = v24.Keyword;
  }
  else
  {
    v16 = 0;
  }
  if ( *(_BYTE *)(v12 + 124) )
  {
    v17 = *(_BYTE *)(v12 + 125);
    if ( (v24.Level <= v17 || !v17)
      && ((*(_BYTE *)(v12 + 120) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(v12 + 112)) != 0 && (Keyword & *(_QWORD *)(v12 + 104)) == *(_QWORD *)(v12 + 104)) )
    {
      v23 = 0;
      v28 = UserDataCount;
      v29 = UserData;
      if ( ActivityId )
        v18 = *ActivityId;
      else
        v18 = NtCurrentTeb()->ActivityId;
      v26 = 0;
      v25 = v18;
      if ( RelatedActivityId )
      {
        v19 = *RelatedActivityId;
        v26 = 1;
        v30 = v19;
      }
      v27 = 0;
      v31 = 0;
      v20 = NtTraceEvent(*(HANDLE *)(v12 + 88), 0x300u, 0x78u, Fields);
      if ( v20 )
        v6 = RtlNtStatusToDosError(v20);
      else
        v6 = 0;
    }
  }
  if ( v16 )
    goto LABEL_32;
  return v6;
}
