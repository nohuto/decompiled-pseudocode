/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082BAC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001C524 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18004FF98 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180050084 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?Init@?$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z @ 0x180051F84 (-Init@-$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, const unsigned __int16 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  const void **v6; // rax
  _WORD *v7; // rdx
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // r8
  char *v11; // rdx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // r14
  __int64 v14; // r8
  _QWORD *v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  char v18; // r14
  HRESULT v19; // ebx
  char *v20; // rcx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // r14
  int v23; // ebx
  volatile signed __int32 *v25; // rbx
  int v26; // [rsp+20h] [rbp-1A8h] BYREF
  int v27; // [rsp+24h] [rbp-1A4h]
  __int64 v28; // [rsp+30h] [rbp-198h] BYREF
  volatile signed __int32 *v29; // [rsp+38h] [rbp-190h] BYREF
  const void *v30[2]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v31; // [rsp+50h] [rbp-178h] BYREF
  __int64 v32; // [rsp+58h] [rbp-170h] BYREF
  __int64 v33; // [rsp+60h] [rbp-168h] BYREF
  LPCLSID pclsid; // [rsp+68h] [rbp-160h]
  LPCOLESTR lpsz; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v36[264]; // [rsp+98h] [rbp-130h] BYREF

  v30[1] = this;
  v27 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v30, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v29, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v28, (__int64)&ATL::g_strmgr);
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
  ATL::CSimpleStringT<unsigned short,0>::SetString(&v28, a2, v4);
  pclsid = this + 1;
  this[1] = GUID_00000000_0000_0000_0000_000000000000;
  v26 = 0;
  if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](&v28, 0) == 124 )
    JUMPOUT(0x180080B3FLL);
  v6 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v28,
                        &v31,
                        v5,
                        &v26);
  v27 = 1;
  v7 = *v6;
  if ( !*v6 )
    JUMPOUT(0x180080B4BLL);
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v30, v7, v8);
  v9 = 0;
  v27 = 0;
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v26 == -1 )
    goto LABEL_49;
  v11 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v28,
                   &v32,
                   v10,
                   &v26);
  v12 = (volatile signed __int32 *)(v11 - 24);
  v13 = v29 - 6;
  if ( v11 - 24 != (char *)(v29 - 6) )
  {
    if ( *((int *)v13 + 4) >= 0 && *(_QWORD *)v12 == *(_QWORD *)v13 )
    {
      v25 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v12);
      if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13, v13);
      v29 = v25 + 6;
      v9 = v27;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v29, v11, *((_DWORD *)v11 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v26 == -1 )
    goto LABEL_49;
  v15 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v28,
          &v33,
          v14,
          &v26);
  v16 = v9 | 2;
  v27 = v16;
  if ( ATL::operator!=(v17, v15) || (v18 = 0, v26 != -1) )
    v18 = 1;
  if ( (v16 & 2) != 0 )
    ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  if ( v18 )
LABEL_49:
    JUMPOUT(0x180080B52LL);
  if ( *((_DWORD *)v30[0] - 4) == 1 && *(_WORD *)v30[0] == 35 )
    *(_DWORD *)this[2].Data4 = 1;
  else
    CAudioIdentifier::UnescapeIdentifierString((__int64 *)v30);
  CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v29);
  lpsz = (LPCOLESTR)v36;
  ATL::CW2WEX<128>::Init(&lpsz, v29);
  v19 = CLSIDFromString(lpsz, pclsid);
  if ( lpsz != (LPCOLESTR)v36 )
    free((void *)lpsz);
  if ( v19 < 0 )
    goto LABEL_50;
  v20 = (char *)v30[0] - 24;
  v21 = (volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL);
  if ( (char *)v30[0] - 24 != (char *)v21 )
  {
    if ( *((int *)v21 + 4) >= 0 && *(_QWORD *)v20 == *(_QWORD *)v21 )
    {
      v22 = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)v20);
      if ( _InterlockedExchangeAdd(v21 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21, v21);
      *(_QWORD *)&this->Data1 = v22 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this, v30[0], *((_DWORD *)v20 + 2));
    }
  }
  v23 = CAppAudioSessionId::CalculateStaticId(this);
  if ( v23 < 0 )
LABEL_50:
    JUMPOUT(0x180080B57LL);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 6));
  ATL::CStringData::Release((ATL::CStringData *)((char *)v30[0] - 24));
  return (unsigned int)v23;
}
