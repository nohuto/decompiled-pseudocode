/*
 * XREFs of sub_140964230 @ 0x140964230
 * Callers:
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_1409644D8 @ 0x1409644D8 (sub_1409644D8.c)
 */

__int64 __fastcall sub_140964230(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // edi
  unsigned int v10; // edi
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-38h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0;
  if ( !a4 )
  {
LABEL_16:
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v13]) = 0;
    LODWORD(qword_140C2A440[v13]) = 459438;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(8LL, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    sub_1403C09C8(8);
    return 0;
  }
  v8 = a3 + 72;
  while ( 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 28LL) & 4) != 0 )
      goto LABEL_15;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 40LL) )
    {
      LODWORD(v17) = *(_DWORD *)(a1 + 120);
      v9 = sub_14042A5E0(a2, *(_QWORD *)(a1 + 48));
      if ( v9 < 0 )
        break;
    }
    v10 = sub_1409644D8(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
    if ( (v10 & 0x80000000) != 0 )
    {
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A224[2 * v16] = v10;
      dword_140C2A220[2 * v16] = 459415;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(8LL, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v10);
      sub_140368C88(8LL, (__int64)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v10, v17);
      return v10;
    }
    v11 = *(void **)(*(_QWORD *)v8 + 32LL);
    if ( v11 )
      ObfReferenceObject(v11);
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v12]) = 0;
    LODWORD(qword_140C2A440[v12]) = 459434;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(
        8LL,
        "KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8));
    sub_1403C09C8(8);
LABEL_15:
    ++v7;
    v8 += 80LL;
    if ( v7 >= a4 )
      goto LABEL_16;
  }
  v15 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
  dword_140C2A224[2 * v15] = v9;
  dword_140C2A220[2 * v15] = 459396;
  if ( (dword_140D04880 & 2) != 0 )
    sub_14057D738(8LL, "KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v9, v17);
  sub_140368C88(8LL, (__int64)"KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v9, v17);
  return (unsigned int)-1073740948;
}
