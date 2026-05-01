/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x180092A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SdbpGetPathAppPatch @ 0x180092930 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180093038 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-E0h]
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v15[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+48h] [rbp-B8h]
  wchar_t v17; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = *(_DWORD *)L"64";
  v17 = aApppatch64[10];
  *(_OWORD *)v15 = *(_OWORD *)L"AppPatch64";
  if ( a2 < 0xB )
    return 3221225507LL;
  v14 = -1;
  v18[0] = 0;
  v13[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
    {
      if ( !a3 )
        a3 = (unsigned __int16 *)&word_1800B66C4;
      ProcessHostGuestArchitectures = AslPathCombine(v15, a3, v18);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1017;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = (unsigned __int16 *)&word_1800B66C4;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(v18, 260LL, a3);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 1023;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v18);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 1005;
LABEL_5:
  v12 = ProcessHostGuestArchitectures;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v11, (_DWORD)v10, v12);
  return v9;
}
