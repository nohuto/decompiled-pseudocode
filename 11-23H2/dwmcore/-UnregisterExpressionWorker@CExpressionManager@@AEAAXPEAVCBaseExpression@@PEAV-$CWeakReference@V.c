/*
 * XREFs of ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800825B0
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180084080 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18007EF70 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpressionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  CTargetMapEntry *v8; // rax
  void *v9; // rbp
  CTargetMapEntry *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r9d
  _QWORD *v26; // rax
  __int128 v27; // [rsp+20h] [rbp-48h]
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  void *v29; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v27 = a3;
  DWORD2(v27) = a4;
  v29 = 0LL;
  v28 = v27;
  v8 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 328), &v28);
  v9 = v29;
  v10 = v8;
  while ( v9 )
  {
    v22 = v9;
    v9 = (void *)*((_QWORD *)v9 + 2);
    operator delete(v22, 0x18uLL);
  }
  if ( v10 )
  {
    v11 = (_QWORD *)*((_QWORD *)v10 + 2);
    v12 = v11;
    v13 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = v12[2];
        if ( v12[1] == a2 )
          break;
        v13 = v12;
        v12 = (_QWORD *)v12[2];
        if ( !v14 )
          goto LABEL_8;
      }
      if ( v12 == v11 )
        *((_QWORD *)v10 + 2) = v14;
      else
        v13[2] = v14;
      operator delete(v12, 0x18uLL);
    }
LABEL_8:
    if ( !*((_QWORD *)v10 + 2) )
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement((PRTL_GENERIC_TABLE)(a1 + 328), v10);
  }
  else
  {
    *(_BYTE *)(a2 + 216) &= ~2u;
  }
  if ( !a6 )
  {
    v15 = 0LL;
    v16 = 32LL * *(int *)(a1 + 164);
    v17 = *(_DWORD *)(v16 + a1 + 192);
    v18 = *(_QWORD **)(v16 + a1 + 168);
    if ( v17 )
    {
      do
      {
        if ( a2 == *v18 )
          break;
        v15 = (unsigned int)(v15 + 1);
        ++v18;
      }
      while ( (unsigned int)v15 < v17 );
    }
    if ( (unsigned int)v15 >= *(_DWORD *)(32 * (*(int *)(a1 + 164) + 6LL) + a1) )
    {
      v19 = *(_DWORD *)(a1 + 320);
      v20 = 0LL;
      if ( v19 )
      {
        v21 = *(_QWORD **)(a1 + 296);
        do
        {
          if ( a2 == *v21 )
            break;
          v20 = (unsigned int)(v20 + 1);
          ++v21;
        }
        while ( (unsigned int)v20 < v19 );
      }
      if ( (unsigned int)v20 < v19 )
        *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * v20) = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v16 + a1 + 168) + 8 * v15) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 448) & 1) != 0 )
    {
      v23 = 0LL;
      v24 = 32LL * (1 - *(_DWORD *)(a1 + 164));
      v25 = *(_DWORD *)(v24 + a1 + 192);
      v26 = *(_QWORD **)(v24 + a1 + 168);
      if ( v25 )
      {
        do
        {
          if ( a2 == *v26 )
            break;
          v23 = (unsigned int)(v23 + 1);
          ++v26;
        }
        while ( (unsigned int)v23 < v25 );
      }
      if ( (unsigned int)v23 < *(_DWORD *)(32 * (1 - *(_DWORD *)(a1 + 164) + 6LL) + a1) )
        *(_QWORD *)(*(_QWORD *)(v24 + a1 + 168) + 8 * v23) = 0LL;
    }
  }
}
