/*
 * XREFs of ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004BEF4
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ?IsXbox@GameInputModule@@CA_NXZ @ 0x18004C350 (-IsXbox@GameInputModule@@CA_NXZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

__int64 __fastcall GameInputModule::ValidateModuleCertChain(const unsigned __int16 *a1)
{
  unsigned int v2; // edi
  int dwError; // ebx
  unsigned int v4; // esi
  CRYPT_PROVIDER_DATA *v5; // rax
  CRYPT_PROVIDER_SGNR *ProvSignerFromChain; // rax
  const CERT_CHAIN_CONTEXT *pChainContext; // rdx
  int dwError_low; // ebx
  signed int LastError; // eax
  _CERT_CHAIN_POLICY_STATUS pPolicyStatus; // [rsp+28h] [rbp-79h] BYREF
  _CERT_CHAIN_POLICY_PARA pPolicyPara; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v14; // [rsp+60h] [rbp-41h]
  _DWORD pWVTData[10]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD *v16; // [rsp+A0h] [rbp-1h]
  int v17; // [rsp+A8h] [rbp+7h]
  HANDLE hStateData; // [rsp+B0h] [rbp+Fh]
  int v19; // [rsp+C0h] [rbp+1Fh]
  GUID pgActionID; // [rsp+D8h] [rbp+37h] BYREF

  v2 = 0;
  if ( !GameInputModule::IsXbox() )
  {
    v13[1] = a1;
    v13[0] = 32LL;
    v14 = 0LL;
    memset_0(pWVTData, 0, 0x58uLL);
    pWVTData[0] = 88;
    pWVTData[8] = 1;
    v17 = 1;
    pWVTData[6] = 2;
    v16 = v13;
    v19 = 4160;
    pgActionID.Data1 = 11191659;
    *(_DWORD *)&pgActionID.Data2 = 298896708;
    *(_DWORD *)pgActionID.Data4 = -1073692020;
    *(_DWORD *)&pgActionID.Data4[4] = -292175281;
    dwError = WinVerifyTrust(HWND_MESSAGE|0x2LL, &pgActionID, pWVTData);
    v4 = -2147467259;
    if ( dwError )
      goto LABEL_11;
    dwError = -2147467259;
    v5 = WTHelperProvDataFromStateData(hStateData);
    if ( v5 )
    {
      ProvSignerFromChain = WTHelperGetProvSignerFromChain(v5, 0, 0, 0);
      if ( ProvSignerFromChain )
      {
        pChainContext = ProvSignerFromChain->pChainContext;
        memset(&pPolicyStatus, 0, sizeof(pPolicyStatus));
        pPolicyStatus.cbSize = 24;
        pPolicyPara = 0LL;
        pPolicyPara.cbSize = 16;
        if ( !CertVerifyCertificateChainPolicy((LPCSTR)7, pChainContext, &pPolicyPara, &pPolicyStatus) )
        {
          LastError = GetLastError();
          dwError = LastError;
          if ( LastError <= 0 )
            goto LABEL_8;
          dwError_low = (unsigned __int16)LastError;
          goto LABEL_18;
        }
        dwError = pPolicyStatus.dwError;
        if ( !pPolicyStatus.dwError )
        {
          dwError = 0;
          goto LABEL_8;
        }
        if ( (int)pPolicyStatus.dwError > 0 )
        {
          dwError_low = LOWORD(pPolicyStatus.dwError);
LABEL_18:
          dwError = dwError_low | 0x80070000;
        }
      }
    }
LABEL_8:
    v17 = 2;
    WinVerifyTrust(HWND_MESSAGE|0x2LL, &pgActionID, pWVTData);
    if ( !dwError )
      return v2;
LABEL_11:
    if ( dwError < 0 )
      return (unsigned int)dwError;
    return v4;
  }
  return 0LL;
}
