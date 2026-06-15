/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801428B4
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___ @ 0x1801402A0 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x180142298 (CEndpointCharacteristics--GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014B678 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014B69C (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
        CEndpointCharacteristics *this,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int128 *a5,
        struct tWAVEFORMATEX **a6)
{
  int v7; // r12d
  int v9; // esi
  void *v10; // rcx
  int v11; // ebx
  const PROPERTYKEY *v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  const char *v15; // r9
  BYTE *pData; // rbx
  struct tWAVEFORMATEX *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9; // esi
  struct tWAVEFORMATEX *v21; // rcx
  int updated; // eax
  struct tWAVEFORMATEX *v23; // rsi
  int v24; // eax
  struct tWAVEFORMATEX *v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-A9h]
  char *v28; // [rsp+28h] [rbp-A1h]
  _BYTE v29[8]; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+48h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-79h] BYREF
  struct tWAVEFORMATEX **v32; // [rsp+68h] [rbp-61h]
  struct tWAVEFORMATEX *v33; // [rsp+70h] [rbp-59h] BYREF
  char v34; // [rsp+78h] [rbp-51h]
  __int128 v35; // [rsp+80h] [rbp-49h] BYREF
  __int128 v36; // [rsp+90h] [rbp-39h]
  __int128 v37; // [rsp+A0h] [rbp-29h]
  __int128 v38; // [rsp+B0h] [rbp-19h]
  GUID fmtid; // [rsp+C0h] [rbp-9h] BYREF
  DWORD pid; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  v30 = 0LL;
  if ( !a2 )
  {
    v12 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v12 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v12->fmtid;
    pid = v12->pid;
    memset(&pvar, 0, sizeof(pvar));
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            &fmtid,
            &pvar);
    if ( v13 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            v29[0] = 0;
            lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(a5, pvar.bstrblobVal.pData, v29);
            if ( v29[0] )
            {
              v32 = &v30;
              v33 = 0LL;
              v34 = 1;
              v11 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v33);
              if ( v34 )
              {
                v17 = *v32;
                *v32 = v33;
                if ( v17 )
                  CoTaskMemFree(v17);
              }
              if ( v11 < 0 )
              {
                v18 = (unsigned int)v11;
                v19 = 5970LL;
                goto LABEL_32;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1757, v14, v15, v27);
          }
        }
        else
        {
          LODWORD(v28) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x1763,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v28,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1746,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13);
    }
    if ( v30 )
      goto LABEL_34;
    v32 = &v30;
    v33 = 0LL;
    v34 = 1;
    v35 = *a5;
    v36 = a5[1];
    v37 = a5[2];
    v38 = a5[3];
    DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 = CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
                                                               this,
                                                               v7,
                                                               a4,
                                                               &v35,
                                                               &v33);
    if ( v34 )
    {
      v21 = *v32;
      *v32 = v33;
      if ( v21 )
        CoTaskMemFree(v21);
    }
    if ( DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 < 0 )
    {
      v11 = -2004287484;
      if ( DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9 != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176A,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9);
        v11 = DefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9;
      }
      goto LABEL_33;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, v7, a4, v30);
    v11 = updated;
    if ( updated >= 0 )
    {
LABEL_34:
      PropVariantClear((PROPVARIANT *)&pvar);
      goto LABEL_35;
    }
    v18 = (unsigned int)updated;
    v19 = 5997LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v18);
LABEL_33:
    PropVariantClear((PROPVARIANT *)&pvar);
LABEL_37:
    v25 = v30;
    goto LABEL_39;
  }
  *(_QWORD *)&pvar.vt = &v30;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  v35 = *a5;
  v36 = a5[1];
  v37 = a5[2];
  v38 = a5[3];
  v9 = CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
         this,
         a3,
         a4,
         &v35,
         (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  if ( *((_BYTE *)&pvar.decVal + 16) )
  {
    v10 = **(void ***)&pvar.vt;
    **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v9 < 0 )
  {
    v11 = -2004287484;
    if ( v9 != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x173D,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
      v11 = v9;
    }
    goto LABEL_37;
  }
LABEL_35:
  v23 = v30;
  v24 = ValidateWaveFormatEx(v30);
  v11 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1772,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_37;
  }
  v25 = 0LL;
  *a6 = v23;
  v11 = 0;
LABEL_39:
  v30 = 0LL;
  if ( v25 )
    CoTaskMemFree(v25);
  return (unsigned int)v11;
}
