/*
 * XREFs of ?v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z @ 0x180750A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall CTaskbandPin::v_SetRemovedChangeCount(CTaskbandPin *this, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  result = _RegSetKeyValueWithSDDL(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
             L"FavoritesRemovedChanges",
             4u,
             (BYTE *)&v3,
             4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
