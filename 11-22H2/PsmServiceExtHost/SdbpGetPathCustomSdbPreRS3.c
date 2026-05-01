/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x180092E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x180092930 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180093038 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  unsigned __int16 *v8; // rdi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-E0h]
  __int16 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v16[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  wchar_t v18; // [rsp+44h] [rbp-BCh]
  _OWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v20[264]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)v16 = *(_QWORD *)L"Custom";
  v17 = *(_DWORD *)L"om";
  v18 = aCustom[6];
  v19[0] = *(_OWORD *)L"Custom\\Custom64";
  v19[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v15 = -1;
  *a1 = 0;
  v8 = v16;
  v20[0] = 0;
  v14[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v15, v14, a4);
  v10 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v14[0] == 9 || v14[0] == 12 )
      v8 = (unsigned __int16 *)v19;
    if ( !a3 )
      a3 = (unsigned __int16 *)&word_1800B66C4;
    ProcessHostGuestArchitectures = AslPathCombine(v8, a3, v20);
    v10 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2, v20);
    v11 = "AslPathCombine failed [%x]";
    v12 = 1174;
  }
  else
  {
    v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v12 = 1160;
  }
  v13 = ProcessHostGuestArchitectures;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v12, (_DWORD)v11, v13);
  return v10;
}
