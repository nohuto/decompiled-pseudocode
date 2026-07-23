/*
 * XREFs of sub_140338DB0 @ 0x140338DB0
 * Callers:
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 * Callees:
 *     sub_14022DE40 @ 0x14022DE40 (sub_14022DE40.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 *     sub_140339140 @ 0x140339140 (sub_140339140.c)
 */

__int64 __fastcall sub_140338DB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r11
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  volatile signed __int64 *v21; // rbp
  unsigned __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rbp
  signed __int64 v25; // rdx
  signed __int64 v26; // r8
  unsigned __int64 v27; // r11
  signed __int64 v28; // rdx
  unsigned __int64 v29; // r9
  signed __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // r8
  signed __int64 v34; // rcx
  signed __int64 v35; // rcx
  _OWORD v36[2]; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+80h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
    sub_14022DE40(a1);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 48 * v5 - 0x220000000000LL;
  v8 = a2[1];
  v9 = (_QWORD *)(48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL);
  v10 = a2[4];
  v11 = 0x3FFFFFFFFFLL;
  v38 = v8;
  if ( v4 )
  {
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4);
    v13 = *(_QWORD *)(v4 + 16);
    if ( qword_140C50780 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140C50780;
    v14 = *(_QWORD *)(v4 + 40);
    *v9 ^= (v12 ^ *v9) & 0xFFFFFFFFFFLL;
    v15 = v14 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v7 + 24) = v15 | *(_QWORD *)(v7 + 24) & 0xFFFFFF0000000000uLL;
    if ( ((v13 >> 12) & 0xFFFFFFFFFFLL) == v12 )
    {
      result = sub_1402E4D28(*(_QWORD *)(a1 + 16), 4);
      *(_QWORD *)(v4 + 16) = result;
    }
    else
    {
      result = 0xFFFFDE0000000000uLL;
      *(_QWORD *)(48 * v15 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v15 - 0x220000000000LL) ^ *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFLL;
    }
    *(_QWORD *)(v4 + 40) ^= (*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(v4 + 40)) & 0xFFFFFFFFFFLL;
  }
  else
  {
    if ( v8 == 0x3FFFFFFFFFLL )
    {
      v32 = sub_140273234(48 * v5 - 0x220000000000LL);
      *(_QWORD *)(88LL * v32 + *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 2896) = v33;
    }
    else
    {
      *(_QWORD *)(48 * v8 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v8 - 0x220000000000LL) ^ v5) & 0xFFFFFFFFFFLL;
    }
    if ( v10 == v11 )
    {
      v31 = 88 * ((unsigned int)sub_140273234(v7) + 33LL);
      result = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v31 + *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL))) = result;
    }
    else
    {
      result = v6;
      *(_QWORD *)(v6 + 48 * v10 + 24) ^= (*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(v6 + 48 * v10 + 24)) & 0xFFFFFFFFFFLL;
    }
  }
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    memset(v36, 0, sizeof(v36));
    v37 = 0LL;
    sub_140339140(v17, v4, v36);
    v18 = a2[7];
    v19 = a2[10];
    v20 = *(_QWORD *)(a1 + 16);
    v21 = v37;
    if ( v18 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v37 + 2) = v20;
    else
      sub_1403385E0(48 * v18 - 0x220000000000LL, v20);
    v22 = *(_QWORD *)(a1 + 24);
    if ( v19 == 0x3FFFFFFFFFLL )
    {
      *((_QWORD *)v21 + 3) = v22;
    }
    else
    {
      v23 = 48 * v19 - 0x220000000000LL;
      v24 = (*(_QWORD *)(a1 + 24) & 0x7FFFFLL) << 40;
      v25 = *(_QWORD *)(v23 + 24);
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 24), v24 | v25 & 0xF80000FFFFFFFFFFuLL, v25);
      if ( v25 != v26 )
      {
        do
        {
          v34 = v26;
          v26 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v23 + 24),
                  v24 | v26 & 0xF80000FFFFFFFFFFuLL,
                  v26);
        }
        while ( v34 != v26 );
      }
      *(_DWORD *)(v23 + 36) ^= (*(_DWORD *)(v23 + 36) ^ (v22 >> 19)) & 0x1FFFFF;
    }
    sub_1403385E0((__int64)v9, v19);
    v28 = *(_QWORD *)(v7 + 24);
    v29 = (v27 & 0x7FFFF) << 40;
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), v29 | v28 & 0xF80000FFFFFFFFFFuLL, v28);
    if ( v28 != v30 )
    {
      do
      {
        v35 = v30;
        v30 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v7 + 24),
                v29 | v30 & 0xF80000FFFFFFFFFFuLL,
                v30);
      }
      while ( v35 != v30 );
    }
    *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(v7 + 36) ^ (v27 >> 19)) & 0x1FFFFF;
    result = (__int64)v37;
    _InterlockedExchangeAdd64(v37, *(_QWORD *)a1);
    v8 = v38;
  }
  if ( !v4 )
  {
    *v9 ^= (v10 ^ *v9) & 0xFFFFFFFFFFLL;
    result = (v8 ^ *(_QWORD *)(v7 + 24)) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v7 + 24) ^= result;
  }
  return result;
}
