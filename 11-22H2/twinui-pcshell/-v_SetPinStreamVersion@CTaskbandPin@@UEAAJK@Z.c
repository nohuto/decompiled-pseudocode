/*
 * XREFs of ?v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z @ 0x1807509D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall CTaskbandPin::v_SetPinStreamVersion(CTaskbandPin *this, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  result = _RegSetKeyValueWithSDDL(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
             L"FavoritesVersion",
             4u,
             (BYTE *)&v3,
             4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
