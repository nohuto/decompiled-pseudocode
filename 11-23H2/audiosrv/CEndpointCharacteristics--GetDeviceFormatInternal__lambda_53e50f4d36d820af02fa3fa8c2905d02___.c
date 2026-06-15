/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4
 * Callers:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180054094 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180054774 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014E570 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014E594 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        CEndpointCharacteristics *this,
        char a2,
        char a3,
        int a4,
        _OWORD *a5,
        _QWORD *a6)
{
  int v6; // r15d
  char v7; // r12
  CEndpointCharacteristics *v8; // rdi
  _QWORD *v9; // r13
  const PROPERTYKEY *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  const char *v13; // r9
  const struct tWAVEFORMATEX *v14; // r13
  __int64 v15; // rcx
  int *v16; // r9
  struct _GUID v17; // xmm0
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // ecx
  struct _GUID *v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rcx
  __int64 v25; // rax
  const struct tWAVEFORMATEX ***v26; // rbx
  const struct tWAVEFORMATEX ***v27; // r15
  __int64 cbSize; // rbx
  void *v29; // rax
  void *v30; // r15
  int v31; // edi
  LPVOID v32; // rbx
  int v33; // eax
  _QWORD *v35; // rdx
  __int64 v36; // rax
  int DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02; // ebx
  void *v38; // rcx
  void *v39; // rcx
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  int updated; // eax
  unsigned int v43; // [rsp+20h] [rbp-B9h]
  char *v44; // [rsp+28h] [rbp-B1h]
  LPVOID pv; // [rsp+48h] [rbp-91h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-89h] BYREF
  void *Src; // [rsp+60h] [rbp-79h]
  int v49; // [rsp+68h] [rbp-71h]
  CEndpointCharacteristics *v50; // [rsp+70h] [rbp-69h]
  _QWORD *v51; // [rsp+78h] [rbp-61h]
  struct _GUID v52; // [rsp+80h] [rbp-59h] BYREF
  __int128 v53; // [rsp+90h] [rbp-49h]
  struct _GUID v54; // [rsp+A0h] [rbp-39h] BYREF
  char v55; // [rsp+B0h] [rbp-29h]
  GUID fmtid; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v57; // [rsp+D0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v6 = a4;
  v49 = a4;
  v7 = a3;
  v8 = this;
  v50 = this;
  v9 = a6;
  v51 = a6;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar[0] = &pv;
    pvar[1] = 0LL;
    LOBYTE(Src) = 1;
    fmtid = (GUID)*a5;
    v57 = a5[1];
    DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                               this,
                                                               (struct tWAVEFORMATEX **)&pvar[1]);
    if ( (_BYTE)Src )
    {
      v39 = *(void **)pvar[0];
      *(_QWORD *)pvar[0] = pvar[1];
      if ( v39 )
        CoTaskMemFree(v39);
    }
    if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 >= 0 )
      goto LABEL_31;
    v31 = -2004287484;
    if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 == -2004287484 )
      goto LABEL_44;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02,
      v43);
    goto LABEL_52;
  }
  v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a4 != 3 )
    v10 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v10->fmtid;
  LODWORD(v57) = v10->pid;
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
          *((_QWORD *)this + 9),
          &fmtid,
          pvar);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18BE,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_29;
  }
  if ( !LOWORD(pvar[0]) )
    goto LABEL_29;
  if ( LOWORD(pvar[0]) != 65 )
  {
    LODWORD(v44) = LOWORD(pvar[0]);
    wil::details::in1diag3::Log_Win32Msg(
      retaddr,
      (void *)0x18DB,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0xD,
      (unsigned int)"Unexpected vartype %d (0x%08x)",
      v44);
    goto LABEL_29;
  }
  if ( LOWORD(pvar[0]) != 65 )
    goto LABEL_65;
  if ( LODWORD(pvar[1]) < 0x12 )
    goto LABEL_65;
  v14 = (const struct tWAVEFORMATEX *)Src;
  v15 = *((unsigned __int16 *)Src + 8) + 18LL;
  if ( LODWORD(pvar[1]) != v15 )
    goto LABEL_65;
  v8 = *(CEndpointCharacteristics **)a5;
  if ( *((_DWORD *)a5 + 2) != 3 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a5 + 1536LL) )
    {
      v16 = *(int **)(*(_QWORD *)a5 + 1544LL);
      goto LABEL_13;
    }
    _o_terminate(v15);
    __debugbreak();
