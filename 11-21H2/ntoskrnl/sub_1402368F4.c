/*
 * XREFs of sub_1402368F4 @ 0x1402368F4
 * Callers:
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 */

__int64 *__fastcall sub_1402368F4(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 *result; // rax
  __int64 *v11; // rcx
  __int64 **v12; // rdx
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 **v17; // rdx
  __int64 **v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // rcx
  __int64 **v21; // rdx
  __int64 **v22; // rdx

  v1 = *(_QWORD *)(a1 + 528);
  v3 = v1 + 592;
  v4 = v1 + 608;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v5 = (_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v6 + 8) != a1 + 120 )
      goto LABEL_15;
    v7 = *(_QWORD **)(a1 + 128);
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_15;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      goto LABEL_15;
    v9 = byte_140C54C58 == 1;
    *v5 = v4;
    *(_QWORD *)(a1 + 128) = v8;
    *v8 = v5;
    *(_QWORD *)(v4 + 8) = v5;
    if ( v9 )
    {
      v14 = (__int64 *)(a1 + 576);
      v15 = *(__int64 **)(a1 + 576);
      v16 = *(_QWORD *)(a1 + 592) + 624LL;
      if ( v15[1] != a1 + 576 )
        goto LABEL_15;
      v17 = *(__int64 ***)(a1 + 584);
      if ( *v17 != v14 )
        goto LABEL_15;
      *v17 = v15;
      v15[1] = (__int64)v17;
      v18 = *(__int64 ***)(v16 + 8);
      if ( *v18 != (__int64 *)v16 )
        goto LABEL_15;
      *v14 = v16;
      *(_QWORD *)(a1 + 584) = v18;
      *v18 = v14;
      *(_QWORD *)(v16 + 8) = v14;
    }
  }
  result = (__int64 *)(a1 + 136);
  v11 = *(__int64 **)(a1 + 136);
  if ( v11[1] != a1 + 136 )
    goto LABEL_15;
  v12 = *(__int64 ***)(a1 + 144);
  if ( *v12 != result )
    goto LABEL_15;
  *v12 = v11;
  v11[1] = (__int64)v12;
  v13 = *(__int64 ***)(v3 + 8);
  if ( *v13 != (__int64 *)v3 )
    goto LABEL_15;
  v9 = byte_140C54C58 == 1;
  *result = v3;
  *(_QWORD *)(a1 + 144) = v13;
  *v13 = result;
  *(_QWORD *)(v3 + 8) = result;
  if ( v9 )
  {
    result = (__int64 *)(a1 + 560);
    v19 = *(__int64 **)(a1 + 560);
    v20 = *(_QWORD *)(a1 + 592) + 608LL;
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
          *(_QWORD *)(a1 + 568) = v22;
          *v22 = result;
          *(_QWORD *)(v20 + 8) = result;
          return result;
        }
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  return result;
}
