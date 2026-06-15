/*
 * XREFs of ?CommitConnections@CAPONode@@QEAAJXZ @ 0x140011CD4
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000FCB0 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 *     ?CallConstructors@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConnectionNode@@_K@Z @ 0x140012DAC (-CallConstructors@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConn.c)
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x140012E60 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPONode::CommitConnections(CAPONode *this)
{
  char *v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rcx
  void **v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  void **v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  void **v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rdx

  v2 = (char *)this + 64;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    if ( v3 > *((_QWORD *)this + 10) )
    {
      if ( !ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
              (__int64)this + 64,
              *((_QWORD *)this + 17)) )
        ATL::AtlThrowImpl(-2147024882);
    }
    else if ( v3 <= *((_QWORD *)this + 9) )
    {
      goto LABEL_5;
    }
    ((void (*)(void))ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors)();
  }
  else
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *((_QWORD *)v2 + 2) = 0LL;
    v3 = 0LL;
  }
LABEL_5:
  *((_QWORD *)v2 + 1) = v3;
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)this + 16);
  v6 = *(_QWORD **)v2;
  if ( v4 )
  {
    v5 -= (__int64)v6;
    do
    {
      *v6 = *(_QWORD *)((char *)v6 + v5);
      ++v6;
      --v4;
    }
    while ( v4 );
  }
  v7 = (void **)((char *)this + 96);
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
  {
    if ( v8 > *((_QWORD *)this + 14) )
    {
      if ( !ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
              (__int64)this + 96,
              *((_QWORD *)this + 21)) )
        ATL::AtlThrowImpl(-2147024882);
      ((void (*)(void))ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors)();
    }
    else if ( v8 > *((_QWORD *)this + 13) )
    {
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors(v6, v4, v5);
    }
  }
  else
  {
    if ( *v7 )
    {
      free(*v7);
      *v7 = 0LL;
    }
    *((_QWORD *)this + 14) = 0LL;
    v8 = 0LL;
  }
  *((_QWORD *)this + 13) = v8;
  v9 = *((_QWORD *)this + 21);
  v10 = *((_QWORD *)this + 20);
  v11 = *v7;
  if ( v9 )
  {
    v10 -= (__int64)v11;
    do
    {
      *v11 = *(_QWORD *)((char *)v11 + v10);
      ++v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = (void **)((char *)this + 192);
  v13 = *((_QWORD *)this + 33);
  if ( v13 )
  {
    if ( v13 > *((_QWORD *)this + 26) )
    {
      if ( !ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
              (__int64)this + 192,
              *((_QWORD *)this + 33)) )
        ATL::AtlThrowImpl(-2147024882);
      ((void (*)(void))ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors)();
    }
    else if ( v13 > *((_QWORD *)this + 25) )
    {
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
        v11,
        v9,
        v10);
    }
  }
  else
  {
    if ( *v12 )
    {
      free(*v12);
      *v12 = 0LL;
    }
    *((_QWORD *)this + 26) = 0LL;
    v13 = 0LL;
  }
  *((_QWORD *)this + 25) = v13;
  v14 = *((_QWORD *)this + 33);
  v15 = *((_QWORD *)this + 32);
  v16 = *v12;
  if ( v14 )
  {
    v15 -= (__int64)v16;
    do
    {
      *v16 = *(_QWORD *)((char *)v16 + v15);
      ++v16;
      --v14;
    }
    while ( v14 );
  }
  v17 = (void **)((char *)this + 224);
  v18 = *((_QWORD *)this + 37);
  if ( v18 )
  {
    if ( v18 > *((_QWORD *)this + 30) )
    {
      if ( !ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
              (__int64)this + 224,
              *((_QWORD *)this + 37)) )
        ATL::AtlThrowImpl(-2147024882);
    }
    else if ( v18 <= *((_QWORD *)this + 29) )
    {
      goto LABEL_26;
    }
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
      v16,
      v14,
      v15);
  }
  else
  {
    if ( *v17 )
    {
      free(*v17);
      *v17 = 0LL;
    }
    *((_QWORD *)this + 30) = 0LL;
    v18 = 0LL;
  }
LABEL_26:
  *((_QWORD *)this + 29) = v18;
  v19 = *((_QWORD *)this + 37);
  v20 = *v17;
  if ( v19 )
  {
    v21 = *((_QWORD *)this + 36) - (_QWORD)v20;
    do
    {
      *v20 = *(_QWORD *)((char *)v20 + v21);
      ++v20;
      --v19;
    }
    while ( v19 );
  }
  return 0LL;
}
