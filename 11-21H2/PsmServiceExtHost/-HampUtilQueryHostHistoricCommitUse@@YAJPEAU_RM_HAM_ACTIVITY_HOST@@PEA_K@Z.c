/*
 * XREFs of ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A028
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x18000A1A0 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000C2B0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUtilQueryHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  signed int v4; // ebx
  const WCHAR *v5; // rax
  LSTATUS v6; // eax
  BYTE Data[24]; // [rsp+30h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = HampUtilOpenApplicationHistoryKey(a1, 0, &hKey);
  if ( v4 >= 0 )
  {
    v5 = HampUtilHostTypeNameFromType(*((_DWORD *)a1 + 140));
    cbData = 8;
    v6 = RegQueryValueExW(hKey, v5, 0LL, 0LL, Data, &cbData);
    v4 = v6;
    if ( v6 > 0 )
      v4 = (unsigned __int16)v6 | 0xC0070000;
    if ( v4 >= 0 )
    {
      if ( cbData == 8 )
      {
        v4 = 0;
        *a2 = *(_QWORD *)Data;
      }
      else
      {
        v4 = -1073739509;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
