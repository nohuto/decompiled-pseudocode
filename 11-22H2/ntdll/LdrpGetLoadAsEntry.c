/*
 * XREFs of LdrpGetLoadAsEntry @ 0x180008AE0
 * Callers:
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x1800083E0 (LdrpGetDataModulePath.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800EB900 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180008BC4 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC (LdrpInitMuiCritsRtlInitOnce.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
    LdrpInitMuiCritsRtlInitOnce();
  else
    LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * --v5] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5] + 1) )
        {
          *a2 = v6[3 * v5];
          a2[1] = v6[3 * v5 + 1];
          a2[2] = v6[3 * v5 + 2];
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v4;
}
