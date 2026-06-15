/*
 * XREFs of ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x1400104C0
 * Callers:
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x1400816E4 (-CancelConnections@CAPONode@@QEAAJXZ.c)
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?CallConstructors@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConnectionNode@@_K@Z @ 0x140010590 (-CallConstructors@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@CAXPEAPEAVCConn.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(__int64 a1, _QWORD *a2, __int64 a3)
{
  size_t v3; // rdi
  unsigned __int64 v6; // rcx
  size_t v7; // rax
  size_t v8; // rbp
  void *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  void *v15; // rax
  void *v16; // r14
  errno_t v17; // eax

  v3 = a2[1];
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v3 > v6 )
    {
      v7 = *(int *)(a1 + 24);
      if ( *(_QWORD *)a1 )
      {
        v14 = *(int *)(a1 + 24);
        if ( !(_DWORD)v7 )
        {
          v14 = v6 >> 1;
          if ( v3 - v6 > v6 >> 1 )
            v14 = v3 - v6;
        }
        v8 = v6 + v14;
        if ( v3 >= v6 + v14 )
          v8 = v3;
        v15 = calloc(v8, 8uLL);
        v16 = v15;
        if ( v15 )
        {
          v17 = memmove_s(v15, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
          if ( v17 )
          {
            if ( v17 == 12 )
              goto LABEL_32;
            if ( v17 == 22 || v17 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v17 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          free(*(void **)a1);
          *(_QWORD *)a1 = v16;
LABEL_7:
          *(_QWORD *)(a1 + 16) = v8;
LABEL_8:
          ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::CallConstructors(v6, a2, a3);
          goto LABEL_9;
        }
      }
      else
      {
        v8 = a2[1];
        if ( v7 > v3 )
          v8 = *(int *)(a1 + 24);
        v9 = calloc(v8, 8uLL);
        *(_QWORD *)a1 = v9;
        if ( v9 )
          goto LABEL_7;
      }
LABEL_32:
      ATL::AtlThrowImpl(-2147024882);
    }
    if ( v3 > *(_QWORD *)(a1 + 8) )
      goto LABEL_8;
  }
  else
  {
    v13 = *(void **)a1;
    v3 = 0LL;
    if ( v13 )
    {
      free(v13);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
LABEL_9:
  *(_QWORD *)(a1 + 8) = v3;
  v10 = a2[1];
  v11 = *(_QWORD **)a1;
  if ( v10 )
  {
    v12 = *a2 - (_QWORD)v11;
    do
    {
      *v11 = *(_QWORD *)((char *)v11 + v12);
      ++v11;
      --v10;
    }
    while ( v10 );
  }
}
