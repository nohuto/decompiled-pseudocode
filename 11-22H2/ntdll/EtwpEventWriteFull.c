/*
 * XREFs of EtwpEventWriteFull @ 0x180030348
 * Callers:
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     EvtIntReportEventWorker @ 0x180053330 (EvtIntReportEventWorker.c)
 *     EtwEventWriteEx @ 0x18007C930 (EtwEventWriteEx.c)
 *     EtwEventWriteFull @ 0x1800867E0 (EtwEventWriteFull.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x180082134 (EtwpReleasePrivateBuffers.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        _GUID *a6,
        __int128 *a7,
        int a8,
        __int64 a9)
{
  ULONG v9; // edi
  int v10; // r14d
  __int16 v11; // rsi^4
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  char v16; // si
  unsigned __int8 v17; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v19; // eax
  __int128 v21; // xmm0
  unsigned __int8 v22; // al
  ULONG v23; // eax
  _BYTE Fields[4]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v27; // [rsp+6Ch] [rbp-94h]
  unsigned __int16 v28; // [rsp+6Eh] [rbp-92h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  _GUID v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+B8h] [rbp-48h]
  __int16 v32; // [rsp+BAh] [rbp-46h]
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[144]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = (int)a2;
  v11 = WORD2(a1);
  if ( !a2 )
    return 87;
  v29 = *a2;
  v12 = ProviderHandleLookup(a1, (unsigned int)a1);
  v13 = 0LL;
  v14 = v12;
  if ( !v12 || v11 != *(_WORD *)(v12 + 84) )
    return 6;
  v15 = *((_QWORD *)&v29 + 1);
  if ( *(_BYTE *)(v12 + 236)
    && ((v22 = *(_BYTE *)(v12 + 237), BYTE4(v29) <= v22) || !v22)
    && ((*(_BYTE *)(v14 + 232) & 0x40) != 0 && !*((_QWORD *)&v29 + 1)
     || (*((_QWORD *)&v29 + 1) & *(_QWORD *)(v14 + 224)) != 0LL
     && (*((_QWORD *)&v29 + 1) & *(_QWORD *)(v14 + 216)) == *(_QWORD *)(v14 + 216)) )
  {
    v16 = 1;
    v23 = EtwpWriteToPrivateBuffers(v14, v10, a5, HIDWORD(a3), 0, (__int64)a6, (__int64)a7, a8, a9, (__int64)v37);
    v13 = 0LL;
    v9 = v23;
    if ( v23 )
    {
LABEL_33:
      EtwpReleasePrivateBuffers(v9, v37, v13);
      return v9;
    }
    v15 = *((_QWORD *)&v29 + 1);
  }
  else
  {
    v16 = 0;
  }
  if ( *(_BYTE *)(v14 + 116) )
  {
    v17 = *(_BYTE *)(v14 + 117);
    if ( (BYTE4(v29) <= v17 || !v17)
      && ((*(_BYTE *)(v14 + 112) & 0x40) != 0 && !v15
       || (v15 & *(_QWORD *)(v14 + 104)) != 0 && (v15 & *(_QWORD *)(v14 + 96)) == *(_QWORD *)(v14 + 96)) )
    {
      v28 = a5;
      v34 = a9;
      v27 = 0;
      v33 = a8;
      if ( a6 )
        ActivityId = *a6;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      v31 = 0;
      v30 = ActivityId;
      if ( a7 )
      {
        v21 = *a7;
        v31 = 1;
        v35 = v21;
      }
      v32 = a3;
      v36 = a4;
      v19 = NtTraceEvent(*(HANDLE *)(v14 + 88), 0x300u, 0x78u, Fields);
      v13 = 0LL;
      if ( v19 )
        v9 = RtlNtStatusToDosError(v19);
      else
        v9 = 0;
    }
  }
  if ( v16 )
    goto LABEL_33;
  return v9;
}
