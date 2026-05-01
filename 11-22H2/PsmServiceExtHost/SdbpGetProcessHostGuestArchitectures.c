/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x180093038
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x180092A30 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x180092BC0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180092E10 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathSystem @ 0x180092F90 (SdbpGetPathSystem.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A0404 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A0950 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, __int16 *a2, unsigned __int16 *a3)
{
  int ProcessWowInfo; // eax
  unsigned int v7; // ebx
  __int16 v8; // cx
  int v10; // [rsp+20h] [rbp-38h]
  __int16 v11[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = -1;
  v11[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v11, &v12);
  v7 = ProcessWowInfo;
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v8 = AslImageFileToArchitecture(*a3), v8 == -1) )
      v8 = v12;
    v7 = 0;
    *a1 = v11[0];
    *a2 = v8;
  }
  else
  {
    v10 = ProcessWowInfo;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHostGuestArchitectures",
      886,
      (unsigned int)"AslEnvGetProcessWowInfo failed [%x]",
      v10);
  }
  return v7;
}
