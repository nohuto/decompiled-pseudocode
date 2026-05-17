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

__int64 __fastcall EtwEventWriteString(unsigned __int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // al
  bool v13; // r15
  unsigned __int8 v14; // al
  bool v15; // si
  _GUID ActivityId; // xmm0
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  int v23; // [rsp+64h] [rbp-9Ch]
  __int128 v24; // [rsp+88h] [rbp-78h] BYREF
  _GUID v25; // [rsp+A0h] [rbp-60h] BYREF
  char v26; // [rsp+B0h] [rbp-50h]
  __int16 v27; // [rsp+B2h] [rbp-4Eh]
  int v28; // [rsp+B4h] [rbp-4Ch]
  __int64 *v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+D0h] [rbp-30h]
  _BYTE v31[144]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0;
  v9 = ProviderHandleLookup(a1, a1);
  v10 = v9;
  if ( v9 && (v11 = HIDWORD(a1), (_WORD)v11) && (_WORD)v11 == *(_WORD *)(v9 + 96) )
  {
    if ( a4 )
    {
      v13 = *(_BYTE *)(v9 + 124)
         && ((v12 = *(_BYTE *)(v9 + 125), a2 <= v12) || !v12)
         && ((*(_BYTE *)(v10 + 120) & 0x40) != 0 && !a3
          || (a3 & *(_QWORD *)(v10 + 112)) != 0 && (a3 & *(_QWORD *)(v10 + 104)) == *(_QWORD *)(v10 + 104));
      v15 = *(_BYTE *)(v10 + 244)
         && ((v14 = *(_BYTE *)(v10 + 245), a2 <= v14) || !v14)
         && ((*(_BYTE *)(v10 + 240) & 0x40) != 0 && !a3
          || (a3 & *(_QWORD *)(v10 + 232)) != 0 && (a3 & *(_QWORD *)(v10 + 224)) == *(_QWORD *)(v10 + 224));
      if ( v13 || v15 )
      {
        v28 = 1;
        *(_QWORD *)&v24 = 0LL;
        BYTE4(v24) = a2;
        v29 = &v20;
        *((_QWORD *)&v24 + 1) = a3;
        v23 = 4;
        ActivityId = NtCurrentTeb()->ActivityId;
        v26 = 0;
        v17 = -1LL;
        v27 = 0;
        v25 = ActivityId;
        v30 = 0;
        v20 = a4;
        do
          ++v17;
        while ( *(_WORD *)(a4 + 2 * v17) );
        v22 = 0;
        v21 = 2 * v17 + 2;
        if ( v15 )
        {
          v8 = EtwpWriteToPrivateBuffers((_BYTE *)v10, &v24, 0, 0, 4, &v25, 0LL, 1u, (__int64)&v20, (__int64)v31);
          if ( v8 )
            goto LABEL_35;
        }
        if ( v13 )
        {
          v18 = NtTraceEvent();
          if ( v18 )
            v8 = RtlNtStatusToDosError(v18);
          else
            v8 = 0;
        }
        if ( v15 )
LABEL_35:
          EtwpReleasePrivateBuffers(v8, (__int64)v31);
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
