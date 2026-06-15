/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x180142298
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801428B4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801409DC (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180149300 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  unsigned int ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9; // ebx
  __int64 result; // rax
  struct tWAVEFORMATEX **v12; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-31h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h]
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]
  char v21; // [rsp+B0h] [rbp+5Fh] BYREF

  *(_QWORD *)&v16 = this;
  BYTE8(v16) = 1;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, void *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
  {
    v21 = 0;
    lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(a4, pvar.bstrblobVal.pData, &v21);
    if ( v21 )
    {
      v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
      ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = v9;
      if ( v9 >= 0 )
        ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16FD,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v9);
      PropVariantClear((PROPVARIANT *)&pvar);
      v16 = 0LL;
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
        *((_QWORD *)this + 5),
        &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
        &v16);
      return ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9;
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v16 = 0LL;
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
    *((_QWORD *)this + 5),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v16);
  if ( a2 )
  {
    v12 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(this, a5);
    v14 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1708,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return v14;
    }
    v21 = 0;
    lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(a4, *v12, &v21);
    return 0LL;
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
  {
    v21 = 0;
    lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(a4, pvar.bstrblobVal.pData, &v21);
    if ( v21 )
    {
      v15 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
      ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = v15;
      if ( v15 >= 0 )
        ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1719,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v15);
      PropVariantClear((PROPVARIANT *)&pvar);
      return ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9;
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v19[0] = *a4;
  v19[1] = a4[1];
  v19[2] = a4[2];
  v19[3] = a4[3];
  ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
                                                                     (__int64)this,
                                                                     a3,
                                                                     v19,
                                                                     a5);
  if ( (ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 & 0x80000000) == 0 )
    return 0LL;
  result = 2290679812LL;
  if ( ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1720,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9);
    return ComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9;
  }
  return result;
}
