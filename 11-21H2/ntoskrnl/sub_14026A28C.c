/*
 * XREFs of sub_14026A28C @ 0x14026A28C
 * Callers:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1405B05D0 @ 0x1405B05D0 (sub_1405B05D0.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14026A28C(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // esi
  _OWORD *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // rbx
  unsigned int v16; // r12d
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned int v19; // edi
  __int64 v20; // rax
  _QWORD *v21; // r12
  int v22; // r13d
  __int64 result; // rax
  __int64 v24; // rcx
  int v25; // edi
  bool v26; // zf
  __int64 v27; // r14
  __int64 v28; // rdi
  unsigned int v29; // r13d
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  int v32; // [rsp+20h] [rbp-E8h]
  int v33; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v35; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v36; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v37; // [rsp+30h] [rbp-D8h]
  _OWORD v38[8]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = a2;
  memset(v38, 0, sizeof(v38));
  v6 = qword_14001C780[v3];
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( v7 <= qword_140C50840 && ((*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v8 = sub_14026C61C(4LL, a1);
  }
  else
  {
    v9 = 4LL;
    v8 = 4;
  }
  v10 = 0;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
      v9 = 2LL;
  }
  else
  {
    v9 = 1LL;
  }
  if ( !(unsigned int)sub_14026A574(v38, 0LL, v9) )
  {
    result = sub_1403095B0(&qword_140C534C0, (unsigned int)v6);
    v27 = result;
    if ( !result )
    {
      if ( v6 )
      {
        result = 0LL;
        do
        {
          sub_1402359C4(result + v7, 0, a3);
          result = ++v10;
        }
        while ( v10 < v6 );
      }
      return result;
    }
    v28 = sub_1402CBD10(result, v7, v8 | 0xA0000000);
    v29 = 0;
    if ( !v6 )
    {
LABEL_72:
      sub_140424F50(v27 << 25 >> 16, v6 << 12);
      return sub_1402BB6D0(&qword_140C534C0, v27, (unsigned int)v6);
    }
    v30 = 0LL;
    while ( 1 )
    {
      v33 = 0;
      v28 ^= (v28 ^ ((v30 + v7) << 12)) & 0xFFFFFFFFFF000LL;
      v36 = (unsigned __int64 *)(v27 + 8 * v30);
      v31 = v28;
      if ( (unsigned int)sub_140317A80(v36) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v33 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_67;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_67:
          if ( (v28 & 1) != 0 )
            v31 = v28 | 0x8000000000000000uLL;
        }
      }
      *v36 = v31;
      if ( v33 )
        sub_1402294F0((__int64)v36, v31);
      v30 = ++v29;
      if ( v29 >= v6 )
        goto LABEL_72;
    }
  }
  v11 = &v38[2 * (unsigned int)v3];
  v12 = sub_1402C6260(v11, (unsigned int)v3, v6, 0LL);
  v37 = v12;
  if ( (_DWORD)v3 == 2 )
  {
    v12 = sub_1402C6260(v11, 2LL, v6, 0LL);
    v37 = v12;
  }
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)v3 <= 1 )
  {
    v24 = (unsigned int)(2 - v3);
    do
    {
      v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v24;
    }
    while ( v24 );
    v14 = v8 | 0xA4000000;
  }
  else
  {
    v14 = v8 | 0xA0000000;
  }
  v15 = sub_1402CBD10(v13, v7, v14);
  if ( (unsigned int)v3 > 1 )
  {
    v16 = 0;
    if ( !v6 )
      goto LABEL_20;
    v17 = 0LL;
    while ( 1 )
    {
      v32 = 0;
      v35 = (unsigned __int64 *)(v13 + 8 * v17);
      v18 = v15;
      if ( (unsigned int)sub_140317A80(v35) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v32 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_51;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_51:
          if ( (v15 & 1) != 0 )
            v18 = v15 | 0x8000000000000000uLL;
        }
      }
      *v35 = v18;
      if ( v32 )
        sub_1402294F0((__int64)v35, v18);
      ++v16;
      v15 ^= (v15 ^ (v15 + 4096)) & 0xFFFFFFFFFF000LL;
      v17 = v16;
      if ( v16 >= v6 )
      {
        LODWORD(v3) = a2;
        goto LABEL_20;
      }
    }
  }
  v25 = 0;
  if ( !(unsigned int)sub_140317A80(v13) )
    goto LABEL_33;
  if ( (unsigned int)sub_140229550() )
  {
    v25 = 1;
    if ( HIBYTE(word_140C51864) )
      goto LABEL_33;
    v26 = (v15 & 1) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      goto LABEL_33;
    v26 = (v15 & 1) == 0;
  }
  if ( !v26 )
    v15 |= 0x8000000000000000uLL;
LABEL_33:
  *(_QWORD *)v13 = v15;
  if ( v25 )
    sub_1402294F0(v13, v15);
LABEL_20:
  sub_140424F50(v37, v6 << 12);
  v19 = 0;
  if ( (unsigned int)v3 <= 1 )
  {
    if ( (unsigned int)sub_140317A80(v13) && (unsigned int)sub_140229550() )
      v19 = 1;
    *(_QWORD *)v13 = 0LL;
    if ( v19 )
      sub_1402294F0(v13, 0LL);
  }
  else if ( v6 )
  {
    v20 = 0LL;
    do
    {
      v21 = (_QWORD *)(v13 + 8 * v20);
      v22 = 0;
      if ( (unsigned int)sub_140317A80(v21) && (unsigned int)sub_140229550() )
        v22 = 1;
      *v21 = 0LL;
      if ( v22 )
        sub_1402294F0((__int64)v21, 0LL);
      v20 = ++v19;
    }
    while ( v19 < v6 );
  }
  return sub_140268284((__int64)v38);
}
