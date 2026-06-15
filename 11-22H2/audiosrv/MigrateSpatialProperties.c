/*
 * XREFs of MigrateSpatialProperties @ 0x18001997C
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x180019B28 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1801439DC (Create_SpatialAudioDevicePropertyWriter.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x1801526E0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@@-$_tlgWrite.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MigrateSpatialProperties(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v6; // r15
  char v7; // r14
  char v8; // r13
  int v9; // r10d
  int v10; // ebx
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r11
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  unsigned int v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v36; // [rsp+ACh] [rbp-54h]
  __int128 v37; // [rsp+BCh] [rbp-44h]
  int v38; // [rsp+DCh] [rbp-24h]
  BOOL v39; // [rsp+E4h] [rbp-1Ch]
  unsigned __int16 v40[256]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v41[128]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v42; // [rsp+3F0h] [rbp+2F0h]
  int v43; // [rsp+400h] [rbp+300h]
  int v44; // [rsp+404h] [rbp+304h]
  int v45; // [rsp+408h] [rbp+308h]
  int v46; // [rsp+40Ch] [rbp+30Ch]
  int v47; // [rsp+410h] [rbp+310h]
  int v48; // [rsp+414h] [rbp+314h]
  int v49; // [rsp+418h] [rbp+318h]
  __int128 v50; // [rsp+41Ch] [rbp+31Ch]
  __int16 v51; // [rsp+42Ch] [rbp+32Ch]
  __int16 v52; // [rsp+42Eh] [rbp+32Eh]
  __int16 v53; // [rsp+430h] [rbp+330h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)pvar = 0LL;
  v30 = 0LL;
  memset_0(v35, 0, 0x48uLL);
  memset_0(v40, 0, 0x342uLL);
  v32 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar) < 0 )
    goto LABEL_10;
  v9 = 1;
  if ( LOWORD(pvar[0]) != 65 )
  {
    if ( !LOWORD(pvar[0]) )
    {
LABEL_4:
      v10 = v9;
      goto LABEL_5;
    }
    if ( *a1 > 2u && (unsigned __int8)tlgKeywordOn(a1, 16LL) )
    {
      v27 = v21;
      v28 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (_DWORD)a1,
        (unsigned int)&unk_180198711,
        v20,
        v21,
        (__int64)&v28,
        (__int64)&v27);
      LOBYTE(v9) = 1;
    }
    v8 = v9;
    goto LABEL_28;
  }
  v12 = v30;
  if ( *(_DWORD *)v30 != 1509949441 )
  {
    if ( *(_DWORD *)v30 == 1509949442 )
    {
      v6 = 1;
      goto LABEL_4;
    }
    v8 = 1;
    if ( *a1 <= 2u || !(unsigned __int8)tlgKeywordOn(a1, 16LL) )
      goto LABEL_4;
    v27 = v19;
    v28 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned int)&unk_180198748,
      v18,
      v19,
      (__int64)&v28,
      (__int64)&v27);
LABEL_28:
    v10 = 1;
    goto LABEL_5;
  }
  if ( *a1 > 4u && (unsigned __int8)tlgKeywordOn(a1, 16LL) )
  {
    v33 = v12 + 32;
    v34 = v12 + 16;
    v16 = *(_DWORD *)(v12 + 68);
    v31 = v16 & 0xFFFFFF7F;
    v27 = v16;
    v28 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
      v13,
      (unsigned int)&unk_180198782,
      v14,
      v15,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v31,
      (__int64)&v34,
      (__int64)&v33);
  }
  *(_DWORD *)v12 = 1509949442;
  *(_DWORD *)(v12 + 68) &= ~0x80u;
  *(_OWORD *)(v12 + 32) = *(_OWORD *)(v12 + 16);
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar) < 0 )
    goto LABEL_10;
  v10 = 1;
  v6 = 1;
LABEL_5:
  wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         pvar) >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      v7 = v10;
    if ( !v6
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) >= 0x50
      && (int)Create_SpatialAudioDevicePropertyWriter(a3, a2, &v32) >= 0 )
    {
      v22 = 0;
      v23 = *(_DWORD *)(v30 + 68);
      if ( !v23 )
        goto LABEL_41;
      while ( 1 )
      {
        v24 = 842LL * v22 + v30 + 80;
        v25 = *(_QWORD *)(v24 + 776) - *(_QWORD *)(v30 + 20);
        if ( !v25 )
          v25 = *(_QWORD *)(v24 + 784) - *(_QWORD *)(v30 + 28);
        if ( !v25 )
          break;
        v22 += v10;
        if ( v22 >= v23 )
          goto LABEL_41;
      }
      if ( !v24 )
      {
LABEL_41:
        if ( *(_DWORD *)(v30 + 8) || !v23 )
          goto LABEL_10;
        v24 = v30 + 80;
      }
      v35[0] = *(_DWORD *)(v30 + 8);
      v38 = *(_DWORD *)(v30 + 72);
      v35[1] = *(_DWORD *)(v30 + 12);
      v35[2] = *(_DWORD *)(v30 + 16);
      v39 = *(_DWORD *)(v30 + 16) != 0;
      v36 = *(_OWORD *)(v30 + 20);
      v37 = *(_OWORD *)(v30 + 20);
      v42 = *(_OWORD *)(v24 + 776);
      v43 = *(_DWORD *)(v24 + 792);
      v44 = *(_DWORD *)(v24 + 796);
      v45 = *(_DWORD *)(v24 + 800);
      v46 = *(_DWORD *)(v24 + 804);
      v47 = *(_DWORD *)(v24 + 808);
      v48 = *(_DWORD *)(v24 + 812);
      v49 = *(_DWORD *)(v24 + 816);
      v50 = *(_OWORD *)(v24 + 820);
      v51 = *(_WORD *)(v24 + 836);
      v52 = *(_WORD *)(v24 + 838);
      v53 = *(_WORD *)(v24 + 840);
      StringCchCopyW(v40, 0x100uLL, (const unsigned __int16 *)(v24 + 8));
      StringCchCopyW(v41, 0x80uLL, (const unsigned __int16 *)(v26 + 520));
      v6 = 0;
      if ( (*(int (__fastcall **)(__int64, _DWORD *, unsigned __int16 *, __int64))(*(_QWORD *)v32 + 64LL))(
             v32,
             v35,
             v40,
             834LL) >= 0 )
        v6 = v10;
    }
  }
LABEL_10:
  wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(pvar);
  if ( v7 )
    (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
      a2,
      &PKEY_RS2_SpatialAudioEndpoint_Settings,
      pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
      a2,
      &PKEY_SpatialAudio_Endpoint_Settings,
      pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
  PropVariantClear(pvar);
  return v6;
}
