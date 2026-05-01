/*
 * XREFs of ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000A0F8
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x18000A1A0 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000C2B0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUtilSaveHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  signed int v3; // ebx
  const WCHAR *v4; // rax
  LSTATUS v5; // eax
  __int64 Data; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  Data = a2;
  hKey = 0LL;
  v3 = HampUtilOpenApplicationHistoryKey(a1, 1u, &hKey);
  if ( v3 >= 0 )
  {
    v4 = HampUtilHostTypeNameFromType(*((_DWORD *)a1 + 140));
    v5 = RegSetValueExW(hKey, v4, 0, 0xBu, (const BYTE *)&Data, 8u);
    v3 = v5;
    if ( v5 > 0 )
      v3 = (unsigned __int16)v5 | 0xC0070000;
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
