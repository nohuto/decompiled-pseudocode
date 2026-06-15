/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x18004F9B0 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001C644 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18003EF38 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18004FB14 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18005030C (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, const unsigned __int16 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  unsigned __int16 *v7; // rsi
  __int64 v8; // r8
  char *v9; // rdx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rsi
  __int64 v12; // r8
  char *v13; // rdx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // r15
  __int64 v17; // r8
  _QWORD *v18; // rax
  bool v19; // si
  __int64 v20; // rdx
  int v21; // ebx
  volatile signed __int32 *v23; // r15
  volatile signed __int32 *v24; // r15
  unsigned __int16 *v25; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v26; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int16 *v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+50h] [rbp-48h] BYREF
  int v32; // [rsp+A8h] [rbp+10h] BYREF
  int v33; // [rsp+B0h] [rbp+18h]
  __int64 v34; // [rsp+B8h] [rbp+20h] BYREF

  v33 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v26, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v34, (__int64)&ATL::g_strmgr);
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
  }
  else
  {
    LODWORD(v4) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(&v34, a2, v4);
  v32 = 0;
  v6 = (volatile signed __int32 *)(*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                                      &v34,
                                      &v28,
                                      v5,
                                      &v32)
                                 - 24LL);
  v7 = v27 - 12;
  if ( v6 != (volatile signed __int32 *)(v27 - 12) )
  {
    if ( *((int *)v7 + 4) < 0 || *(_QWORD *)v6 != *(_QWORD *)v7 )
      JUMPOUT(0x180080880LL);
    v23 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) <= 1 )
      JUMPOUT(0x18008085DLL);
    v27 = (unsigned __int16 *)(v23 + 6);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v32 == -1 )
    goto LABEL_46;
  v9 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v34,
                  &v29,
                  v8,
                  &v32);
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = (volatile signed __int32 *)(v26 - 12);
  if ( v9 - 24 != (char *)(v26 - 12) )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v24 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v10);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      v26 = (unsigned __int16 *)(v24 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v26, v9, *((_DWORD *)v9 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v32 == -1 )
    goto LABEL_46;
  v13 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v34,
                   &v30,
                   v12,
                   &v32);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = (volatile signed __int32 *)(v25 - 12);
  if ( v13 - 24 != (char *)(v25 - 12) )
  {
    if ( *((int *)v15 + 4) >= 0 && *(_QWORD *)v14 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15, v15);
      v25 = (unsigned __int16 *)(v16 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v25, v13, *((_DWORD *)v13 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  if ( v32 == -1 )
    goto LABEL_46;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v34,
          v31,
          v17,
          &v32);
  v19 = 1;
  v33 = 1;
  if ( !ATL::operator!=((__int64)v18, v20) )
    v19 = v32 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v31[0] - 24LL));
  if ( v19 )
LABEL_46:
    JUMPOUT(0x180080894LL);
  CAudioIdentifier::UnescapeIdentifierString(&v27);
  CAudioIdentifier::UnescapeIdentifierString(&v26);
  CAudioIdentifier::UnescapeIdentifierString(&v25);
  if ( (int)CAudioEndpointId::Initialize(this, v27) < 0
    || (int)CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)this + 8), v26) < 0
    || (int)CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)this + 56), v25) < 0
    || (v21 = CAudioSessionInstanceId::CalculateStaticId(this), v21 < 0) )
  {
    JUMPOUT(0x180080899LL);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  return (unsigned int)v21;
}
