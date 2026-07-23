/*
 * XREFs of sub_140408730 @ 0x140408730
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400C48 @ 0x140400C48 (sub_140400C48.c)
 *     sub_140400F1C @ 0x140400F1C (sub_140400F1C.c)
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_14040818C @ 0x14040818C (sub_14040818C.c)
 */

__int64 __fastcall sub_140408730(__int64 a1, __int64 a2, _BYTE *a3, int a4, _BYTE *a5, __int64 a6)
{
  _BYTE *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // edi
  _DWORD *v9; // rbp
  int v10; // r14d
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r12
  _BYTE *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // eax
  int i; // ebx
  unsigned int v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+60h] [rbp-78h]
  int v28; // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  __int64 v32; // [rsp+88h] [rbp-50h]
  __int64 v33; // [rsp+90h] [rbp-48h]
  __int64 v34; // [rsp+98h] [rbp-40h]
  char v36; // [rsp+F8h] [rbp+20h]
  __int64 v37; // [rsp+108h] [rbp+30h]
  __int64 v38; // [rsp+108h] [rbp+30h]

  v36 = a4;
  v6 = a3;
  v7 = a1;
  if ( (a4 & 0xFFFFFFDF) != 0 )
  {
    return 209715726;
  }
  else
  {
    v8 = 0;
    if ( !a3 )
      v6 = *(_BYTE **)(a1 + 648);
    v9 = *(_DWORD **)(a1 + 616);
    v10 = sub_140400AB4();
    v26 = sub_140401368((__int64)v9);
    v11 = (unsigned int)(v10 << 8);
    v12 = (unsigned int)(v11 + 64);
    v13 = v12 + (unsigned int)(v10 << 6) + 64LL + 2 * ((unsigned int)(v10 << 6) + 64LL) + v11;
    v14 = (unsigned int)sub_140401350();
    v15 = v13;
    if ( v12 > v13 )
      v15 = v12;
    if ( v14 <= v15 )
    {
      v16 = (unsigned int)(704 * v10 + 256);
      if ( v12 > v13 )
        v16 = (unsigned int)v12;
    }
    else
    {
      v16 = (unsigned int)sub_140401350();
    }
    v17 = v26;
    v18 = sub_140400F4C();
    v19 = sub_140400F4C();
    v37 = v26 + v26 + a6;
    v27 = sub_140400F4C();
    v29 = sub_140400F4C();
    v31 = sub_140400F4C();
    v30 = sub_140400F4C();
    v32 = *(_QWORD *)(v7 + 632);
    v38 = v17 + v17 + v17 + v17 + v37;
    v20 = &v6[*(unsigned int *)(v7 + 36) + 32];
    v33 = (__int64)(v6 + 32);
    sub_14040106C(1, v9, v18, v38, v16);
    sub_14040106C(0, v9, v19, v38, v16);
    sub_140400F34();
    sub_140400F34();
    v21 = 0LL;
    if ( !*v6 )
      v21 = (__int64)v20;
    v34 = v21;
    v22 = v27;
    v23 = *(_DWORD *)(v7 + 64) + *(_DWORD *)(v7 + 24);
    if ( v23 )
    {
      do
      {
        v28 = v23 - 1;
        sub_140400C48();
        sub_140400F1C();
        sub_140400F1C();
        sub_14040818C(v9, v33, v34, v32, v18, v19, v22, v29, v31, v30);
        v23 = v28;
      }
      while ( v28 );
      v7 = a1;
    }
    sub_140400F1C();
    sub_140400F1C();
    if ( (v36 & 0x20) != 0 )
    {
      for ( i = *(_DWORD *)(v7 + 64); i; --i )
        sub_14040818C(v9, v33, 0LL, v32, v18, v19, v22, v29, v31, v30);
    }
    sub_140400F34();
    sub_140400F34();
    *a5 = 0;
  }
  return v8;
}
