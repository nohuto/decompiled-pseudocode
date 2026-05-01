/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x180097DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1800978F0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180097FF8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(_WORD *a1, unsigned __int64 a2, const unsigned __int16 *a3, __int64 a4)
{
  __int64 *v8; // rdi
  int ProcessHostGuestArchitectures; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int16 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h]
  wchar_t v16; // [rsp+44h] [rbp-BCh]
  _OWORD v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v18[264]; // [rsp+70h] [rbp-90h] BYREF

  v14 = *(_QWORD *)L"Custom";
  v15 = *(_DWORD *)L"om";
  v16 = aCustom[6];
  v17[0] = *(_OWORD *)L"Custom\\Custom64";
  v17[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v13 = -1;
  *a1 = 0;
  v8 = &v14;
  v18[0] = 0;
  v12[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v12[0] == 9 || v12[0] == 12 )
      v8 = (__int64 *)v17;
    if ( !a3 )
      a3 = &word_1800B7A9C;
    ProcessHostGuestArchitectures = AslPathCombine(v8, a3, v18, 260LL);
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2, v18);
    v10 = "AslPathCombine failed [%x]";
    v11 = 1161;
  }
  else
  {
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1147;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v11, (_DWORD)v10);
  return (unsigned int)ProcessHostGuestArchitectures;
}
