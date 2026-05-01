/*
 * XREFs of ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180034EA0
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034730 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x180033350 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180034E68 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 */

__int64 __fastcall HampUtilQueryHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  const unsigned __int16 *v6; // rax
  LSTATUS v7; // eax
  BYTE Data[24]; // [rsp+30h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = HampUtilOpenApplicationHistoryKey(a1, 0, &hKey);
  if ( v4 >= 0 )
  {
    v5 = 624LL;
    if ( a1 )
      v5 = (__int64)a1 + 560;
    v6 = HampUtilHostTypeNameFromType(*(_DWORD *)v5);
    cbData = 8;
    v7 = RegQueryValueExW(hKey, v6, 0LL, 0LL, Data, &cbData);
    v4 = v7;
    if ( v7 > 0 )
      v4 = (unsigned __int16)v7 | 0xC0070000;
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
