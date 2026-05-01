/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x1800979F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     SdbpGetPathAppPatch @ 0x1800978F0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180097FF8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(_WORD *a1, unsigned __int64 a2, const unsigned __int16 *a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int16 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+48h] [rbp-B8h]
  wchar_t v15; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 v16[264]; // [rsp+50h] [rbp-B0h] BYREF

  v14 = *(_DWORD *)L"64";
  v15 = aApppatch64[10];
  v13 = *(_OWORD *)L"AppPatch64";
  if ( a2 < 0xB )
    return 3221225507LL;
  v12 = -1;
  v16[0] = 0;
  v11[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v12, v11, a4);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v11[0] == 9 || v11[0] == 12 )
    {
      if ( !a3 )
        a3 = &word_1800B7A9C;
      ProcessHostGuestArchitectures = AslPathCombine(&v13, a3, v16, 260LL);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "AslPathCombine failed [%x]";
        v10 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &word_1800B7A9C;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(v16, 260LL, (__int64)a3);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v10 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v16);
  }
  v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v10 = 992;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}
