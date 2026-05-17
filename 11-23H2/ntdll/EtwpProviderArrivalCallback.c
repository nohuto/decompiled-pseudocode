/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180002184
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800020DC (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     EtwpTrackBinaryForSession @ 0x180002278 (EtwpTrackBinaryForSession.c)
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrGetDllFullName @ 0x18002D5E0 (LdrGetDllFullName.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     EtwpFindDebugId @ 0x180126450 (EtwpFindDebugId.c)
 *     EtwpTrackDebugIdForSession @ 0x180126524 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned int DebugId; // ebx
  __int64 v6; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  DebugId = 0;
  if ( v3 < *((_QWORD *)&xmmword_18019C530 + 1)
    || v3 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    RtlpxLookupFunctionTable(v3, &v11);
  }
  else
  {
    v11 = xmmword_18019C530;
    v12 = qword_18019C540;
  }
  v6 = *((_QWORD *)&v11 + 1);
  if ( !*((_QWORD *)&v11 + 1) )
    return 87;
  if ( (*(_WORD *)(a2 + 86) & 0x3FFF) == 2 )
  {
    DebugId = EtwpFindDebugId(*((_QWORD *)&v11 + 1), 0x3FFFLL, &v11, &v10);
    if ( DebugId )
      return DebugId;
    return (unsigned int)EtwpTrackDebugIdForSession(a1, v11, v10);
  }
  if ( *(__int16 *)(a2 + 86) < 0 )
  {
    *((_QWORD *)&v11 + 1) = &v13;
    WORD1(v11) = 260;
    DllFullName = LdrGetDllFullName(v6, &v11);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpTrackBinaryForSession(a1, &v11, a2 + 32);
  }
  return DebugId;
}
