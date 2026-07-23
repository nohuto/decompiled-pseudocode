/*
 * XREFs of EtwTraceMessageVa @ 0x180053720
 * Callers:
 *     EtwTraceMessage @ 0x1800536F0 (EtwTraceMessage.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x18008E264 (EtwpTraceUmMessage.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwTraceMessageVa(HANDLE TraceHandle, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // ecx
  _QWORD *v8; // rax
  NTSTATUS v9; // eax
  _BYTE Fields[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  _QWORD *v16; // [rsp+50h] [rbp-18h]

  if ( (BYTE3(TraceHandle) & 1) != 0 )
    return EtwpTraceUmMessage((_DWORD)TraceHandle, a2, (_DWORD)a3, a4, (__int64)a5);
  v6 = 0;
  v7 = 0;
  if ( *a5 )
  {
    v8 = a5;
    do
    {
      ++v7;
      v8 += 2;
    }
    while ( *v8 );
  }
  v12 = a4;
  v14 = a2;
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v13) = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    v13 = *(_OWORD *)a3;
  }
  v16 = a5;
  v15 = 16 * v7 + 8;
  v9 = NtTraceEvent(TraceHandle, 0x200u, 0x28u, Fields);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v6;
}
