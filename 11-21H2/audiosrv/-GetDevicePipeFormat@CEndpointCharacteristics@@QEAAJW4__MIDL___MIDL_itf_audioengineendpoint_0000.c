/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002D120
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x1800480A4 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BDD4 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        struct _RTL_CRITICAL_SECTION *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v8; // r14d
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  BYTE *pData; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  struct tWAVEFORMATEX *v19; // rax
  struct tWAVEFORMATEX *v20; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  int refreshed; // eax
  int v25; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-88h] BYREF
  __int128 v27; // [rsp+40h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-58h]
  __int128 v29; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v8 = 0;
  *a4 = 0LL;
  v9 = this + 242;
  EnterCriticalSection(this + 242);
  v28 = v9;
  v27 = (__int128)*a3;
  v10 = 0;
  while ( 1 )
  {
    v11 = qword_18017E3E0[2 * v10] - v27;
    if ( !v11 )
      v11 = qword_18017E3E0[2 * v10 + 1] - *((_QWORD *)&v27 + 1);
    if ( !v11 )
      break;
    if ( ++v10 >= 0xA )
    {
      v8 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x190D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x80070490LL,
        *(int *)&pvar.vt);
      goto LABEL_26;
    }
  }
  v29 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  v12 = 2;
  if ( a2 == eKeywordDetectorConnector )
    v12 = 602;
  v30 = v10 + v12;
  memset(&pvar, 0, sizeof(pvar));
  v13 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int128 *, struct tagPROPVARIANT *, _QWORD))(*(_QWORD *)this[1].DebugInfo + 40LL))(
          this[1].DebugInfo,
          &v29,
          &pvar,
          v27);
  v14 = v13;
  if ( v13 < 0 )
  {
    v22 = (unsigned int)v13;
    v23 = 6417LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v22,
      *(int *)&pvar.vt);
    v8 = v14;
    goto LABEL_25;
  }
  if ( pvar.vt == 65 && pvar.lVal >= 0x12u )
  {
    pData = pvar.bstrblobVal.pData;
    if ( pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL )
      goto LABEL_13;
  }
  wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(&pvar);
  refreshed = CEndpointCharacteristics::RefreshDeviceFormat((CEndpointCharacteristics *)this, a2);
  v14 = refreshed;
  if ( refreshed < 0 )
  {
    v22 = (unsigned int)refreshed;
    v23 = 6424LL;
    goto LABEL_42;
  }
  v25 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)this[1].DebugInfo + 40LL))(
          this[1].DebugInfo,
          &v29,
          &pvar);
  v14 = v25;
  if ( v25 < 0 )
  {
    v22 = (unsigned int)v25;
    v23 = 6427LL;
    goto LABEL_42;
  }
  if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    v23 = 6428LL;
    goto LABEL_40;
  }
  pData = pvar.bstrblobVal.pData;
LABEL_13:
  if ( !pData || (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pData) < 0 )
    goto LABEL_38;
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) != 0 )
  {
    if ( *(_WORD *)pData != 0xFFFE )
      goto LABEL_38;
    v16 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v16 )
    {
      v17 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v17 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v17 )
      {
LABEL_38:
        v23 = 6432LL;
LABEL_40:
        v14 = -2004287480;
        goto LABEL_41;
      }
    }
  }
  v18 = *((unsigned __int16 *)pData + 8);
  v19 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v18 + 18);
  v20 = v19;
  if ( !v19 )
  {
    *a4 = 0LL;
    v14 = -2147024882;
    v23 = 6434LL;
LABEL_41:
    v22 = v14;
    goto LABEL_42;
  }
  memcpy_0(v19, pData, v18 + 18);
  *a4 = v20;
LABEL_25:
  PropVariantClear((PROPVARIANT *)&pvar);
LABEL_26:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v8;
}
