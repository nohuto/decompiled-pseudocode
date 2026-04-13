/*
 * XREFs of ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18004A7AC
 * Callers:
 *     ??R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ @ 0x18002DFC8 (--R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ.c)
 * Callees:
 *     ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18003AAD8 (-IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z.c)
 */

bool __fastcall Mobility::Policy::isTaskbarIconCreationBlockedByPolicy(Mobility::Policy *this)
{
  bool v1; // si
  bool IsPreventedByMdmOrPolicy; // al
  int v3; // edi
  bool v4; // al
  BOOL v5; // ebx
  bool v6; // al
  const unsigned __int16 *pdwType; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypec; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTyped; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypea; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypee; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypeb; // [rsp+20h] [rbp-28h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v1 = 1;
  LODWORD(pdwType) = 1;
  IsPreventedByMdmOrPolicy = Mobility::Policy::IsPreventedByMdmOrPolicy(
                               (Mobility::Policy *)L"Experience",
                               L"AllowWindowsConsumerFeatures",
                               L"Software\\Policies\\Microsoft\\Windows\\CloudContent",
                               L"DisableWindowsConsumerFeatures",
                               pdwType);
  LODWORD(pdwTypec) = 1;
  v3 = IsPreventedByMdmOrPolicy ? 2 : 0;
  v4 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         pdwTypec);
  LODWORD(pdwTyped) = 3;
  v5 = v4;
  if ( Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         pdwTyped) )
  {
    v5 = 1;
  }
  LODWORD(pdwTypea) = 0;
  v6 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Connectivity",
         L"AllowConnectedDevices",
         L"Software\\Policies\\Microsoft\\Windows\\System",
         L"EnableCdp",
         pdwTypea);
  LODWORD(pdwTypee) = 0;
  if ( !((v6 ? 4 : 0) | v5 | v3 | (Mobility::Policy::IsPreventedByMdmOrPolicy(
                                     (Mobility::Policy *)L"Connectivity",
                                     L"AllowPhonePCLinking",
                                     L"Software\\Policies\\Microsoft\\Windows\\System",
                                     L"EnableMmx",
                                     pdwTypee)
                                 ? 8
                                 : 0)) )
  {
    LODWORD(pdwTypeb) = 1;
    v1 = Mobility::Policy::IsPreventedByMdmOrPolicy(
           (Mobility::Policy *)L"Start",
           L"NoPinningToTaskbar",
           L"Software\\Policies\\Microsoft\\Windows\\Explorer",
           L"NoPinningToTaskbar",
           pdwTypeb);
    if ( !v1 )
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
  return v1;
}