LABEL_65:
    wil::details::in1diag3::Log_Win32(retaddr, (void *)0x18CF, v12, v13, v43);
    goto LABEL_29;
  }
  v16 = (int *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                 (unsigned __int64 *)(*(_QWORD *)a5 + 1536LL),
                 3uLL);
LABEL_13:
  v17 = *(struct _GUID *)((char *)a5 + 12);
  v52 = v17;
  v18 = 264LL;
  if ( *((_DWORD *)a5 + 2) != 3 )
    v18 = 240LL;
  v19 = *((_QWORD *)v8 + 161) + v18;
  v20 = 0;
  if ( v16[4] <= 0 )
    goto LABEL_16;
  while ( 1 )
  {
    v35 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v20);
    v36 = *v35 - *(_QWORD *)&v52.Data1;
    if ( *v35 == *(_QWORD *)&v52.Data1 )
      v36 = v35[1] - *(_QWORD *)v52.Data4;
    if ( !v36 )
      break;
    if ( ++v20 >= v16[4] )
      goto LABEL_16;
  }
  if ( v20 == -1 )
  {
LABEL_16:
    v52 = v17;
    v21 = &v52;
  }
  else
  {
    v52 = v17;
    v21 = CAudioSignalProcessingModeMap::Lookup((CAudioSignalProcessingModeMap *)v16, &v54, &v52);
  }
  v52 = *v21;
  v22 = *(_QWORD **)v19;
  v23 = *(_QWORD **)(v19 + 8);
  if ( *(_QWORD **)v19 != v23 )
  {
    do
    {
      v24 = (_QWORD *)*v22;
      v25 = *(_QWORD *)*v22 - *(_QWORD *)&v52.Data1;
      if ( !v25 )
        v25 = v24[1] - *(_QWORD *)v52.Data4;
      if ( !v25 )
      {
        v26 = (const struct tWAVEFORMATEX ***)v24[2];
        v27 = (const struct tWAVEFORMATEX ***)v24[3];
        while ( v26 != v27 )
        {
          if ( (unsigned int)CompareWaveFormat(v14, **v26) )
          {
            cbSize = v14->cbSize;
            v29 = CoTaskMemAlloc(cbSize + 18);
            v30 = v29;
            if ( v29 )
            {
              memcpy_0(v29, v14, cbSize + 18);
              v31 = 0;
            }
            else
            {
              v31 = -2147024882;
            }
            pv = v30;
            if ( v31 < 0 )
            {
              v40 = (unsigned int)v31;
              v41 = 6346LL;
              goto LABEL_63;
            }
            goto LABEL_27;
          }
          ++v26;
        }
      }
      ++v22;
    }
    while ( v22 != v23 );
LABEL_27:
    v6 = v49;
  }
  v8 = v50;
  v7 = a3;
LABEL_29:
  if ( !pv )
  {
    *(_QWORD *)&v54.Data1 = &pv;
    *(_QWORD *)v54.Data4 = 0LL;
    v55 = 1;
    v52 = (struct _GUID)*a5;
    v53 = a5[1];
    DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                               v8,
                                                               (struct tWAVEFORMATEX **)v54.Data4);
    if ( v55 )
    {
      v38 = **(void ***)&v54.Data1;
      **(_QWORD **)&v54.Data1 = *(_QWORD *)v54.Data4;
      if ( v38 )
        CoTaskMemFree(v38);
    }
    if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 >= 0 )
    {
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v8, v7, v6, (const struct tWAVEFORMATEX *)pv);
      v31 = updated;
      if ( updated >= 0 )
        goto LABEL_30;
      v40 = (unsigned int)updated;
      v41 = 6373LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v41,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v40,
        v43);
LABEL_43:
      PropVariantClear(pvar);
      goto LABEL_44;
    }
    v31 = -2004287484;
    if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 == -2004287484 )
      goto LABEL_43;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E2,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02,
      v43);
    PropVariantClear(pvar);
LABEL_52:
    v31 = DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02;
    goto LABEL_44;
  }
LABEL_30:
  PropVariantClear(pvar);
  v9 = v51;
LABEL_31:
  v32 = pv;
  v33 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
  v31 = v33;
  if ( v33 >= 0 )
  {
    *v9 = v32;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18EA,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v33,
    v43);
LABEL_44:
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
  return (unsigned int)v31;
}
