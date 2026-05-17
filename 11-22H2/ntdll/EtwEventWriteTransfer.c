/*
 * XREFs of EtwEventWriteTransfer @ 0x1800304F0
 * Callers:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x180082134 (EtwpReleasePrivateBuffers.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwEventWriteTransfer(__int64 a1, __int128 *a2, _GUID *a3, __int128 *a4, int a5, __int64 a6)
{
  ULONG v6; // edi
  int v9; // r14d
  __int16 v10; // rsi^4
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  char v15; // si
  unsigned __int8 v16; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v18; // eax
  unsigned __int8 v20; // al
  __int128 v21; // xmm0
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
  v10 = WORD2(a1);
  if ( !a2 )
    return 87;
  v24 = *a2;
  v11 = ProviderHandleLookup(a1, (unsigned int)a1);
  v13 = v11;
  if ( !v11 || v10 != *(_WORD *)(v11 + 84) )
    return 6;
  v14 = *((_QWORD *)&v24 + 1);
  if ( *(_BYTE *)(v11 + 236)
    && ((v20 = *(_BYTE *)(v11 + 237), BYTE4(v24) <= v20) || !v20)
    && ((*(_BYTE *)(v13 + 232) & 0x40) != 0 && !*((_QWORD *)&v24 + 1)
     || (*((_QWORD *)&v24 + 1) & *(_QWORD *)(v13 + 224)) != 0LL
     && (*((_QWORD *)&v24 + 1) & *(_QWORD *)(v13 + 216)) == *(_QWORD *)(v13 + 216)) )
  {
    v15 = 1;
    v6 = EtwpWriteToPrivateBuffers(v13, v9, 0, 0, 0, (__int64)a3, (__int64)a4, a5, a6, (__int64)v32);
    if ( v6 )
    {
LABEL_30:
      EtwpReleasePrivateBuffers(v6, v32, v12);
      return v6;
    }
    v14 = *((_QWORD *)&v24 + 1);
  }
  else
  {
    v15 = 0;
  }
  if ( *(_BYTE *)(v13 + 116) )
  {
    v16 = *(_BYTE *)(v13 + 117);
    if ( (BYTE4(v24) <= v16 || !v16)
      && ((*(_BYTE *)(v13 + 112) & 0x40) != 0 && !v14
       || (v14 & *(_QWORD *)(v13 + 104)) != 0 && (v14 & *(_QWORD *)(v13 + 96)) == *(_QWORD *)(v13 + 96)) )
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
        v21 = *a4;
        v26 = 1;
        v30 = v21;
      }
      v27 = 0;
      v31 = 0;
      v18 = NtTraceEvent(*(_QWORD *)(v13 + 88), 768LL, 120LL, v22);
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
