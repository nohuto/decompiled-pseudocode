/*
 * XREFs of CortanaHelpers::SetAnyAboveLockAppsActive @ 0x18022CFE8
 * Callers:
 *     ?AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18022CF10 (-AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

void __fastcall CortanaHelpers::SetAnyAboveLockAppsActive(unsigned __int8 a1)
{
  int v1; // eax
  bool v2; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  v1 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"AnyAboveLockAppsActive",
         4u,
         (BYTE *)&v4,
         4u);
  v2 = v1 < 0;
  if ( v1 > 0 )
  {
    v1 = (unsigned __int16)v1 | 0x80070000;
    v2 = v1 < 0;
  }
  if ( v2 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
      (const char *)(unsigned int)v1);
}
