/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800E1BEC
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E9980 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18004FB14 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082B7C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  int v7; // ebx
  __int64 v8; // rax
  char *v9; // rdx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // r15
  __int64 v13; // r8
  char *v14; // rdx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // r15
  __int64 v18; // r8
  char *v19; // rdx
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // r15
  __int64 v23; // r8
  char *v24; // rdx
  volatile signed __int32 *v25; // rcx
  volatile signed __int32 *v26; // r14
  volatile signed __int32 *v27; // r15
  __int64 v28; // r8
  _QWORD *v29; // rax
  bool v30; // r14
  __int64 v31; // rdx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // [rsp+20h] [rbp-98h] BYREF
  wchar_t *v39; // [rsp+28h] [rbp-90h] BYREF
  wchar_t *v40; // [rsp+30h] [rbp-88h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v42; // [rsp+40h] [rbp-78h] BYREF
  int v43; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h] BYREF
  __int64 v48; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v49; // [rsp+78h] [rbp-40h] BYREF
  ATL::CAtlException *v50; // [rsp+80h] [rbp-38h] BYREF
  int v52; // [rsp+C8h] [rbp+10h] BYREF
  CAudioSessionInstanceId *v53; // [rsp+D0h] [rbp+18h]
  unsigned int *v54; // [rsp+D8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v43 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v38, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v42, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v40, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v39, (__int64)&ATL::g_strmgr);
  v7 = 0;
  if ( a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
  }
  else
  {
    LODWORD(v8) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v38, a2, v8);
  }
  catch ( ATL::CAtlException *v49 )
  {
    v36 = (int *)v49;
    if ( *(_DWORD *)v49 == -1073741571 )
      _o__resetstkoflw();
    v52 = *v36;
    v7 = v52;
    if ( v52 < 0 )
      goto LABEL_43;
  }
  v52 = 0;
  v9 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v38,
                  &v44,
                  v37,
                  &v52);
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = (volatile signed __int32 *)(v42 - 12);
  if ( v9 - 24 != (char *)(v42 - 12) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v10);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      v42 = (unsigned __int16 *)(v12 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v42, v9, *((_DWORD *)v9 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 24));
  if ( v52 == -1 )
    goto LABEL_42;
  v14 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v38,
                   &v45,
                   v13,
                   &v52);
  v15 = (volatile signed __int32 *)(v14 - 24);
  v16 = (volatile signed __int32 *)(String - 12);
  if ( v14 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v16 + 4) >= 0 && *(_QWORD *)v15 == *(_QWORD *)v16 )
    {
      v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v15);
      if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16, v16);
      String = (wchar_t *)(v17 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&String, v14, *((_DWORD *)v14 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v45 - 24));
  if ( v52 == -1 )
    goto LABEL_42;
  v19 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v38,
                   &v46,
                   v18,
                   &v52);
  v20 = (volatile signed __int32 *)(v19 - 24);
  v21 = (volatile signed __int32 *)(v40 - 12);
  if ( v19 - 24 != (char *)(v40 - 12) )
  {
    if ( *((int *)v21 + 4) >= 0 && *(_QWORD *)v20 == *(_QWORD *)v21 )
    {
      v22 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v20);
      if ( _InterlockedExchangeAdd(v21 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21, v21);
      v40 = (wchar_t *)(v22 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v40, v19, *((_DWORD *)v19 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v46 - 24));
  if ( v52 == -1 )
    goto LABEL_42;
  v24 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v38,
                   &v47,
                   v23,
                   &v52);
  v25 = (volatile signed __int32 *)(v24 - 24);
  v26 = (volatile signed __int32 *)(v39 - 12);
  if ( v24 - 24 != (char *)(v39 - 12) )
  {
    if ( *((int *)v26 + 4) >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v25);
      if ( _InterlockedExchangeAdd(v26 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26, v26);
      v39 = (wchar_t *)(v27 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v39, v24, *((_DWORD *)v24 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v47 - 24));
  if ( v52 == -1 )
    goto LABEL_42;
  v29 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v38,
          &v48,
          v28,
          &v52);
  v30 = 1;
  v43 = 1;
  if ( !ATL::operator!=((__int64)v29, v31) )
    v30 = v52 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v48 - 24));
  if ( v30 )
  {
LABEL_42:
    v7 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v42);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&String);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v40);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v39);
    }
    catch ( ATL::CAtlException *v50 )
    {
      v52 = *(_DWORD *)v50;
      v7 = v52;
    }
    if ( v7 >= 0 )
    {
      v7 = CAudioSessionInstanceId::Initialize(v53, a1, v42);
      if ( v7 >= 0 )
      {
        v33 = wcstoul(String, 0LL, 10);
        *v54 = v33;
        v34 = wcstoul(v40, 0LL, 10);
        *a5 = v34;
        v35 = wcstoul(v39, 0LL, 10);
        *a6 = v35 != 0;
        goto LABEL_44;
      }
    }
  }
LABEL_43:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 552, v7);
LABEL_44:
  ATL::CStringData::Release((ATL::CStringData *)(v39 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v42 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  return (unsigned int)v7;
}
