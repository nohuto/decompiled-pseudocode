/*
 * XREFs of SdbpGetPathAppraiser @ 0x180097B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180097FF8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A3334 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(_WORD *a1, unsigned __int64 a2, const unsigned __int16 *a3, __int64 a4)
{
  const unsigned __int16 *v5; // r10
  int v6; // edi
  int v7; // esi
  int ProcessHostGuestArchitectures; // ebx
  const char *v10; // r9
  int v11; // r8d
  _WORD v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+48h] [rbp-B8h]
  wchar_t v16; // [rsp+4Ch] [rbp-B4h]
  _WORD v17[264]; // [rsp+50h] [rbp-B0h] BYREF

  v15 = *(_DWORD *)L"er";
  v5 = a3;
  v6 = a2;
  v16 = aAppraiser[10];
  v7 = (int)a1;
  v14 = *(_OWORD *)L"\\appraiser";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v13 = -1;
  v12[0] = -1;
  v17[0] = 0;
  if ( !a3 )
    v5 = &word_1800B7A9C;
  ProcessHostGuestArchitectures = AslPathCombine(&v14, v5, v17, 260LL);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(v7, v6, (unsigned int)v17, v13, (__int64)v12);
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1217;
  }
  else
  {
    v10 = "AslPathCombine failed [%x]";
    v11 = 1211;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppraiser", v11, (_DWORD)v10);
  return (unsigned int)ProcessHostGuestArchitectures;
}
