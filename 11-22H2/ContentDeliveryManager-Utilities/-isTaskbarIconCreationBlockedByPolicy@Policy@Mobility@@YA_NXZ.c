/*
 * XREFs of ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x180044B90
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002CEE0 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     ?IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA?AW4LinkedPhonesPolicyState@12@XZ @ 0x180038348 (-IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA-AW4LinkedPhonesPolicyState@12@XZ.c)
 *     ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18003845C (-IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z.c)
 */

bool __fastcall Mobility::Policy::isTaskbarIconCreationBlockedByPolicy(Mobility::Policy *this)
{
  bool IsPreventedByMdmOrPolicy; // bl
  const unsigned __int16 *pdwType; // [rsp+20h] [rbp-28h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  IsPreventedByMdmOrPolicy = 1;
  if ( !(unsigned int)Mobility::Policy::IsPhoneLinkingBlockedByPolicy() )
  {
    LODWORD(pdwType) = 1;
    IsPreventedByMdmOrPolicy = Mobility::Policy::IsPreventedByMdmOrPolicy(
                                 (Mobility::Policy *)L"Start",
                                 L"NoPinningToTaskbar",
                                 L"Software\\Policies\\Microsoft\\Windows\\Explorer",
                                 L"NoPinningToTaskbar",
                                 pdwType);
    if ( !IsPreventedByMdmOrPolicy )
    {
      pvData = 0;
      pcbData = 4;
      if ( !RegGetValueW(
              HKEY_CURRENT_USER,
              L"Software\\Policies\\Microsoft\\Windows\\Explorer",
              L"TaskbarNoPinnedList",
              0x10u,
              0LL,
              &pvData,
              &pcbData) )
        return pvData != 0;
    }
  }
  return IsPreventedByMdmOrPolicy;
}
