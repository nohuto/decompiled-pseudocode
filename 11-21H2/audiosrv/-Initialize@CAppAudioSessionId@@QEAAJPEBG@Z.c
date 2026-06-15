/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800E660C
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800E7008 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800E73A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180020AB8 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800DAFB0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x1800E60CC (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800E6294 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800E62E8 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800E6434 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7998 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // r15
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // rbx
  __int64 *v14; // rax
  char *v15; // rdx
  volatile signed __int32 *v16; // rcx
  int *v17; // r12
  volatile signed __int32 *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rax
  int v21; // r14d
  unsigned __int16 *v22; // rcx
  char v23; // r12
  int v24; // edi
  __int64 v25; // rdx
  char *v26; // rcx
  int *v27; // r14
  volatile signed __int32 *v28; // rdi
  int *v29; // rbx
  int *v30; // rbx
  int *v31; // rbx
  int v32; // [rsp+20h] [rbp-198h] BYREF
  void *Src; // [rsp+28h] [rbp-190h] BYREF
  int v34; // [rsp+30h] [rbp-188h]
  char *v35; // [rsp+38h] [rbp-180h] BYREF
  char *v36; // [rsp+40h] [rbp-178h] BYREF
  __int64 v37; // [rsp+48h] [rbp-170h] BYREF
  CAppAudioSessionId *v38; // [rsp+50h] [rbp-168h]
  ATL::CAtlException *v39; // [rsp+58h] [rbp-160h] BYREF
  ATL::CAtlException *v40; // [rsp+60h] [rbp-158h] BYREF
  ATL::CAtlException *v41; // [rsp+68h] [rbp-150h] BYREF
  LPCOLESTR lpsz; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v43[264]; // [rsp+78h] [rbp-140h] BYREF

  v3 = this;
  v38 = this;
  v4 = 0;
  v34 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v35, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v36, (__int64)&ATL::g_strmgr);
  v5 = -1LL;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v36, a2, v6);
  }
  catch ( ATL::CAtlException *v39 )
  {
    v29 = (int *)v39;
    if ( *(_DWORD *)v39 == -1073741571 )
      _o__resetstkoflw();
    v32 = *v29;
    v7 = v32;
    if ( v32 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v4 = v34;
    v3 = v38;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v32 = 0;
  if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[]((__int64 *)&v36, 0) == 124 )
  {
    v9 = (char *)&unk_18017F160;
  }
  else
  {
    v14 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
            (__int64 *)&v36,
            &v37,
            v8,
            &v32);
    v4 = 1;
    v34 = 1;
    v9 = (char *)*v14;
    if ( !*v14 )
    {
      LODWORD(v10) = 0;
      goto LABEL_12;
    }
  }
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&v9[2 * v10] );
LABEL_12:
  ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v35, v9, v10);
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    ATL::CStringData::Release((ATL::CStringData *)(v37 - 24));
  }
  if ( v32 == -1 )
  {
    v7 = -2147467259;
LABEL_16:
    v12 = (char *)Src;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, v7);
    goto LABEL_18;
  }
  v15 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v36,
                   &v37,
                   v11,
                   &v32);
  v16 = (volatile signed __int32 *)(v15 - 24);
  v12 = (char *)Src;
  v17 = (int *)((char *)Src - 24);
  if ( v15 - 24 != (char *)Src - 24 )
  {
    if ( v17[4] >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v16);
      ATL::CStringData::Release((ATL::CStringData *)v17);
      v12 = (char *)(v18 + 6);
      Src = v12;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&Src, v15, *((_DWORD *)v15 - 4));
      v12 = (char *)Src;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v37 - 24));
  if ( v32 == -1 )
    goto LABEL_27;
  v20 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v36,
          &v37,
          v19,
          &v32);
  v21 = v4 | 2;
  v34 = v21;
  if ( ATL::operator!=(v22, v20) || (v23 = 0, v32 != -1) )
    v23 = 1;
  if ( (v21 & 2) != 0 )
    ATL::CStringData::Release((ATL::CStringData *)(v37 - 24));
  if ( v23 )
  {
LABEL_27:
    v7 = -2147467259;
    goto LABEL_17;
  }
  if ( *((_DWORD *)v35 - 4) == 1
    && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt((unsigned __int16 **)&v35) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v35);
    }
    catch ( ATL::CAtlException *v40 )
    {
      v30 = (int *)v40;
      if ( *(_DWORD *)v40 == -1073741571 )
        _o__resetstkoflw();
      v32 = *v30;
      v7 = v32;
      if ( v32 < 0 )
        goto LABEL_16;
      v5 = -1LL;
      v3 = v38;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v41 )
  {
    v31 = (int *)v41;
    if ( *(_DWORD *)v41 == -1073741571 )
      _o__resetstkoflw();
    v32 = *v31;
    v7 = v32;
    if ( v32 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v3 = v38;
  }
  lpsz = (LPCOLESTR)v43;
  v12 = (char *)Src;
  if ( Src )
  {
    do
      ++v5;
    while ( *((_WORD *)Src + v5) );
    v24 = v5 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((__int64 *)&lpsz, v24, (__int64)v43);
    if ( 2LL * v24 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL, v25) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, v12, 2LL * v24);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v7 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v43 )
    free((void *)lpsz);
  if ( v7 < 0 )
    goto LABEL_17;
  v26 = v35 - 24;
  v27 = (int *)(*(_QWORD *)v3 - 24LL);
  if ( v35 - 24 != (char *)v27 )
  {
    if ( v27[4] >= 0 && *(_QWORD *)v26 == *(_QWORD *)v27 )
    {
      v28 = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)v26);
      ATL::CStringData::Release((ATL::CStringData *)v27);
      *(_QWORD *)v3 = v28 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v3, v35, *((_DWORD *)v26 + 2));
    }
  }
  v7 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3);
  if ( v7 < 0 )
    goto LABEL_17;
LABEL_18:
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  return (unsigned int)v7;
}
