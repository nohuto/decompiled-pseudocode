/*
 * XREFs of ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000D590
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@_K@Z @ 0x14000D6D8 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTIO.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1400825B0 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 */

void __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
        __int64 a1,
        size_t a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  size_t v6; // r14
  size_t v7; // rsi
  size_t v8; // rcx
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rax
  unsigned __int64 i; // rdx
  size_t v13; // rdx
  void *v14; // rax
  void *v15; // r12
  errno_t v16; // eax
  void *v17; // rcx
  errno_t v18; // eax

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  if ( a2 >= v6 )
  {
    v7 = a2 + 1;
    if ( a2 == -1LL )
    {
      v17 = *(void **)a1;
      if ( v17 )
      {
        free(v17);
        v7 = 0LL;
        *(_QWORD *)a1 = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      *(_QWORD *)(a1 + 16) = 0LL;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(a1 + 16);
    if ( v7 <= v8 )
    {
      if ( v7 <= v6 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v9 = *(int *)(a1 + 24);
    if ( *(_QWORD *)a1 )
    {
      v13 = *(int *)(a1 + 24);
      if ( !(_DWORD)v9 )
      {
        v13 = v8 >> 1;
        if ( v7 - v8 > v8 >> 1 )
          v13 = v7 - v8;
      }
      v10 = v8 + v13;
      if ( v7 >= v8 + v13 )
        v10 = v7;
      v14 = calloc(v10, 8uLL);
      v15 = v14;
      if ( v14 )
      {
        v16 = memmove_s(v14, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
        if ( v16 )
        {
          if ( v16 == 12 )
            goto LABEL_34;
          if ( v16 == 22 || v16 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v16 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
        free(*(void **)a1);
        *(_QWORD *)a1 = v15;
LABEL_8:
        *(_QWORD *)(a1 + 16) = v10;
LABEL_9:
        ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::CallConstructors();
LABEL_10:
        *(_QWORD *)(a1 + 8) = v7;
        goto LABEL_11;
      }
    }
    else
    {
      v10 = *(int *)(a1 + 24);
      if ( v9 <= v7 )
        v10 = a2 + 1;
      v11 = calloc(v10, 8uLL);
      *(_QWORD *)a1 = v11;
      if ( v11 )
        goto LABEL_8;
    }
LABEL_34:
    ATL::AtlThrowImpl(-2147024882);
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
                           a1,
                           v6 + 1) )
    goto LABEL_44;
  v18 = memmove_s(
          (void *const)(*(_QWORD *)a1 + 8 * (v4 + 1)),
          8 * (v6 - v4),
          (const void *const)(*(_QWORD *)a1 + 8 * v4),
          8 * (v6 - v4));
  if ( v18 )
  {
    if ( v18 != 12 )
    {
      if ( v18 == 22 || v18 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v18 != 80 )
        ATL::AtlThrowImpl(-2147467259);
      goto LABEL_43;
    }
LABEL_44:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_43:
  ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::CallConstructors();
LABEL_11:
  for ( i = v4 + 1; v4 < i; ++v4 )
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = *a3;
}
