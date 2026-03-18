/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x140A53040
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066E110 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x14066E2A0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x140A52D30 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x140A52F80 (SdbpGetPathSystem.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x140A570CC (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x140A57798 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, __int16 *a2, unsigned __int16 *a3)
{
  int ProcessWowInfo; // ebx
  __int16 v7; // cx
  __int16 v9[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v9[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v9, &v10);
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v7 = AslImageFileToArchitecture(*a3), v7 == -1) )
      v7 = v10;
    ProcessWowInfo = 0;
    *a1 = v9[0];
    *a2 = v7;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessWowInfo;
}
