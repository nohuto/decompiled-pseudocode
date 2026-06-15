/*
 * XREFs of ?CommitConnections@CAPONode@@QEAAJXZ @ 0x14000F730
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x1400104B0 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?CallConstructors@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConnectionNode@@_K@Z @ 0x140010590 (-CallConstructors@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConn.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x140011730 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAPONode::CommitConnections(CAPONode *this)
{
  unsigned __int64 v2; // rdi
  size_t v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rcx
  size_t v7; // rdi
  size_t v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  size_t v12; // rdi
  size_t v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  size_t v17; // rdi
  size_t v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  size_t v23; // r14
  void *v24; // rax
  size_t v25; // r14
  void *v26; // rax
  size_t v27; // rsi
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rax
  void *v37; // r15
  errno_t v38; // eax
  void *v39; // rax
  void *v40; // r15
  errno_t v41; // eax
  void *v42; // rax
  void *v43; // r14
  errno_t v44; // eax

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    if ( v2 > *((_QWORD *)this + 10) )
    {
      if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
                               (char *)this + 64,
                               *((_QWORD *)this + 17)) )
        ATL::AtlThrowImpl(-2147024882);
    }
    else if ( v2 <= *((_QWORD *)this + 9) )
    {
LABEL_5:
      v3 = 0LL;
      goto LABEL_6;
    }
    ((void (*)(void))ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors)();
    goto LABEL_5;
  }
  v32 = (void *)*((_QWORD *)this + 8);
  if ( v32 )
  {
    free(v32);
    v3 = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  v2 = 0LL;
LABEL_6:
  *((_QWORD *)this + 9) = v2;
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)this + 16);
  v6 = (_QWORD *)*((_QWORD *)this + 8);
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
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( v7 <= v8 )
    {
      if ( v7 > *((_QWORD *)this + 13) )
        ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors(v8, v4, v5);
      goto LABEL_13;
    }
    v23 = *((int *)this + 30);
    if ( *((_QWORD *)this + 12) )
    {
      if ( !*((_DWORD *)this + 30) )
      {
        v23 = v8 >> 1;
        if ( v7 - v8 > v8 >> 1 )
          v23 = v7 - v8;
      }
      v23 += v8;
      if ( v7 >= v23 )
        v23 = *((_QWORD *)this + 21);
      v36 = calloc(v23, 8uLL);
      v37 = v36;
      if ( v36 )
      {
        v38 = memmove_s(
                v36,
                8LL * *((_QWORD *)this + 13),
                *((const void *const *)this + 12),
                8LL * *((_QWORD *)this + 13));
        if ( v38 )
        {
          if ( v38 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v38 == 22 || v38 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v38 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
        free(*((void **)this + 12));
        *((_QWORD *)this + 12) = v37;
        goto LABEL_38;
      }
    }
    else
    {
      if ( v23 <= v7 )
        v23 = *((_QWORD *)this + 21);
      v24 = calloc(v23, 8uLL);
      *((_QWORD *)this + 12) = v24;
      if ( v24 )
      {
LABEL_38:
        *((_QWORD *)this + 14) = v23;
        ((void (*)(void))ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors)();
        goto LABEL_13;
      }
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  v33 = (void *)*((_QWORD *)this + 12);
  if ( v33 )
  {
    free(v33);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 14) = 0LL;
  v7 = 0LL;
LABEL_13:
  *((_QWORD *)this + 13) = v7;
  v9 = *((_QWORD *)this + 21);
  v10 = *((_QWORD *)this + 20);
  v11 = (_QWORD *)*((_QWORD *)this + 12);
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
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 26);
    if ( v12 <= v13 )
    {
      if ( v12 > *((_QWORD *)this + 25) )
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
          v13,
          v11,
          v10);
      goto LABEL_20;
    }
    v25 = *((int *)this + 54);
    if ( *((_QWORD *)this + 24) )
    {
      if ( !*((_DWORD *)this + 54) )
      {
        v25 = v13 >> 1;
        if ( v12 - v13 > v13 >> 1 )
          v25 = v12 - v13;
      }
      v25 += v13;
      if ( v12 >= v25 )
        v25 = *((_QWORD *)this + 33);
      v39 = calloc(v25, 8uLL);
      v40 = v39;
      if ( v39 )
      {
        v41 = memmove_s(
                v39,
                8LL * *((_QWORD *)this + 25),
                *((const void *const *)this + 24),
                8LL * *((_QWORD *)this + 25));
        if ( v41 )
        {
          if ( v41 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v41 == 22 || v41 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v41 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
        free(*((void **)this + 24));
        *((_QWORD *)this + 24) = v40;
        goto LABEL_43;
      }
    }
    else
    {
      if ( v25 <= v12 )
        v25 = *((_QWORD *)this + 33);
      v26 = calloc(v25, 8uLL);
      *((_QWORD *)this + 24) = v26;
      if ( v26 )
      {
LABEL_43:
        *((_QWORD *)this + 26) = v25;
        ((void (*)(void))ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors)();
        goto LABEL_20;
      }
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  v34 = (void *)*((_QWORD *)this + 24);
  if ( v34 )
  {
    free(v34);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 26) = 0LL;
  v12 = 0LL;
LABEL_20:
  *((_QWORD *)this + 25) = v12;
  v14 = *((_QWORD *)this + 33);
  v15 = *((_QWORD *)this + 32);
  v16 = (_QWORD *)*((_QWORD *)this + 24);
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
  v17 = *((_QWORD *)this + 37);
  if ( v17 )
  {
    v18 = *((_QWORD *)this + 30);
    if ( v17 <= v18 )
    {
      if ( v17 > *((_QWORD *)this + 29) )
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
          v18,
          v14,
          v15);
      goto LABEL_27;
    }
    v27 = *((int *)this + 62);
    if ( *((_QWORD *)this + 28) )
    {
      if ( !*((_DWORD *)this + 62) )
      {
        v27 = v18 >> 1;
        if ( v17 - v18 > v18 >> 1 )
          v27 = v17 - v18;
      }
      v27 += v18;
      if ( v17 >= v27 )
        v27 = *((_QWORD *)this + 37);
      v42 = calloc(v27, 8uLL);
      v43 = v42;
      if ( v42 )
      {
        v44 = memmove_s(
                v42,
                8LL * *((_QWORD *)this + 29),
                *((const void *const *)this + 28),
                8LL * *((_QWORD *)this + 29));
        if ( v44 )
        {
          if ( v44 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v44 == 22 || v44 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v44 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
        free(*((void **)this + 28));
        *((_QWORD *)this + 28) = v43;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v27 <= v17 )
        v27 = *((_QWORD *)this + 37);
      v28 = calloc(v27, 8uLL);
      *((_QWORD *)this + 28) = v28;
      if ( v28 )
      {
LABEL_48:
        *((_QWORD *)this + 30) = v27;
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
          v30,
          v29,
          v31);
LABEL_27:
        v3 = v17;
        goto LABEL_28;
      }
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  v35 = (void *)*((_QWORD *)this + 28);
  if ( v35 )
  {
    free(v35);
    *((_QWORD *)this + 28) = 0LL;
  }
  *((_QWORD *)this + 30) = 0LL;
LABEL_28:
  *((_QWORD *)this + 29) = v3;
  v19 = *((_QWORD *)this + 37);
  v20 = (_QWORD *)*((_QWORD *)this + 28);
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
