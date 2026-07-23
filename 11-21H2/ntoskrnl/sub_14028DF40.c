/*
 * XREFs of sub_14028DF40 @ 0x14028DF40
 * Callers:
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_14028DF40(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  int v6; // r12d
  int v7; // ebx
  char v8; // al
  int v9; // r9d
  char v10; // dl
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // rax
  char v17; // di
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // edi
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  char i; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+34h] [rbp-54h]
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]
  __int64 v34; // [rsp+50h] [rbp-38h]
  __int64 v35; // [rsp+58h] [rbp-30h]

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v35 = v4;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
LABEL_2:
  v8 = sub_1402CF4F0(v4 + 1664);
LABEL_3:
  v10 = v8;
  for ( i = v8; ; v10 = i )
  {
    v32 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v9) = v10;
    sub_14032CE60(v5, 0, v7, v9, 0);
    v31 = sub_140317A10(v5);
    if ( (v31 & 1) == 0 )
    {
      sub_14020D8D0(v4 + 1664, v32);
      LOBYTE(v28) = i;
      sub_1402B0CE0(v4 + 1664, v28);
      goto LABEL_2;
    }
    v11 = ((unsigned __int64)sub_140317A10(&v31) >> 12) & 0xFFFFFFFFFFLL;
    v12 = 48 * v11 - 0x220000000000LL;
    v34 = v12;
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 >= 0 )
      goto LABEL_6;
    v33 = 0LL;
    if ( (v13 & 0x10000000000LL) != 0 || *(__int64 *)(v12 + 8) <= 0 )
    {
      if ( *(_QWORD *)(v4 + 1264) )
      {
        v25 = sub_140234F14(v4, *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        v33 = (__int64)v25;
        if ( v25 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v4 + 1680) + 344LL) <= v25[12] )
          {
            v33 = 0LL;
          }
          else if ( !v6 )
          {
            sub_14020D8D0(v4 + 1664, v32);
            LOBYTE(v26) = i;
            sub_1402B0CE0(v4 + 1664, v26);
            v22 = sub_1407BE280(v4, 1LL);
            if ( v22 < 0 )
              goto LABEL_16;
            v6 = 1;
            v8 = sub_1402CF4F0(v4 + 1664);
            goto LABEL_3;
          }
        }
      }
    }
    LODWORD(v31) = sub_140316400(a1);
    if ( (int)v31 >= 0 )
      break;
    sub_14020D8D0(v4 + 1664, v32);
    LOBYTE(v27) = i;
    sub_1402B0CE0(v4 + 1664, v27);
    sub_1405BCAF8(v4 + 1664, (unsigned int)v31);
    sub_1402CF4F0(v4 + 1664);
  }
  v31 = sub_140317A10(v5);
  v11 = ((unsigned __int64)sub_140317A10(&v31) >> 12) & 0xFFFFFFFFFFLL;
  v34 = 48 * v11 - 0x220000000000LL;
  v24 = 0;
  if ( !v33 )
    v24 = v6;
  v6 = v24;
LABEL_6:
  v14 = sub_1403095B0(&qword_140C534C0, 1LL);
  v15 = (_QWORD *)v14;
  if ( v14 )
  {
    v33 = v14 << 25 >> 16;
    v16 = sub_1402CBD10(v14, v11, 2684354564LL);
    v17 = v16;
    v31 = v16;
    v30 = 0;
    v18 = v16;
    if ( !(unsigned int)sub_140317A80(v15) )
    {
LABEL_8:
      *v15 = v18;
      if ( v30 )
        sub_1402294F0((__int64)v15, v18);
      v19 = v33;
      goto LABEL_11;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v30 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (v17 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_8;
  }
  v19 = sub_1402CC7C0(v11, 0LL, 0x80000000LL);
LABEL_11:
  memmove((void *)(v19 + (a1 & 0xFFF)), a3, a4);
  if ( v15 )
  {
    sub_1402BB6D0(&qword_140C534C0, v15, 1LL);
  }
  else
  {
    LOBYTE(v20) = 17;
    sub_1402BEDD0(v19, v20, 0x80000000LL);
  }
  sub_14033E534(v34, 1LL);
  v21 = v32;
  if ( v32 )
    sub_14020D8D0(v4 + 1664, v32);
  LOBYTE(v21) = i;
  sub_1402B0CE0(v4 + 1664, v21);
  v22 = 0;
LABEL_16:
  if ( v6 )
    sub_1406FEC50(v4, 1LL);
  return (unsigned int)v22;
}
