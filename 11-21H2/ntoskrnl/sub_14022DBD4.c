/*
 * XREFs of sub_14022DBD4 @ 0x14022DBD4
 * Callers:
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 * Callees:
 *     sub_14022DE40 @ 0x14022DE40 (sub_14022DE40.c)
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 *     sub_140339140 @ 0x140339140 (sub_140339140.c)
 */

__int64 __fastcall sub_14022DBD4(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 *v6; // r15
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rcx
  volatile signed __int64 *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // r11
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  _OWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+90h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 88);
  v5 = 48 * v2 - 0x220000000000LL;
  v6 = (unsigned __int64 *)(48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL);
  if ( v4 )
  {
    sub_14022DE40();
    v13 = *(_QWORD *)(v4 + 16);
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - v14) >> 4);
    if ( qword_140C50780 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140C50780;
    v19 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL;
    *v6 ^= (v15 ^ *v6) & 0xFFFFFFFFFFLL;
    sub_140313CA0(v5, v19, 1LL);
    if ( ((v13 >> 12) & 0xFFFFFFFFFFLL) == v15 )
    {
      result = sub_1402E4D28(*(_QWORD *)(a1 + 16), 4LL);
      *(_QWORD *)(v4 + 16) = result;
    }
    else
    {
      v16 = (_QWORD *)(48 * v19 - 0x220000000000LL);
      result = (*(_QWORD *)(a1 + 16) ^ *v16) & 0xFFFFFFFFFFLL;
      *v16 ^= result;
    }
    v7 = 0x3FFFFFFFFFLL;
    *(_QWORD *)(v4 + 40) ^= (*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(v4 + 40)) & 0xFFFFFFFFFFLL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a2 + 16) = v2;
    else
      *(_QWORD *)(48 * v7 - 0x220000000000LL) ^= (v2 ^ *(_QWORD *)(48 * v7 - 0x220000000000LL)) & 0xFFFFFFFFFFLL;
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 24) = result;
  }
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    memset(v17, 0, sizeof(v17));
    sub_140339140(v9, v4, v17);
    v10 = v18;
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *((_QWORD *)v18 + 3);
    if ( v12 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v18 + 2) = v11;
    else
      sub_1403385E0(48 * v12 - 0x220000000000LL, v11);
    sub_1402393AC(v5, v12);
    *(_DWORD *)(v5 + 36) ^= (*(_DWORD *)(v5 + 36) ^ (v12 >> 19)) & 0x1FFFFF;
    *((_QWORD *)v10 + 3) = *(_QWORD *)(a1 + 24);
    result = (__int64)v18;
    _InterlockedExchangeAdd64(v18, *(_QWORD *)a1);
  }
  if ( !v4 )
  {
    *v6 = *v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    return sub_140313CA0(v5, v7, 1LL);
  }
  return result;
}
