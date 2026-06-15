/*
 * XREFs of ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000DCB0
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180115FC0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x180060A60 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::GetProcessingPeriod(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3,
        __int64 *a4)
{
  unsigned int MinProcessingPeriodForExclusiveMode; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    if ( !a4 )
      goto LABEL_4;
  }
  else if ( !a4 )
  {
    MinProcessingPeriodForExclusiveMode = -2147467261;
    v9 = 8215LL;
    goto LABEL_10;
  }
  MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode((EffectPack *)this, a2, a4);
  if ( (MinProcessingPeriodForExclusiveMode & 0x80000000) != 0 )
  {
    v9 = 8220LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)MinProcessingPeriodForExclusiveMode,
      (int)pvar[0]);
    return MinProcessingPeriodForExclusiveMode;
  }
LABEL_4:
  if ( a3 )
  {
    if ( a2 )
    {
      *a3 = 100000LL;
    }
    else
    {
      v12 = 0;
      while ( 1 )
      {
        *(_OWORD *)pvar = 0LL;
        v16 = 0LL;
        v13 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this[161] + 9) + 40LL))(
                *((_QWORD *)this[161] + 9),
                &PKEY_AudioEngine_Period,
                pvar);
        MinProcessingPeriodForExclusiveMode = v13;
        if ( v13 < 0 )
        {
          v10 = 8240LL;
LABEL_12:
          v11 = (unsigned int)v13;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v11,
            (int)pvar[0]);
          PropVariantClear(pvar);
          return MinProcessingPeriodForExclusiveMode;
        }
        if ( LOWORD(pvar[0]) != 65 )
          break;
        if ( LODWORD(pvar[1]) != 8 )
          goto LABEL_29;
        v14 = *v16;
        *a3 = *v16;
        if ( v14 )
          goto LABEL_28;
        if ( (unsigned int)++v12 >= 0x7D0 )
        {
          MinProcessingPeriodForExclusiveMode = -2147467259;
          v11 = 2147500037LL;
          v10 = 8253LL;
          goto LABEL_13;
        }
        Sleep(5u);
        PropVariantClear(pvar);
      }
      if ( LOWORD(pvar[0]) )
      {
LABEL_29:
        MinProcessingPeriodForExclusiveMode = -2147024809;
        v11 = 2147942487LL;
        v10 = 8266LL;
        goto LABEL_13;
      }
      *a3 = 100000LL;
      v13 = CEndpointCharacteristics::SetProcessingPeriod(this[161], a3);
      MinProcessingPeriodForExclusiveMode = v13;
      if ( v13 < 0 )
      {
        v10 = 8262LL;
        goto LABEL_12;
      }
LABEL_28:
      PropVariantClear(pvar);
    }
  }
  return 0LL;
}
