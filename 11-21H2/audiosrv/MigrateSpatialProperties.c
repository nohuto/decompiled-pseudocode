/*
 * XREFs of MigrateSpatialProperties @ 0x180047F10
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x1800480A4 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1801368FC (Create_SpatialAudioDevicePropertyWriter.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x18013CAE8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@@-$_tlgWrite.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall MigrateSpatialProperties(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // r15
  char v7; // r14
  char v8; // r13
  int v9; // r8d
  int v10; // r9d
  int *v11; // rsi
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r11
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-A0h] BYREF
  int *v22; // [rsp+70h] [rbp-90h]
  unsigned int v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  int *v25; // [rsp+88h] [rbp-78h] BYREF
  int *v26; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v27[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v28; // [rsp+ACh] [rbp-54h]
  __int128 v29; // [rsp+BCh] [rbp-44h]
  int v30; // [rsp+DCh] [rbp-24h]
  BOOL v31; // [rsp+E4h] [rbp-1Ch]
  unsigned __int16 v32[256]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v33[128]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v34; // [rsp+3F0h] [rbp+2F0h]
  int v35; // [rsp+400h] [rbp+300h]
  int v36; // [rsp+404h] [rbp+304h]
  int v37; // [rsp+408h] [rbp+308h]
  int v38; // [rsp+40Ch] [rbp+30Ch]
  int v39; // [rsp+410h] [rbp+310h]
  int v40; // [rsp+414h] [rbp+314h]
  int v41; // [rsp+418h] [rbp+318h]
  __int128 v42; // [rsp+41Ch] [rbp+31Ch]
  __int16 v43; // [rsp+42Ch] [rbp+32Ch]
  __int16 v44; // [rsp+42Eh] [rbp+32Eh]
  __int16 v45; // [rsp+430h] [rbp+330h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  memset_0(v27, 0, 0x48uLL);
  memset_0(v32, 0, 0x342uLL);
  v24 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar) < 0 )
    goto LABEL_10;
  if ( LOWORD(pvar[0]) == 65 )
  {
    v11 = v22;
    if ( *v22 == 1509949441 )
    {
      if ( *(_DWORD *)a1 > 4u
        && (*(_BYTE *)(a1 + 16) & 0x10) != 0
        && (*(_QWORD *)(a1 + 24) & 0x10LL) == *(_QWORD *)(a1 + 24) )
      {
        v25 = v22 + 8;
        v26 = v22 + 4;
        v13 = v22[17];
        v23 = v13 & 0xFFFFFF7F;
        v19 = v13;
        v20 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
          a1,
          (unsigned int)&unk_18018E4E4,
          v9,
          v10,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v23,
          (__int64)&v26,
          (__int64)&v25);
      }
      *v11 = 1509949442;
      v11[17] &= ~0x80u;
      *((_OWORD *)v11 + 2) = *((_OWORD *)v11 + 1);
      if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
             a2,
             &PKEY_SpatialAudio_Endpoint_Settings,
             pvar) < 0 )
        goto LABEL_10;
      v6 = 1;
    }
    else if ( *v22 == 1509949442 )
    {
      v6 = 1;
    }
    else
    {
      v8 = 1;
      if ( *(_DWORD *)a1 > 2u
        && (*(_BYTE *)(a1 + 16) & 0x10) != 0
        && (*(_QWORD *)(a1 + 24) & 0x10LL) == *(_QWORD *)(a1 + 24) )
      {
        v19 = *v22;
        v20 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          a1,
          (unsigned int)&unk_18018E473,
          v9,
          v10,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
  }
  else if ( LOWORD(pvar[0]) )
  {
    if ( *(_DWORD *)a1 > 2u
      && (*(_BYTE *)(a1 + 16) & 0x10) != 0
      && (*(_QWORD *)(a1 + 24) & 0x10LL) == *(_QWORD *)(a1 + 24) )
    {
      v19 = LOWORD(pvar[0]);
      v20 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        a1,
        (unsigned int)&unk_18018E4AD,
        v9,
        v10,
        (__int64)&v20,
        (__int64)&v19);
    }
    v8 = 1;
  }
  wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         pvar) >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      v7 = 1;
    if ( !v6
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) >= 0x50
      && (int)Create_SpatialAudioDevicePropertyWriter(a3, a2, &v24) >= 0 )
    {
      v14 = 0;
      v15 = v22[17];
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = (__int64)v22 + 842 * v14 + 80;
          v17 = *(_QWORD *)(v16 + 776) - *(_QWORD *)(v22 + 5);
          if ( !v17 )
            v17 = *(_QWORD *)(v16 + 784) - *(_QWORD *)(v22 + 7);
          if ( !v17 )
            break;
          if ( ++v14 >= v15 )
            goto LABEL_41;
        }
        if ( v16 )
          goto LABEL_44;
      }
LABEL_41:
      if ( !v22[2] && v15 )
      {
        v16 = (__int64)(v22 + 20);
LABEL_44:
        v27[0] = v22[2];
        v30 = v22[18];
        v27[1] = v22[3];
        v27[2] = v22[4];
        v31 = v22[4] != 0;
        v28 = *(_OWORD *)(v22 + 5);
        v29 = *(_OWORD *)(v22 + 5);
        v34 = *(_OWORD *)(v16 + 776);
        v35 = *(_DWORD *)(v16 + 792);
        v36 = *(_DWORD *)(v16 + 796);
        v37 = *(_DWORD *)(v16 + 800);
        v38 = *(_DWORD *)(v16 + 804);
        v39 = *(_DWORD *)(v16 + 808);
        v40 = *(_DWORD *)(v16 + 812);
        v41 = *(_DWORD *)(v16 + 816);
        v42 = *(_OWORD *)(v16 + 820);
        v43 = *(_WORD *)(v16 + 836);
        v44 = *(_WORD *)(v16 + 838);
        v45 = *(_WORD *)(v16 + 840);
        StringCchCopyW(v32, 0x100uLL, (const unsigned __int16 *)(v16 + 8));
        StringCchCopyW(v33, 0x80uLL, (const unsigned __int16 *)(v18 + 520));
        v6 = (*(int (__fastcall **)(__int64, _DWORD *, unsigned __int16 *, __int64))(*(_QWORD *)v24 + 64LL))(
               v24,
               v27,
               v32,
               834LL) >= 0;
      }
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
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v24);
  PropVariantClear(pvar);
  return v6;
}
