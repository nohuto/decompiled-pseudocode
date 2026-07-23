/*
 * XREFs of EtwpEventWriteFull @ 0x180006228
 * Callers:
 *     EvtIntReportEventWorker @ 0x180005D70 (EvtIntReportEventWorker.c)
 *     EtwEventWriteFull @ 0x180006140 (EtwEventWriteFull.c)
 *     EtwEventWriteEx @ 0x180006190 (EtwEventWriteEx.c)
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 * Callees:
 *     EtwpReleasePrivateBuffers @ 0x180005168 (EtwpReleasePrivateBuffers.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        unsigned __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        __int16 a5,
        _GUID *a6,
        __int128 *a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v9; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  char v17; // si
  unsigned __int8 v18; // al
  _GUID ActivityId; // xmm0
  __int128 v20; // xmm0
  NTSTATUS v21; // eax
  _BYTE Fields[4]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v26; // [rsp+6Ch] [rbp-94h]
  __int16 v27; // [rsp+6Eh] [rbp-92h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  _GUID v29; // [rsp+A8h] [rbp-58h]
  char v30; // [rsp+B8h] [rbp-48h]
  __int16 v31; // [rsp+BAh] [rbp-46h]
  unsigned int v32; // [rsp+BCh] [rbp-44h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int128 v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D8h] [rbp-28h]
  _BYTE v36[144]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  if ( !a2 )
    return 87;
  v28 = *a2;
  v12 = ProviderHandleLookup(a1, (unsigned int)a1);
  v13 = v12;
  if ( !v12 )
    return 6;
  v14 = HIDWORD(a1);
  if ( !(_WORD)v14 || (_WORD)v14 != *(_WORD *)(v12 + 96) )
    return 6;
  v15 = *((_QWORD *)&v28 + 1);
  if ( *(_BYTE *)(v12 + 244)
    && ((v16 = *(_BYTE *)(v12 + 245), BYTE4(v28) <= v16) || !v16)
    && ((*(_BYTE *)(v13 + 240) & 0x40) != 0 && !*((_QWORD *)&v28 + 1)
     || (*((_QWORD *)&v28 + 1) & *(_QWORD *)(v13 + 232)) != 0LL
     && (*((_QWORD *)&v28 + 1) & *(_QWORD *)(v13 + 224)) == *(_QWORD *)(v13 + 224)) )
  {
    v17 = 1;
    v9 = EtwpWriteToPrivateBuffers((_BYTE *)v13, a2, a5, WORD2(a3), 0, a6, a7, a8, a9, (__int64)v36);
    if ( v9 )
    {
LABEL_32:
      EtwpReleasePrivateBuffers(v9, (__int64)v36);
      return v9;
    }
    v15 = *((_QWORD *)&v28 + 1);
  }
  else
  {
    v17 = 0;
  }
  if ( *(_BYTE *)(v13 + 124) )
  {
    v18 = *(_BYTE *)(v13 + 125);
    if ( (BYTE4(v28) <= v18 || !v18)
      && ((*(_BYTE *)(v13 + 120) & 0x40) != 0 && !v15
       || (v15 & *(_QWORD *)(v13 + 112)) != 0 && (v15 & *(_QWORD *)(v13 + 104)) == *(_QWORD *)(v13 + 104)) )
    {
      v27 = a5;
      v33 = a9;
      v26 = 0;
      v32 = a8;
      if ( a6 )
        ActivityId = *a6;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      v30 = 0;
      v29 = ActivityId;
      if ( a7 )
      {
        v20 = *a7;
        v30 = 1;
        v34 = v20;
      }
      v31 = a3;
      v35 = a4;
      v21 = NtTraceEvent(*(HANDLE *)(v13 + 88), 0x300u, 0x78u, Fields);
      if ( v21 )
        v9 = RtlNtStatusToDosError(v21);
      else
        v9 = 0;
    }
  }
  if ( v17 )
    goto LABEL_32;
  return v9;
}
