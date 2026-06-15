/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020858
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020AA8 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014E5C0 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014E5E4 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *this,
        char a2,
        char a3,
        int a4,
        __int128 *a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  void *v10; // rcx
  struct tWAVEFORMATEX *v11; // rbx
  int v12; // eax
  int v13; // edi
  const PROPERTYKEY *v15; // rax
  int v16; // eax
  struct tWAVEFORMATEX *v17; // rcx
  int updated; // eax
  unsigned int v19; // r8d
  const char *v20; // r9
  BYTE *pData; // rdi
  struct tWAVEFORMATEX *v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // [rsp+20h] [rbp-A9h]
  char *v26; // [rsp+28h] [rbp-A1h]
  _BYTE v27[8]; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+48h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-79h] BYREF
  struct tWAVEFORMATEX **v30; // [rsp+68h] [rbp-61h]
  struct tWAVEFORMATEX *v31; // [rsp+70h] [rbp-59h] BYREF
  char v32; // [rsp+78h] [rbp-51h]
  __int128 v33; // [rsp+80h] [rbp-49h]
  __int128 v34; // [rsp+90h] [rbp-39h]
  __int128 v35; // [rsp+A0h] [rbp-29h]
  __int128 v36; // [rsp+B0h] [rbp-19h]
  GUID fmtid; // [rsp+C0h] [rbp-9h] BYREF
  DWORD pid; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  *a6 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    *(_QWORD *)&pvar.vt = &v28;
    pvar.hVal.QuadPart = 0LL;
    *((_BYTE *)&pvar.decVal + 16) = 1;
    v33 = *a5;
    v34 = a5[1];
    v35 = a5[2];
    v36 = a5[3];
    DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                               this,
                                                               (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
    if ( *((_BYTE *)&pvar.decVal + 16) )
    {
      v10 = **(void ***)&pvar.vt;
      **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
      if ( v10 )
        CoTaskMemFree(v10);
    }
    if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda >= 0 )
      goto LABEL_6;
    v13 = -2004287484;
    if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda == -2004287484 )
      goto LABEL_21;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda,
      v25);
LABEL_25:
    v13 = DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
    goto LABEL_21;
  }
  v15 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a4 != 3 )
    v15 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v15->fmtid;
  pid = v15->pid;
  memset(&pvar, 0, sizeof(pvar));
  v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
          *((_QWORD *)this + 9),
          &fmtid,
          &pvar);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18BE,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16);
  }
  else if ( pvar.vt )
  {
    if ( pvar.vt == 65 )
    {
      if ( (unsigned int)IsValidWfxBlob(&pvar) )
      {
        pData = pvar.bstrblobVal.pData;
        v27[0] = 0;
        lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a5, pvar.bstrblobVal.pData, v27);
        if ( v27[0] )
        {
          v30 = &v28;
          v31 = 0LL;
          v32 = 1;
          v13 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v31);
          if ( v32 )
          {
            v22 = *v30;
            *v30 = v31;
            if ( v22 )
              CoTaskMemFree(v22);
          }
          if ( v13 < 0 )
          {
            v23 = (unsigned int)v13;
            v24 = 6346LL;
            goto LABEL_37;
          }
        }
      }
      else
      {
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x18CF, v19, v20, v25);
      }
    }
    else
    {
      LODWORD(v26) = pvar.vt;
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x18DB,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0xD,
        (unsigned int)"Unexpected vartype %d (0x%08x)",
        v26);
    }
  }
  if ( !v28 )
  {
    v30 = &v28;
    v31 = 0LL;
    v32 = 1;
    v33 = *a5;
    v34 = a5[1];
    v35 = a5[2];
    v36 = a5[3];
    DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                               this,
                                                               &v31);
    if ( v32 )
    {
      v17 = *v30;
      *v30 = v31;
      if ( v17 )
        CoTaskMemFree(v17);
    }
    if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda < 0 )
    {
      v13 = -2004287484;
      if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18E2,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda,
          v25);
        PropVariantClear((PROPVARIANT *)&pvar);
        goto LABEL_25;
      }
LABEL_20:
      PropVariantClear((PROPVARIANT *)&pvar);
      goto LABEL_21;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, a3, a4, v28);
    v13 = updated;
    if ( updated >= 0 )
      goto LABEL_18;
    v23 = (unsigned int)updated;
    v24 = 6373LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v23,
      v25);
    goto LABEL_20;
  }
LABEL_18:
  PropVariantClear((PROPVARIANT *)&pvar);
LABEL_6:
  v11 = v28;
  v12 = ValidateWaveFormatEx(v28);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a6 = v11;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18EA,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12,
    v25);
LABEL_21:
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v28);
  return (unsigned int)v13;
}
