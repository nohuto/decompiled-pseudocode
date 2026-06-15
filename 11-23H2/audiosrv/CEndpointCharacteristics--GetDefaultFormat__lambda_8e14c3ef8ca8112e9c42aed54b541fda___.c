/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020AA8
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020858 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046258 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___ @ 0x18014A4EC (wil--details--lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___--_lambda_call__lambda_affa.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18014CCE8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *this,
        int a2,
        unsigned int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  unsigned int ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  __int64 result; // rax
  int v12; // eax
  struct tWAVEFORMATEX **v13; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v15; // edi
  __int128 v16; // [rsp+20h] [rbp-31h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h]
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]
  char v21; // [rsp+B0h] [rbp+5Fh] BYREF

  *(_QWORD *)&v16 = this;
  BYTE8(v16) = 1;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, void *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    if ( (unsigned int)IsValidWfxBlob(&pvar) )
    {
      if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        v21 = 0;
        lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, pvar.bstrblobVal.pData, &v21);
        if ( v21 )
        {
          v12 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
          ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v12;
          if ( v12 >= 0 )
          {
            PropVariantClear((PROPVARIANT *)&pvar);
            v16 = 0LL;
            v17 = 0LL;
            (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
              *((_QWORD *)this + 9),
              &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
              &v16);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1875,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12,
            v16);
          PropVariantClear((PROPVARIANT *)&pvar);
          wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___(&v16);
          return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v16 = 0LL;
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
    *((_QWORD *)this + 9),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v16);
  if ( a2 )
  {
    v13 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(this, a5);
    v15 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat >= 0 )
    {
      lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, *v13, &v21);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1880,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)OffloadDeviceFormat,
      v16);
    return v15;
  }
  else
  {
    memset(&pvar, 0, sizeof(pvar));
    if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65 )
    {
      if ( (unsigned int)IsValidWfxBlob(&pvar) )
      {
        if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
        {
          v21 = 0;
          lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, pvar.bstrblobVal.pData, &v21);
          if ( v21 )
          {
            v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
            ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v9;
            if ( v9 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1891,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)(unsigned int)v9,
                v16);
            else
              ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = 0;
            PropVariantClear((PROPVARIANT *)&pvar);
            return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
          }
        }
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    v19[0] = *a4;
    v19[1] = a4[1];
    v19[2] = a4[2];
    v19[3] = a4[3];
    ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                                       this,
                                                                       a3,
                                                                       v19,
                                                                       a5);
    if ( (ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda & 0x80000000) == 0 )
      return 0LL;
    result = 2290679812LL;
    if ( ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1898,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda,
        v16);
      return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
    }
  }
  return result;
}
