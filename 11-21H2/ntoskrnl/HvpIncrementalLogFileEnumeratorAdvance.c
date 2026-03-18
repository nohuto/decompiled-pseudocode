/*
 * XREFs of HvpIncrementalLogFileEnumeratorAdvance @ 0x140925338
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140924D00 (HvpApplyIncrementalLogFile.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x140925070 (HvpDetermineIncrementalLogFileMaximums.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvpIsLogEntryCoherent @ 0x140925444 (HvpIsLogEntryCoherent.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140925494 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpReadLogEntryHeader @ 0x1409259BC (HvpReadLogEntryHeader.c)
 */

__int64 __fastcall HvpIncrementalLogFileEnumeratorAdvance(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int LogEntryHeader; // ecx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v12 = 0LL;
  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  LogEntryHeader = HvpReadLogEntryHeader(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v11);
  if ( LogEntryHeader >= 0 )
  {
    if ( (unsigned __int8)HvpIsLogEntryHeaderCoherent(v11, v2) && HIDWORD(v11[0]) == *(_DWORD *)(a1 + 4) )
    {
      LogEntryHeader = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a1 + 8))(
                         *(_QWORD *)(a1 + 16),
                         v2,
                         DWORD1(v11[0]),
                         &v10);
      if ( LogEntryHeader < 0 )
        goto LABEL_5;
      if ( (unsigned __int8)HvpIsLogEntryCoherent(v10, v11) )
      {
        ++*(_DWORD *)(a1 + 4);
        v8 = v10;
        *(_DWORD *)a1 = v2 + DWORD1(v11[0]);
        *a2 = v8;
        return v3;
      }
    }
    return (unsigned int)-2147483622;
  }
LABEL_5:
  v7 = -1073741491;
  if ( LogEntryHeader == -1073741807 )
    return (unsigned int)-2147483622;
  return v7;
}
