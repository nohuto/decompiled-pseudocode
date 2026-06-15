/*
 * XREFs of SearchForHeadphones @ 0x180053C20
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800537D8 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SearchForHeadphones(__int64 a1, char *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  HRESULT v12; // edi
  ULONG v13; // edi
  int v14; // eax
  int v15; // ebx
  char v16; // bl
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  ULONG pulRet; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-55h] BYREF
  __int64 v23; // [rsp+28h] [rbp-51h] BYREF
  __int64 v24; // [rsp+30h] [rbp-49h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h]
  PROPVARIANT propvarIn[4]; // [rsp+50h] [rbp-29h] BYREF
  PROPERTYKEY v28; // [rsp+70h] [rbp-9h] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h]
  __int128 v30; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a2 = 0;
  v22 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v22);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      pulRet);
    return v5;
  }
  else
  {
    v6 = 0;
    if ( v22 )
    {
      while ( 1 )
      {
        if ( *a2 )
          return 0LL;
        v24 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v6, &v24);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD5,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v7,
            pulRet);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          return v8;
        }
        v23 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 32LL))(v24, 0LL, &v23);
        v10 = retaddr;
        if ( v9 < 0 )
          break;
        pulRet = 10;
        v11 = v23;
        v29 = v23;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        pulRet = 0;
        LOWORD(propvarIn[0]) = 0;
        v28 = PKEY_AudioEndpoint_FormFactor;
        v12 = (*(__int64 (__fastcall **)(__int64, PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                v11,
                &v28,
                propvarIn);
        if ( v12 >= 0 )
        {
          if ( LOWORD(propvarIn[0]) )
          {
            pulRet = 0;
            v12 = PropVariantToUInt32(propvarIn, &pulRet);
          }
          else
          {
            v12 = -2147023728;
          }
        }
        PropVariantClear(propvarIn);
        if ( v12 == -2147023728 )
        {
          v13 = 10;
          pulRet = 10;
        }
        else
        {
          v13 = pulRet;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *(_OWORD *)pvar = 0LL;
        v26 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
                v23,
                &PKEY_Device_ContainerId,
                pvar);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x53,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v14,
            pulRet);
        }
        else if ( LOWORD(pvar[0]) == 72 )
        {
          v30 = *(_OWORD *)pvar[1];
          PropVariantClear(pvar);
          v15 = 0;
        }
        else
        {
          PropVariantClear(pvar);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5B,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)0x80070002LL,
            pulRet);
          v15 = -2147024894;
        }
        v10 = retaddr;
        if ( v15 < 0 )
        {
          v18 = (unsigned int)v15;
          v19 = 184LL;
          goto LABEL_24;
        }
        if ( v13 != 3 )
          goto LABEL_18;
        v20 = v30;
        if ( !(_QWORD)v30 )
          v20 = *((_QWORD *)&v30 + 1) + 1LL;
        if ( v20 )
LABEL_18:
          v16 = 0;
        else
          v16 = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
LABEL_20:
        *a2 = v16;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( ++v6 >= v22 )
          return 0LL;
      }
      v18 = (unsigned int)v9;
      v19 = 179LL;
LABEL_24:
      wil::details::in1diag3::_Log_Hr(
        v10,
        (void *)v19,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)v18,
        pulRet);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v16 = 0;
      goto LABEL_20;
    }
    return 0LL;
  }
}
