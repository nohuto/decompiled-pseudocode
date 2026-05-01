/*
 * XREFs of ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18031996C
 * Callers:
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1801D44F0 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, (BYTE *)&v5, 4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
