/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180004D00 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180018880 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800E64CC (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800E660C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18001E830 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001EB2C (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800C36C0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C5788 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800D691C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800D90B8 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v5; // rdi
  BSTR v6; // rbx
  __int64 v7; // rax
  wchar_t *v8; // rdx
  wchar_t *v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  size_t v13; // r8
  wchar_t *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  wchar_t *v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rsi
  wchar_t *v22; // rdx
  wchar_t *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 *v26; // rcx
  wchar_t *v27; // rdx
  _QWORD *v28; // rdx
  _DWORD *v30; // rsi
  __int64 v31; // rax
  HINSTANCE StringResourceInstance; // rax
  __int64 v33; // rax
  wchar_t *v34; // r9
  __int64 v35; // r14
  int v36; // edx
  wchar_t *v37; // rax
  const wchar_t *v38; // r14
  wchar_t *v39; // rax
  wchar_t *v40; // r9
  __int64 v41; // rcx
  wchar_t *v42; // rdx
  __int64 v43; // r12
  wchar_t *v44; // r8
  __int64 v45; // r14
  int v46; // edx
  wchar_t *v47; // rax
  const wchar_t *v48; // r14
  wchar_t *v49; // rax
  wchar_t *v50; // r12
  __int64 v51; // rcx
  wchar_t *v52; // rdx
  unsigned int v53; // [rsp+20h] [rbp-118h]
  int v54; // [rsp+20h] [rbp-118h]
  int v55; // [rsp+20h] [rbp-118h]
  int v56; // [rsp+20h] [rbp-118h]
  int v57; // [rsp+20h] [rbp-118h]
  wchar_t *Str; // [rsp+28h] [rbp-110h] BYREF
  int v59; // [rsp+30h] [rbp-108h]
  int v60[2]; // [rsp+38h] [rbp-100h]
  unsigned __int64 v61; // [rsp+40h] [rbp-F8h]
  _QWORD *v62; // [rsp+48h] [rbp-F0h] BYREF
  wchar_t *v63; // [rsp+50h] [rbp-E8h]
  wchar_t *v64; // [rsp+58h] [rbp-E0h]
  const GUID *v65; // [rsp+60h] [rbp-D8h]
  BSTR v66; // [rsp+68h] [rbp-D0h]
  OLECHAR sz[64]; // [rsp+80h] [rbp-B8h] BYREF

  v65 = this;
  v2 = *(const void **)&this->Data1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
  if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
  {
    _InterlockedIncrement(v3 + 4);
  }
  else
  {
    v30 = v3 + 2;
    v31 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
    v3 = (volatile signed __int32 *)v31;
    if ( !v31 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v31 + 8) = *v30;
    memcpy_s((void *const)(v31 + 24), 2LL * (*v30 + 1), v2, 2LL * (*v30 + 1));
  }
  v5 = v3 + 6;
  v62 = v5;
  if ( !*(_DWORD *)this[2].Data4 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v62,
      L"%",
      L"%%");
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v62,
      L"|",
      L"%b");
    v5 = v62;
  }
  StringFromGUID2(this + 1, sz, 64);
  v6 = SysAllocString(sz);
  v66 = v6;
  if ( !v6 )
    ATL::AtlThrowImpl(-2147024882);
  v7 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  v9 = (wchar_t *)(v7 + 24);
  Str = (wchar_t *)(v7 + 24);
  if ( (unsigned __int64)v6 < 0x10000 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v6, (unsigned __int16)v8);
    if ( StringResourceInstance )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &Str,
        StringResourceInstance,
        (unsigned __int16)v6);
      v14 = Str;
      goto LABEL_20;
    }
LABEL_61:
    v14 = Str;
    goto LABEL_20;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( v6[v10] );
  if ( !(_DWORD)v10 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(&Str);
    goto LABEL_61;
  }
  v53 = *(_DWORD *)(v7 + 8);
  v11 = v6 - v9;
  v12 = (unsigned int)(1 - *(_DWORD *)(v7 + 16));
  if ( (int)(v12 | (*(_DWORD *)(v7 + 12) - v10)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v10);
    v9 = Str;
  }
  v13 = 2LL * (int)v10;
  if ( v11 <= v53 )
  {
    v8 = &v9[v11];
    if ( !v13 )
      goto LABEL_17;
    if ( v9 && v8 )
    {
      memmove_0(v9, v8, v13);
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v13 )
      goto LABEL_17;
    if ( v9 )
    {
      memcpy_0(v9, v6, v13);
      goto LABEL_17;
    }
  }
  *(_DWORD *)_o__errno(v12, v8) = 22;
  invalid_parameter_noinfo();
LABEL_17:
  if ( (int)v10 < 0 || (v14 = Str, (int)v10 > *((_DWORD *)Str - 3)) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)Str - 4) = v10;
  v14[(int)v10] = 0;
