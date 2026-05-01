/*
 * XREFs of ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180034DB0
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034730 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x180033350 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180034E68 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 */

__int64 __fastcall HampUtilSaveHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  const WCHAR *v5; // rax
  LSTATUS v6; // eax
  __int64 Data; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  Data = a2;
  hKey = 0LL;
  v3 = HampUtilOpenApplicationHistoryKey(a1, 1, &hKey);
  if ( v3 >= 0 )
  {
    v4 = 624LL;
    if ( a1 )
      v4 = (__int64)a1 + 560;
    v5 = HampUtilHostTypeNameFromType(*(_DWORD *)v4);
    v6 = RegSetValueExW(hKey, v5, 0, 0xBu, (const BYTE *)&Data, 8u);
    v3 = v6;
    if ( v6 > 0 )
      v3 = (unsigned __int16)v6 | 0xC0070000;
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
