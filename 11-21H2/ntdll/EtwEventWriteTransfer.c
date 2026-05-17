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

__int64 __fastcall EtwEventWriteTransfer(
        unsigned __int64 a1,
        __int128 *a2,
        _GUID *a3,
        __int128 *a4,
        int a5,
        __int64 a6)
{
  ULONG v6; // edi
  int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  char v16; // si
  unsigned __int8 v17; // al
  _GUID ActivityId; // xmm0
  __int128 v19; // xmm0
  NTSTATUS v20; // eax
  _BYTE v22[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  _GUID v25; // [rsp+98h] [rbp-68h]
  char v26; // [rsp+A8h] [rbp-58h]
  __int16 v27; // [rsp+AAh] [rbp-56h]
  int v28; // [rsp+ACh] [rbp-54h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int128 v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[144]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = 0;
  v9 = (int)a2;
  if ( !a2 )
    return 87;
  v24 = *a2;
  v11 = ProviderHandleLookup(a1, (unsigned int)a1);
  v12 = v11;
  if ( !v11 )
    return 6;
  v13 = HIDWORD(a1);
  if ( !(_WORD)v13 || (_WORD)v13 != *(_WORD *)(v11 + 96) )
    return 6;
  v14 = *((_QWORD *)&v24 + 1);
  if ( *(_BYTE *)(v11 + 244)
    && ((v15 = *(_BYTE *)(v11 + 245), BYTE4(v24) <= v15) || !v15)
    && ((*(_BYTE *)(v12 + 240) & 0x40) != 0 && !*((_QWORD *)&v24 + 1)
     || (*((_QWORD *)&v24 + 1) & *(_QWORD *)(v12 + 232)) != 0LL
     && (*((_QWORD *)&v24 + 1) & *(_QWORD *)(v12 + 224)) == *(_QWORD *)(v12 + 224)) )
  {
    v16 = 1;
    v6 = EtwpWriteToPrivateBuffers(v12, v9, 0, 0, 0, (__int64)a3, (__int64)a4, a5, a6, (__int64)v32);
    if ( v6 )
    {
LABEL_32:
      EtwpReleasePrivateBuffers(v6, v32);
      return v6;
    }
    v14 = *((_QWORD *)&v24 + 1);
  }
  else
  {
    v16 = 0;
  }
  if ( *(_BYTE *)(v12 + 124) )
  {
    v17 = *(_BYTE *)(v12 + 125);
    if ( (BYTE4(v24) <= v17 || !v17)
      && ((*(_BYTE *)(v12 + 120) & 0x40) != 0 && !v14
       || (v14 & *(_QWORD *)(v12 + 112)) != 0 && (v14 & *(_QWORD *)(v12 + 104)) == *(_QWORD *)(v12 + 104)) )
    {
      v23 = 0;
      v28 = a5;
      v29 = a6;
      if ( a3 )
        ActivityId = *a3;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      v26 = 0;
      v25 = ActivityId;
      if ( a4 )
      {
        v19 = *a4;
        v26 = 1;
        v30 = v19;
      }
      v27 = 0;
      v31 = 0;
      v20 = NtTraceEvent(*(_QWORD *)(v12 + 88), 768LL, 120LL, v22);
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
