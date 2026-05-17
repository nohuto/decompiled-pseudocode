/*
 * XREFs of EtwEventWriteString @ 0x1801239E0
 * Callers:
 *     <none>
 * Callees:
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x180082134 (EtwpReleasePrivateBuffers.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwEventWriteString(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int16 v7; // rsi^4
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  bool v12; // r15
  unsigned __int8 v13; // al
  bool v14; // si
  _GUID ActivityId; // xmm0
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  int v22; // [rsp+64h] [rbp-9Ch]
  __int128 v23; // [rsp+88h] [rbp-78h] BYREF
  _GUID v24; // [rsp+A0h] [rbp-60h] BYREF
  char v25; // [rsp+B0h] [rbp-50h]
  __int16 v26; // [rsp+B2h] [rbp-4Eh]
  int v27; // [rsp+B4h] [rbp-4Ch]
  __int64 *v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[144]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = WORD2(a1);
  v8 = 0;
  v9 = ProviderHandleLookup(a1, a1);
  v10 = v9;
  if ( v9 && v7 == *(_WORD *)(v9 + 84) )
  {
    if ( a4 )
    {
      v12 = *(_BYTE *)(v9 + 116)
         && ((v11 = *(_BYTE *)(v9 + 117), a2 <= v11) || !v11)
         && ((*(_BYTE *)(v10 + 112) & 0x40) != 0 && !a3
          || (a3 & *(_QWORD *)(v10 + 104)) != 0 && (a3 & *(_QWORD *)(v10 + 96)) == *(_QWORD *)(v10 + 96));
      v14 = *(_BYTE *)(v10 + 236)
         && ((v13 = *(_BYTE *)(v10 + 237), a2 <= v13) || !v13)
         && ((*(_BYTE *)(v10 + 232) & 0x40) != 0 && !a3
          || (a3 & *(_QWORD *)(v10 + 224)) != 0 && (a3 & *(_QWORD *)(v10 + 216)) == *(_QWORD *)(v10 + 216));
      if ( v12 || v14 )
      {
        v27 = 1;
        *(_QWORD *)&v23 = 0LL;
        BYTE4(v23) = a2;
        v28 = &v19;
        *((_QWORD *)&v23 + 1) = a3;
        v22 = 4;
        ActivityId = NtCurrentTeb()->ActivityId;
        v25 = 0;
        v16 = -1LL;
        v26 = 0;
        v24 = ActivityId;
        v29 = 0;
        v19 = a4;
        do
          ++v16;
        while ( *(_WORD *)(a4 + 2 * v16) );
        v21 = 0;
        v20 = 2 * v16 + 2;
        if ( v14 )
        {
          v8 = EtwpWriteToPrivateBuffers((_BYTE *)v10, &v23, 0, 0, 4, &v24, 0LL, 1u, (__int64)&v19, (__int64)v30);
          if ( v8 )
            goto LABEL_34;
        }
        if ( v12 )
        {
          v17 = NtTraceEvent();
          if ( v17 )
            v8 = RtlNtStatusToDosError(v17);
          else
            v8 = 0;
        }
        if ( v14 )
LABEL_34:
          EtwpReleasePrivateBuffers(v8, (__int64)v30);
      }
    }
    else
    {
      return 87;
    }
  }
  else
  {
    return 6;
  }
  return v8;
}
