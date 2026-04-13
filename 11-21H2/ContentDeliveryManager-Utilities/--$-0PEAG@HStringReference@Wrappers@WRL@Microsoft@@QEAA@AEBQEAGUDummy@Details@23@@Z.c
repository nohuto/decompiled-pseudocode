/*
 * XREFs of ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180023DEC
 * Callers:
 *     ??R_lambda_88e8518c21b209df1a80e5a49785653d_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002AA98 (--R_lambda_88e8518c21b209df1a80e5a49785653d_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x180061120 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2,
        unsigned int a3)
{
  HSTRING *v3; // r9
  const WCHAR *v5; // rcx
  unsigned __int64 v6; // rdx
  HRESULT StringReference; // eax
  int v8; // edx
  unsigned int v9; // r8d

  v3 = (HSTRING *)&a1[1];
  a1[1].Reserved.Reserved1 = 0LL;
  v5 = *a2;
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, a3);
    __debugbreak();
  }
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, a3);
    JUMPOUT(0x180023E62LL);
  }
  StringReference = WindowsCreateStringReference(v5, v6, a1, v3);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v8, v9);
    __debugbreak();
  }
  return a1;
}
