/*
 * XREFs of sub_1402767FC @ 0x1402767FC
 * Callers:
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1402767FC(__int64 a1)
{
  __int64 v1; // rax
  bool v3; // zf
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // r10
  _QWORD *v9; // r9
  __int64 *result; // rax
  __int64 *v11; // rcx
  __int64 **v12; // r9
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // r10
  __int64 v16; // rcx
  __int64 **v17; // r9
  __int64 **v18; // r9
  __int64 *v19; // r8
  __int64 v20; // rcx
  __int64 **v21; // rdx
  __int64 **v22; // rdx

  v1 = *(_QWORD *)(a1 + 528);
  v3 = (*(_DWORD *)(a1 + 152) & 0x3000000) == 0;
  v4 = v1 + 648;
  v5 = v1 + 672;
  if ( !v3 )
  {
    v6 = (_QWORD *)(a1 + 120);
    v7 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v7 + 8) != a1 + 120 )
      goto LABEL_11;
    v8 = *(_QWORD **)(a1 + 128);
    if ( (_QWORD *)*v8 != v6 )
      goto LABEL_11;
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_QWORD **)(v5 + 8);
    if ( *v9 != v5 )
      goto LABEL_11;
    v3 = byte_140C54C58 == 1;
    *v6 = v5;
    *(_QWORD *)(a1 + 128) = v9;
    *v9 = v6;
    *(_QWORD *)(v5 + 8) = v6;
    if ( v3 )
    {
      v14 = (__int64 *)(a1 + 576);
      v15 = *(__int64 **)(a1 + 576);
      v16 = *(_QWORD *)(a1 + 592) + 688LL;
      if ( v15[1] != a1 + 576 )
        goto LABEL_11;
      v17 = *(__int64 ***)(a1 + 584);
      if ( *v17 != v14 )
        goto LABEL_11;
      *v17 = v15;
      v15[1] = (__int64)v17;
      v18 = *(__int64 ***)(v16 + 8);
      if ( *v18 != (__int64 *)v16 )
        goto LABEL_11;
      *v14 = v16;
      *(_QWORD *)(a1 + 584) = v18;
      *v18 = v14;
      *(_QWORD *)(v16 + 8) = v14;
    }
  }
  result = (__int64 *)(a1 + 136);
  v11 = *(__int64 **)(a1 + 136);
  if ( v11[1] != a1 + 136 )
    goto LABEL_11;
  v12 = *(__int64 ***)(a1 + 144);
  if ( *v12 != result )
    goto LABEL_11;
  *v12 = v11;
  v11[1] = (__int64)v12;
  v13 = *(__int64 ***)(v4 + 8);
  if ( *v13 != (__int64 *)v4 )
    goto LABEL_11;
  v3 = byte_140C54C58 == 1;
  *result = v4;
  *(_QWORD *)(a1 + 144) = v13;
  *v13 = result;
  *(_QWORD *)(v4 + 8) = result;
  if ( v3 )
  {
    result = (__int64 *)(a1 + 560);
    v19 = *(__int64 **)(a1 + 560);
    v20 = *(_QWORD *)(a1 + 592) + 664LL;
    if ( v19[1] == a1 + 560 )
    {
      v21 = *(__int64 ***)(a1 + 568);
      if ( *v21 == result )
      {
        *v21 = v19;
        v19[1] = (__int64)v21;
        v22 = *(__int64 ***)(v20 + 8);
        if ( *v22 == (__int64 *)v20 )
        {
          *result = v20;
          result[1] = (__int64)v22;
          *v22 = result;
          *(_QWORD *)(v20 + 8) = result;
          return result;
        }
      }
    }
LABEL_11:
    __fastfail(3u);
  }
  return result;
}
