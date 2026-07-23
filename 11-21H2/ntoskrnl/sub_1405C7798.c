/*
 * XREFs of sub_1405C7798 @ 0x1405C7798
 * Callers:
 *     sub_1405C7638 @ 0x1405C7638 (sub_1405C7638.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405C7638 @ 0x1405C7638 (sub_1405C7638.c)
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 *     sub_1405C83DC @ 0x1405C83DC (sub_1405C83DC.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 */

__int64 __fastcall sub_1405C7798(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v23; // [rsp+58h] [rbp-51h]
  int v24; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned int v25; // [rsp+60h] [rbp-49h] BYREF
  int v26; // [rsp+64h] [rbp-45h]
  __int128 v27; // [rsp+68h] [rbp-41h] BYREF
  __int64 v28; // [rsp+78h] [rbp-31h]
  _QWORD v29[13]; // [rsp+80h] [rbp-29h] BYREF

  v24 = -1;
  v9 = a6;
  v25 = 0;
  v23 = 0;
  v28 = 0LL;
  v10 = *(_QWORD *)(a6 + 8);
  v27 = 0LL;
  v11 = KeCheckProcessorAffinityEx(
          (unsigned __int16 *)(448LL * *(unsigned int *)(v10 + 4) + qword_140D068A8 + 128),
          *(_DWORD *)(a1 + 36));
  v12 = 2147483649LL;
  v13 = 0LL;
  v26 = 0;
  if ( !*(_DWORD *)a6 )
    return v12;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v9 + 8);
    v15 = 3 * v13;
    v16 = qword_140D068A8;
    v17 = *(unsigned int *)(v14 + 24 * v13 + 4);
    v18 = 448 * v17;
    if ( !v11 )
      break;
    v23 = *(_DWORD *)(a8 + 4);
    if ( *(_BYTE *)(v14 + 24 * v13 + 1) )
    {
      v24 = -1;
      v12 = sub_1405C7A38(a1, a2, a3, a4, v17, a5, (__int64)&v24, a8);
      if ( !v12 )
        goto LABEL_16;
LABEL_22:
      sub_1405C83DC(a8, v23);
    }
LABEL_23:
    v9 = a6;
    v13 = (unsigned int)(v26 + 1);
    v26 = v13;
    if ( (unsigned int)v13 >= *(_DWORD *)a6 )
      return v12;
  }
  if ( !*(_BYTE *)(v14 + 24 * v13 + 2) )
    goto LABEL_23;
  v19 = *(_DWORD *)(v18 + qword_140D068A8 + 416);
  if ( (v19 & 0x4000000) == 0 )
  {
    v29[3] = 0x100000000LL;
    v29[0] = 0LL;
    v29[1] = qword_140D06C58;
    for ( v29[2] = 0LL; (v19 & 0x3000000) == 0x1000000; v19 = *(_DWORD *)(v18 + v16 + 416) )
    {
      if ( v19 >> 27 > a5 )
        break;
      sub_1405C85B0(v29);
    }
    if ( (v19 & 0x4000000) == 0 )
    {
      v12 = 2147483659LL;
      goto LABEL_23;
    }
  }
  v20 = *(_DWORD *)(v18 + v16 + 72);
  if ( v20 > a3 )
  {
    v12 = 2147483650LL;
    goto LABEL_23;
  }
  v12 = sub_1405C7638(
          a1,
          a2,
          a5,
          v20 - a3,
          a4,
          *(_DWORD *)(v14 + 8 * v15 + 8),
          *(_QWORD *)(v14 + 8 * v15 + 16),
          0LL,
          0LL,
          a9);
  if ( v12 )
    goto LABEL_23;
LABEL_16:
  if ( *(_BYTE *)(v14 + 8 * v15) )
  {
    LOWORD(v28) = 0;
    v12 = 0LL;
    *((_QWORD *)&v27 + 1) = *(_QWORD *)(v18 + v16 + 128 + 8);
    *(_QWORD *)&v27 = v18 + v16 + 128;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, (unsigned __int16 **)&v27) )
    {
      v21 = sub_140348800(v25);
      if ( a1 != v21 && (int)sub_1405C8D78(v21, a9, 0LL) < 0 )
      {
        v12 = 2147483653LL;
        if ( !v11 )
          goto LABEL_23;
        goto LABEL_22;
      }
    }
  }
  if ( v11 )
    *a7 = v24;
  return v12;
}
