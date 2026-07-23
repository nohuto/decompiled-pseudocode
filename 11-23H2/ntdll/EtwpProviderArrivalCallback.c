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
 *     EtwpFindDebugId @ 0x180126420 (EtwpFindDebugId.c)
 *     EtwpTrackDebugIdForSession @ 0x1801264F4 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  unsigned int DebugId; // ebx
  wchar_t *Buffer; // rcx
  int DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING FullDllName; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *(void **)(a2 + 48);
  DebugId = 0;
  if ( (unsigned __int64)v3 < *((_QWORD *)&xmmword_18019C530 + 1)
    || (unsigned __int64)v3 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    RtlpxLookupFunctionTable(v3);
  }
  else
  {
    FullDllName = (_UNICODE_STRING)xmmword_18019C530;
    v12 = qword_18019C540;
  }
  Buffer = FullDllName.Buffer;
  if ( !FullDllName.Buffer )
    return 87;
  if ( (*(_WORD *)(a2 + 86) & 0x3FFF) == 2 )
  {
    DebugId = EtwpFindDebugId(FullDllName.Buffer, 0x3FFFLL, &FullDllName, &v10);
    if ( DebugId )
      return DebugId;
    return (unsigned int)EtwpTrackDebugIdForSession(a1, *(_QWORD *)&FullDllName.Length, v10);
  }
  if ( *(__int16 *)(a2 + 86) < 0 )
  {
    FullDllName.Buffer = (wchar_t *)&v13;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(Buffer, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpTrackBinaryForSession(a1, &FullDllName, a2 + 32);
  }
  return DebugId;
}
