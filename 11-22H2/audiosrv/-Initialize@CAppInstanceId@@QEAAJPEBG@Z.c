/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18005030C
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082BAC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180050084 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, const unsigned __int16 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  wchar_t *v8; // rbx
  __int64 v9; // r8
  char *v10; // rdx
  volatile signed __int32 *v11; // rcx
  wchar_t *v12; // rbx
  volatile signed __int32 *v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  char v18; // r14
  volatile signed __int32 *v20; // r14
  wchar_t *String; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  wchar_t *EndPtr[8]; // [rsp+48h] [rbp-40h] BYREF
  int v27; // [rsp+98h] [rbp+10h] BYREF
  int v28; // [rsp+A0h] [rbp+18h]
  wchar_t *v29; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v28 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v22, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v29, (__int64)&ATL::g_strmgr);
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(&v22, a2, v5);
  v27 = 0;
  v7 = (volatile signed __int32 *)(*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                                      &v22,
                                      &v23,
                                      v6,
                                      &v27)
                                 - 24LL);
  v8 = String - 12;
  if ( v7 != (volatile signed __int32 *)(String - 12) )
  {
    if ( *((int *)v8 + 4) < 0 || *(_QWORD *)v7 != *(_QWORD *)v8 )
      JUMPOUT(0x180080A72LL);
    v20 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) <= 1 )
      JUMPOUT(0x180080A4FLL);
    String = (wchar_t *)(v20 + 6);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 24));
  if ( v27 == -1 )
    JUMPOUT(0x180080A86LL);
  v10 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v22,
                   &v24,
                   v9,
                   &v27);
  v11 = (volatile signed __int32 *)(v10 - 24);
  v12 = v29;
  v13 = (volatile signed __int32 *)(v29 - 12);
  if ( v10 - 24 != (char *)(v29 - 12) )
  {
    if ( *((int *)v13 + 4) >= 0 && *(_QWORD *)v11 == *(_QWORD *)v13 )
    {
      v14 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v11);
      if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13, v13);
      v12 = (wchar_t *)(v14 + 6);
      v29 = v12;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v29, v10, *((_DWORD *)v10 - 4));
      v12 = v29;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  if ( v27 == -1 )
    goto LABEL_33;
  v16 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v22,
          &v25,
          v15,
          &v27);
  v28 = 1;
  if ( ATL::operator!=(v17, v16) || (v18 = 0, v27 != -1) )
    v18 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v18 )
LABEL_33:
    JUMPOUT(0x180080A93LL);
  if ( *((_DWORD *)v12 - 4) == 1 && *v12 == 35 )
    *((_DWORD *)this + 2) = 1;
  else
    v4 = wcstoul(v12, EndPtr, 10);
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = wcstoul(String, EndPtr, 10);
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 24));
  return 0LL;
}
