/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180004D00 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180018880 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800E6F6C (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800E7008 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800E73A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800195F4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18001E830 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001EB2C (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001EB50 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001EC10 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // r13d
  wchar_t *v5; // r14
  wchar_t *v6; // r12
  wchar_t *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // r12d
  wchar_t *v11; // r14
  wchar_t *v12; // r13
  wchar_t *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  wchar_t *v16; // r8
  __int64 v17; // r13
  int v18; // r15d
  int v19; // edx
  wchar_t *v20; // rax
  const wchar_t *v21; // r14
  wchar_t *v22; // r8
  __int64 v23; // rbx
  int v24; // r13d
  wchar_t *v25; // r12
  wchar_t *v26; // r14
  wchar_t *v27; // r15
  wchar_t *v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r14
  int v32; // r15d
  int v33; // edx
  wchar_t *v34; // rax
  const wchar_t *v35; // r14
  wchar_t *v36; // rax
  wchar_t *v37; // r13
  __int64 v38; // rax
  wchar_t *v39; // rax
  wchar_t *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r13d
  wchar_t *v44; // rdx
  __int64 v45; // rcx
  wchar_t *v46; // rdx
  wchar_t *v47; // rdx
  wchar_t *v48; // rdx
  __int64 v50; // r15
  wchar_t *v51; // r9
  __int64 v52; // r12
  int v53; // edx
  wchar_t *v54; // rax
  const wchar_t *v55; // r14
  wchar_t *v56; // rax
  wchar_t *v57; // r15
  __int64 v58; // rcx
  int v59; // r13d
  wchar_t *v60; // rdx
  wchar_t *v61; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *Str; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *v63; // [rsp+40h] [rbp-58h] BYREF
  wchar_t *v64; // [rsp+48h] [rbp-50h]
  wchar_t *v65; // [rsp+50h] [rbp-48h]
  int v67; // [rsp+A8h] [rbp+10h]
  wchar_t *v68; // [rsp+A8h] [rbp+10h]
  int v69; // [rsp+A8h] [rbp+10h]
  int v70; // [rsp+A8h] [rbp+10h]
  int v71; // [rsp+B0h] [rbp+18h]
  int v72; // [rsp+B8h] [rbp+20h]

  Str = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v61 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v63 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  if ( (int)CAudioEndpointId::ToString(this, &Str) < 0 || (int)CAppAudioSessionId::ToString((char *)this + 8, &v61) < 0 )
    JUMPOUT(0x180081460LL);
  v72 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v63);
  if ( v72 < 0 )
    JUMPOUT(0x18008145BLL);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &Str,
    L"%",
    L"%%");
  v2 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Control[v3] );
  if ( (_DWORD)v3 )
  {
    do
      ++v2;
    while ( aB[v2] );
    v4 = 0;
    v5 = Str;
    v6 = &Str[*((int *)Str - 4)];
    if ( Str >= v6 )
      goto LABEL_15;
    do
    {
      v7 = wcsstr(v5, L"|");
      if ( v7 )
      {
        v50 = (int)v3;
        do
        {
          ++v4;
          v5 = &v7[v50];
          v7 = wcsstr(&v7[v50], L"|");
        }
        while ( v7 );
      }
      if ( v5 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v5[v8] );
      }
      else
      {
        LODWORD(v8) = 0;
      }
      v5 += (int)v8 + 1;
    }
    while ( v5 < v6 );
    if ( v4 > 0 )
    {
      v51 = Str;
      v52 = *((int *)Str - 4);
      v70 = v52 + v4 * (v2 - v3);
      v53 = v70;
      if ( v70 <= (int)v52 )
        v53 = *((_DWORD *)Str - 4);
      if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v53)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v53);
        v51 = Str;
      }
      v54 = &v51[v52];
      v64 = v54;
      v55 = v51;
      while ( v55 < v54 )
      {
        while ( 1 )
        {
          v56 = wcsstr(v55, L"|");
          v57 = v56;
          if ( !v56 )
            break;
          v58 = v56 - Str;
          v59 = v52 - v58 - v3;
          v60 = &v56[(int)v3];
          v55 = &v56[(int)v2];
          if ( 2LL * v59 )
          {
            if ( !v55 || !v60 )
            {
              *(_DWORD *)_o__errno(v58, v60) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove_0(&v56[(int)v2], v60, 2LL * v59);
          }
          if ( 2LL * (int)v2 )
            memcpy_0(v57, L"%b", 2LL * (int)v2);
          v57[(int)v2 + v59] = 0;
          LODWORD(v52) = v2 - v3 + v52;
        }
        v55 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v55) + 1);
        v54 = v64;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v70);
      v2 = -1LL;
    }
    else
    {
LABEL_15:
      v2 = -1LL;
    }
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v61,
    L"%",
    L"%%");
  v9 = -1LL;
  do
    ++v9;
  while ( Control[v9] );
  if ( (_DWORD)v9 )
  {
    do
      ++v2;
    while ( aB[v2] );
    v10 = 0;
    v11 = v61;
    v12 = &v61[*((int *)v61 - 4)];
    if ( v61 < v12 )
    {
      do
      {
        v13 = wcsstr(v11, L"|");
        if ( v13 )
        {
          v14 = (int)v9;
          do
          {
            ++v10;
            v11 = &v13[v14];
            v13 = wcsstr(&v13[v14], L"|");
          }
          while ( v13 );
        }
        if ( v11 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v11[v15] );
        }
        else
        {
          LODWORD(v15) = 0;
        }
        v11 += (int)v15 + 1;
      }
      while ( v11 < v12 );
      if ( v10 > 0 )
      {
        v16 = v61;
        v17 = *((int *)v61 - 4);
        v67 = v17;
        v18 = v17 + v10 * (v2 - v9);
        if ( v18 <= (int)v17 )
          v19 = *((_DWORD *)v61 - 4);
        else
          v19 = v17 + v10 * (v2 - v9);
        if ( ((1 - *((_DWORD *)v61 - 2)) | (*((_DWORD *)v61 - 3) - v19)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v61, v19);
          v16 = v61;
        }
        v20 = &v16[v17];
        v64 = v20;
        v21 = v16;
        while ( v21 < v20 )
        {
          while ( 1 )
          {
            v39 = wcsstr(v21, L"|");
            v40 = v39;
            if ( !v39 )
              break;
            v42 = v39 - v61;
            v43 = v17 - v42 - v9;
            v44 = &v39[(int)v9];
            v21 = &v39[(int)v2];
            if ( 2LL * v43 )
            {
              if ( !v21 || !v44 )
              {
                *(_DWORD *)_o__errno(v42, v44) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v39[(int)v2], v44, 2LL * v43);
            }
            if ( 2LL * (int)v2 )
              memcpy_0(v40, L"%b", 2LL * (int)v2);
            v40[(int)v2 + v43] = 0;
            LODWORD(v17) = v2 - v9 + v67;
            v67 = v17;
          }
          if ( v21 )
          {
            v41 = -1LL;
            do
              ++v41;
            while ( v21[v41] );
          }
          else
          {
            LODWORD(v41) = 0;
          }
          v21 += (int)v41 + 1;
          v20 = v64;
        }
        if ( v18 < 0 || (v22 = v61, v18 > *((_DWORD *)v61 - 3)) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v61 - 4) = v18;
        v22[v18] = 0;
      }
    }
    v2 = -1LL;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v63,
    L"%",
    L"%%");
  v23 = -1LL;
  do
    ++v23;
  while ( Control[v23] );
  if ( (_DWORD)v23 )
  {
    do
      ++v2;
    while ( aB[v2] );
    v24 = 0;
    v25 = v63;
    v26 = v63;
    v27 = &v63[*((int *)v63 - 4)];
    v68 = v27;
    if ( v63 < v27 )
    {
      do
      {
        v28 = wcsstr(v26, L"|");
        if ( v28 )
        {
          v29 = (int)v23;
          do
          {
            ++v24;
            v26 = &v28[v29];
            v28 = wcsstr(&v28[v29], L"|");
          }
          while ( v28 );
          v27 = v68;
        }
        if ( v26 )
        {
          v30 = -1LL;
          do
            ++v30;
          while ( v26[v30] );
        }
        else
        {
          LODWORD(v30) = 0;
        }
        v26 += (int)v30 + 1;
      }
      while ( v26 < v27 );
      if ( v24 > 0 )
      {
        v31 = *((int *)v25 - 4);
        v69 = v31;
        v32 = v31 + v24 * (v2 - v23);
        if ( v32 <= (int)v31 )
          v33 = *((_DWORD *)v25 - 4);
        else
          v33 = v31 + v24 * (v2 - v23);
        if ( ((1 - *((_DWORD *)v25 - 2)) | (*((_DWORD *)v25 - 3) - v33)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v63, v33);
          v25 = v63;
        }
        v34 = &v25[v31];
        v65 = v34;
        v35 = v25;
        while ( v35 < v34 )
        {
          v64 = (wchar_t *)(int)v2;
          while ( 1 )
          {
            v36 = wcsstr(v35, L"|");
            v37 = v36;
            if ( !v36 )
              break;
            v45 = v36 - v25;
            v71 = v69 - v45 - v23;
            v46 = &v36[(int)v23];
            v35 = &v36[(_QWORD)v64];
            if ( 2LL * v71 )
            {
              if ( !v35 || !v46 )
              {
                *(_DWORD *)_o__errno(v45, v46) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v36[(_QWORD)v64], v46, 2LL * v71);
            }
            if ( 2LL * (int)v2 )
              memcpy_0(v37, L"%b", 2LL * (int)v2);
            v37[(int)v2 + v71] = 0;
            v69 += v2 - v23;
          }
          if ( v35 )
          {
            v38 = -1LL;
            do
              ++v38;
            while ( v35[v38] );
          }
          else
          {
            LODWORD(v38) = 0;
          }
          v35 += (int)v38 + 1;
          v34 = v65;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v63, v32);
      }
    }
  }
  else
  {
    v25 = v63;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
    (__int64 *)this + 9,
    L"%s|%s|%s",
    Str,
    v61,
    v25);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 - 3) + 8LL))(*((_QWORD *)v25 - 3));
  v47 = v61 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v61 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v47 + 8LL))(*(_QWORD *)v47);
  v48 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 8LL))(*(_QWORD *)v48);
  return (unsigned int)v72;
}
