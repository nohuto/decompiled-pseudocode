/*
 * XREFs of sub_14065416C @ 0x14065416C
 * Callers:
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 *     sub_14057AEEC @ 0x14057AEEC (sub_14057AEEC.c)
 */

__int64 __fastcall sub_14065416C(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // edi
  _QWORD *v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  unsigned int v15; // r10d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int16 v24; // bx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 *v29; // rbx
  __int64 v30; // [rsp+20h] [rbp-60h]
  __int16 v31; // [rsp+34h] [rbp-4Ch]
  _QWORD *v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF
  __int64 v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+78h] [rbp-8h]

  v4 = 0;
  v36 = 0LL;
  LODWORD(v37) = 0;
  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  v35 = 0LL;
  v33 = 0LL;
  if ( !a1 )
  {
    if ( (dword_140D0689C & 0x400000) != 0 )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( !_bittest(&dword_140D0689C, 0x15u) )
    return 3221225659LL;
  v7 = 1LL;
LABEL_8:
  v8 = 0;
  if ( a2 && _bittest((const signed __int32 *)&dword_140D0688C, 0x15u) )
  {
    v30 = a4;
    v9 = a4;
    v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v33, 2, 0LL, 0LL);
    v11 = 32774;
  }
  else
  {
    v9 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = 32771;
    v33 = 0LL;
    v34 = 0LL;
  }
  v12 = sub_14039DF90((PHYSICAL_ADDRESS *)&v35, 1, 0LL, 0LL);
  v13 = a3;
  v14 = v12;
  v32 = v12;
  *v12 = v7;
  do
  {
    v15 = 0;
    if ( v13 >= 0x1FF )
      v13 = 511;
    if ( v13 )
    {
      v16 = v14 + 1;
      do
      {
        v17 = v15 + v4;
        *v16 = 0LL;
        v18 = *(_QWORD *)(a4 + 8 * v17) & 0x3FFLL;
        v19 = (unsigned int)v17;
        *v16 = v18;
        v20 = *(_QWORD *)(a4 + 8 * v17);
        if ( (v20 & 0xC00) != 0 )
        {
          v21 = v18 | 0x800;
          *v16 = v21;
          v22 = v21 | *(_QWORD *)(a4 + 8 * v19) & 0xFFFFFFFFFFE00000uLL;
          *v16 = v22;
          if ( (*(_DWORD *)(a4 + 8 * v19) & 0xC00) == 0x800LL )
            *v16 = v22 | 0x1000;
        }
        else
        {
          *v16 = v18 | v20 & 0xFFFFFFFFFFFFF000uLL;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < v13 );
      v9 = v30;
    }
    v23 = HvlInvokeHypercall(v11);
    v31 = WORD2(v23);
    v24 = v23;
    if ( (_WORD)v23 )
      break;
    if ( v10 && (v23 & 0xFFF00000000LL) != 0 )
    {
      v25 = v10;
      v26 = WORD2(v23) & 0xFFF;
      do
      {
        if ( *v25 )
        {
          v27 = v8++;
          *(_QWORD *)(v9 + 8 * v27) = *v25;
        }
        ++v25;
        --v26;
      }
      while ( v26 );
    }
    v14 = v32;
    v4 += v31 & 0xFFF;
    v13 = a3 - v4;
  }
  while ( a3 != v4 );
  sub_14039D8F0((__int64)&v35);
  if ( v10 )
    sub_14039D8F0((__int64)&v33);
  if ( v24 )
    v28 = sub_14054CA70(v24);
  else
    v28 = 0;
  if ( v8 )
  {
    v29 = (__int64 *)(v9 + 8LL * v8);
    do
    {
      sub_14057AEEC(*--v29);
      --v8;
    }
    while ( v8 );
  }
  return v28;
}
