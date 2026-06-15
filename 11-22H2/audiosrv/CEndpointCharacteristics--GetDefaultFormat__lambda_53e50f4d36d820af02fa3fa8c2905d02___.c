/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180054084
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x1800541F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___ @ 0x18014A53C (wil--details--lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___--_lambda_call__lambda_affa.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18014AC48 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18014CD38 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        CEndpointCharacteristics *this,
        int a2,
        unsigned int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  int OffloadDeviceFormat; // ebx
  __int64 result; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *(_QWORD *)&v16 = this;
  BYTE8(v16) = 1;
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65 )
  {
    LOBYTE(v11) = IsValidWfxBlob((struct tagPROPVARIANT *)pvar);
    if ( v11 )
    {
      if ( (int)ValidateWaveFormatEx(Src[0]) >= 0
        && (unsigned __int8)lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(a4, Src[0]) )
      {
        v12 = CloneWaveFormat(Src[0], a5);
        OffloadDeviceFormat = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1875,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12);
          PropVariantClear(pvar);
          wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___(&v16);
          return (unsigned int)OffloadDeviceFormat;
        }
        PropVariantClear(pvar);
        v16 = 0LL;
        v17 = 0LL;
        (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
          &v16);
        return 0LL;
      }
    }
  }
  PropVariantClear(pvar);
  v16 = 0LL;
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
    *((_QWORD *)this + 9),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v16);
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(this, a5);
    if ( OffloadDeviceFormat >= 0 )
    {
      lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(a4, *a5);
      return 0LL;
    }
    v13 = 6272LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)OffloadDeviceFormat);
    return (unsigned int)OffloadDeviceFormat;
  }
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEngine_OEMFormat,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65 )
  {
    LOBYTE(v14) = IsValidWfxBlob((struct tagPROPVARIANT *)pvar);
    if ( v14 )
    {
      if ( (int)ValidateWaveFormatEx(Src[0]) >= 0
        && (unsigned __int8)lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(a4, Src[0]) )
      {
        v15 = CloneWaveFormat(Src[0], a5);
        OffloadDeviceFormat = v15;
        if ( v15 >= 0 )
          OffloadDeviceFormat = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1891,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v15);
        PropVariantClear(pvar);
        return (unsigned int)OffloadDeviceFormat;
      }
    }
  }
  PropVariantClear(pvar);
  *(_OWORD *)pvar = *a4;
  *(_OWORD *)Src = a4[1];
  OffloadDeviceFormat = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                          this,
                          a3,
                          pvar,
                          a5);
  if ( OffloadDeviceFormat >= 0 )
    return 0LL;
  result = 2290679812LL;
  if ( OffloadDeviceFormat != -2004287484 )
  {
    v13 = 6296LL;
    goto LABEL_22;
  }
  return result;
}
