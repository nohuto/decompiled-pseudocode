/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010059C
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?EnforceEndpointExclusivity@CConstraintModelResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z @ 0x1800FFB30 (-EnforceEndpointExclusivity@CConstraintModelResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101340 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006A0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801006A0.c)
 *     WPP_SF_SSddSS @ 0x180102C54 (WPP_SF_SSddSS.c)
 */

__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r9
  const wchar_t *v13; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = L"Check";
    LODWORD(v12) = a2;
    if ( !a7 )
      v11 = L"Acquire";
    v13 = L"Render";
    if ( a6 )
      v13 = L"Capture";
    if ( !a2 )
      v12 = L"n/a";
    WPP_SF_SSddSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)v11,
      (unsigned int)L"n/a",
      (_DWORD)v12,
      a3,
      a4,
      a5,
      (__int64)v13,
      (__int64)v11);
  }
  return CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(a1, a2, a3, a4, a5, a6, a7, 0);
}
