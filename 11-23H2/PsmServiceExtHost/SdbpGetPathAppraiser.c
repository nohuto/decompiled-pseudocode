/*
 * XREFs of SdbpGetPathAppraiser @ 0x180092860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180092CD8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009D99C (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A0184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int16 *v5; // r10
  int ProcessHostGuestArchitectures; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  _WORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v15[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+48h] [rbp-B8h]
  wchar_t v17; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = *(_DWORD *)L"er";
  v5 = a3;
  v17 = aAppraiser[10];
  *(_OWORD *)v15 = *(_OWORD *)L"\\appraiser";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v14 = -1;
  v13[0] = -1;
  v18[0] = 0;
  if ( !a3 )
    v5 = (unsigned __int16 *)&word_1800B66B4;
  ProcessHostGuestArchitectures = AslPathCombine(v15, v5, v18);
  v10 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
    v10 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(a1, a2, v18, (__int64)v13);
    v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v12 = 1230;
  }
  else
  {
    v11 = "AslPathCombine failed [%x]";
    v12 = 1224;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppraiser", v12, (_DWORD)v11, ProcessHostGuestArchitectures);
  return v10;
}
