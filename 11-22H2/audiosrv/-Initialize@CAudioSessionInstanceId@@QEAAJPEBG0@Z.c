/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082BAC
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800E1C3C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001C644 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18003EF38 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18004FB14 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18005030C (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  CAudioSessionInstanceId *v4; // rsi
  int v5; // ebx
  __int64 v6; // rax
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // r14
  volatile signed __int32 *v10; // r15
  __int64 v11; // r8
  char *v12; // rdx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // r15
  __int64 v16; // r8
  _QWORD *v17; // rax
  bool v18; // r14
  __int64 v19; // rdx
  int *v21; // rbx
  __int64 v22; // r8
  unsigned __int16 *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v24; // [rsp+28h] [rbp-60h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v29; // [rsp+50h] [rbp-38h] BYREF
  ATL::CAtlException *v30; // [rsp+58h] [rbp-30h] BYREF
  int v33; // [rsp+A0h] [rbp+18h] BYREF
  int v34; // [rsp+A8h] [rbp+20h]

  v4 = this;
  v34 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v24, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v23, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  v5 = 0;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v25, a3, v6);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v21 = (int *)v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _o__resetstkoflw();
    v33 = *v21;
    v5 = v33;
    if ( v33 < 0 )
      goto LABEL_33;
    v4 = this;
  }
  v33 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v25,
                  &v26,
                  v22,
                  &v33);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = (volatile signed __int32 *)(v24 - 12);
  if ( v7 - 24 != (char *)(v24 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v24 = (unsigned __int16 *)(v10 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v24, v7, *((_DWORD *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v33 == -1 )
    goto LABEL_27;
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v27,
                   v11,
                   &v33);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (volatile signed __int32 *)(v23 - 12);
  if ( v12 - 24 != (char *)(v23 - 12) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      v23 = (unsigned __int16 *)(v15 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v23, v12, *((_DWORD *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v33 == -1 )
    goto LABEL_27;
  v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v25,
          &v28,
          v16,
          &v33);
  v18 = 1;
  v34 = 1;
  if ( !ATL::operator!=((__int64)v17, v19) )
    v18 = v33 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v18 )
  {
LABEL_27:
    v5 = -2147467259;
LABEL_33:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 867, v5);
    goto LABEL_34;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v24);
    CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v23);
  }
  catch ( ATL::CAtlException *v30 )
  {
    v33 = *(_DWORD *)v30;
    v4 = this;
    v5 = v33;
  }
  if ( v5 < 0 )
    goto LABEL_33;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_33;
  v5 = CAppAudioSessionId::Initialize((GUID *)((char *)v4 + 8), v24);
  if ( v5 < 0 )
    goto LABEL_33;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), v23);
  if ( v5 < 0 )
    goto LABEL_33;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v5 < 0 )
    goto LABEL_33;
LABEL_34:
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 12));
  return (unsigned int)v5;
}
