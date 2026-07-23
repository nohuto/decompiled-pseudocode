/*
 * XREFs of sub_140275FC0 @ 0x140275FC0
 * Callers:
 *     sub_14023AFD8 @ 0x14023AFD8 (sub_14023AFD8.c)
 *     sub_140275000 @ 0x140275000 (sub_140275000.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 * Callees:
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_14029E3A0 @ 0x14029E3A0 (sub_14029E3A0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_140349670 @ 0x140349670 (sub_140349670.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140275FC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  void *v4; // r14
  __int64 v5; // r15
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  ULONG_PTR v14; // rax
  _QWORD v15[20]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+108h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 528);
  v4 = 0LL;
  v16 = 0LL;
  v5 = a3;
  if ( !a3 )
    v5 = sub_14029E3A0(v3, a1);
  v8 = *(_QWORD *)(a1 + 592);
  v9 = sub_1402768E4(v3, v8, v5, &v16);
  v11 = (_QWORD *)v16;
  if ( v9 < 0 )
    goto LABEL_5;
  *(_BYTE *)(v16 + 128) = 2;
  v11[1] = 0LL;
  *v11 = 0LL;
  v11[2] = a1;
  v11[3] = a2;
  if ( !(unsigned __int8)sub_1402768B4(v3, 0LL, v10) )
    goto LABEL_5;
  if ( *(_QWORD *)(v3 + 1192) == v12
    && *(_DWORD *)(a1 + 516) == (_DWORD)v12
    && (*(_DWORD *)(a1 + 152) & 0x10000) == 0
    && *(_BYTE *)(v3 + 1230) == (_BYTE)v12
    && (v13 = *(unsigned int *)(v5 + 24),
        LODWORD(v13) = v13 | 0x80000000,
        v14 = sub_140349670(512LL, 80LL, 1901552451LL, v13),
        (v4 = (void *)v14) != 0LL) )
  {
    *(_QWORD *)(v14 + 56) = v3;
    *(_DWORD *)(v14 + 32) = 1;
    *(_QWORD *)(v14 + 64) = v8;
    *(_QWORD *)(v14 + 72) = v5;
    *((_BYTE *)v11 + 56) = 1;
    v11[6] = v11 + 5;
    v11[5] = v11 + 5;
    *((_WORD *)v11 + 16) = 1;
    *((_BYTE *)v11 + 34) = 6;
    *((_DWORD *)v11 + 9) = 0;
    *(_QWORD *)(v14 + 16) = sub_140288760;
    *(_QWORD *)(v14 + 24) = v11;
    *(_QWORD *)v14 = 0LL;
    sub_1402EF060(v14);
    KeWaitForSingleObject(v11 + 4, Executive, 0, 0, 0LL);
  }
  else
  {
LABEL_5:
    memset(v15, 0, sizeof(v15));
    if ( !v11 )
    {
      v15[17] = v3;
      v11 = v15;
      v15[18] = v8;
      v15[1] = 0LL;
      v15[0] = 0LL;
      LOBYTE(v15[7]) = 0;
      v15[19] = v5;
      LOBYTE(v15[16]) = 2;
      v15[2] = a1;
      v15[3] = a2;
    }
    *((_BYTE *)v11 + 56) = 0;
    sub_140288760(v11);
    if ( v11 == v15 )
      v11 = 0LL;
  }
  if ( v11 )
    sub_1402766A0((PSLIST_ENTRY)v11);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