LABEL_20:
  SysFreeString(v6);
  v15 = -1LL;
  do
    ++v15;
  while ( SubStr[v15] );
  if ( (_DWORD)v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( asc_18017DA7C[v16] );
    v54 = 0;
    *(_QWORD *)v60 = &v14[*((int *)Str - 4)];
    if ( (unsigned __int64)v14 < *(_QWORD *)v60 )
    {
      do
      {
        v17 = wcsstr(v14, L"%");
        if ( v17 )
        {
          v33 = 2LL * (int)v15;
          v63 = (wchar_t *)v33;
          do
          {
            ++v54;
            v14 = (wchar_t *)((char *)v17 + v33);
            v17 = wcsstr((wchar_t *)((char *)v17 + v33), L"%");
            v33 = (__int64)v63;
          }
          while ( v17 );
        }
        if ( v14 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v14[v18] );
        }
        else
        {
          LODWORD(v18) = 0;
        }
        v14 += (int)v18 + 1;
      }
      while ( (unsigned __int64)v14 < *(_QWORD *)v60 );
      v19 = v54;
      if ( v54 > 0 )
      {
        v34 = Str;
        v35 = *((int *)Str - 4);
        v56 = v35;
        v60[0] = v35 + v19 * (v16 - v15);
        v36 = v60[0];
        if ( v60[0] <= (int)v35 )
          v36 = v35;
        if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v36)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v36);
          v34 = Str;
        }
        v37 = &v34[v35];
        v61 = (unsigned __int64)v37;
        v38 = v34;
        while ( v38 < v37 )
        {
          v64 = (wchar_t *)(int)v16;
          while ( 1 )
          {
            v39 = wcsstr(v38, L"%");
            v40 = v39;
            v63 = v39;
            if ( !v39 )
              break;
            v41 = v39 - Str;
            v59 = v56 - v41 - v15;
            v42 = &v39[(int)v15];
            v38 = &v39[(_QWORD)v64];
            if ( 2LL * v59 )
            {
              if ( !v38 || !v42 )
              {
                *(_DWORD *)_o__errno(v41, v42) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v39[(_QWORD)v64], v42, 2LL * v59);
              v40 = v63;
            }
            if ( 2LL * (int)v16 )
            {
              memcpy_0(v40, L"%%", 2LL * (int)v16);
              v40 = v63;
            }
            v40[(int)v16 + v59] = 0;
            v56 += v16 - v15;
          }
          v38 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v38) + 1);
          v37 = (wchar_t *)v61;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v60[0]);
      }
    }
    v14 = Str;
  }
  v20 = -1LL;
  do
    ++v20;
  while ( Control[v20] );
  if ( (_DWORD)v20 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( aB[v21] );
    v55 = 0;
    v22 = Str;
    v61 = (unsigned __int64)&v14[*((int *)Str - 4)];
    if ( (unsigned __int64)v14 >= v61 )
      goto LABEL_46;
    do
    {
      v23 = wcsstr(v14, L"|");
      if ( v23 )
      {
        v43 = (int)v20;
        do
        {
          ++v55;
          v14 = &v23[v43];
          v23 = wcsstr(&v23[v43], L"|");
        }
        while ( v23 );
      }
      if ( v14 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( v14[v24] );
      }
      else
      {
        LODWORD(v24) = 0;
      }
      v14 += (int)v24 + 1;
    }
    while ( (unsigned __int64)v14 < v61 );
    v25 = v55;
    if ( v55 > 0 )
    {
      v44 = Str;
      v45 = *((int *)Str - 4);
      v57 = v45;
      v59 = v45 + (v21 - v20) * v25;
      v46 = v59;
      if ( v59 <= (int)v45 )
        v46 = v45;
      if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v46)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v46);
        v44 = Str;
      }
      v47 = &v44[v45];
      v64 = v47;
      v48 = v44;
      while ( v48 < v47 )
      {
        v61 = (int)v21;
        while ( 1 )
        {
          v49 = wcsstr(v48, L"|");
          v50 = v49;
          if ( !v49 )
            break;
          v51 = v49 - Str;
          v60[0] = v57 - v51 - v20;
          v52 = &v49[(int)v20];
          v48 = &v49[v61];
          if ( 2LL * v60[0] )
          {
            if ( !v48 || !v52 )
            {
              *(_DWORD *)_o__errno(v51, v52) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove_0(&v49[v61], v52, 2LL * v60[0]);
          }
          if ( 2LL * (int)v21 )
            memcpy_0(v50, L"%b", 2LL * (int)v21);
          v50[(int)v21 + v60[0]] = 0;
          v57 += v21 - v20;
        }
        v48 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v48) + 1);
        v47 = v64;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v59);
    }
  }
  v22 = Str;
LABEL_46:
  v26 = (__int64 *)&v65[2];
  if ( *(_DWORD *)v65[2].Data4 )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v26,
      L"#|%s",
      v22);
  else
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v26,
      L"%s|%s",
      v5,
      v22);
  v27 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v27 + 8LL))(*(_QWORD *)v27);
  v28 = v62 - 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v62 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 8LL))(*v28);
  return 0LL;
}
