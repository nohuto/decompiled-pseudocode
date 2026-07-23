/*
 * XREFs of sub_1402CB2D0 @ 0x1402CB2D0
 * Callers:
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_1405AEA7C @ 0x1405AEA7C (sub_1405AEA7C.c)
 * Callees:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_140338BF0 @ 0x140338BF0 (sub_140338BF0.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_140397C78 @ 0x140397C78 (sub_140397C78.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 */

__int64 __fastcall sub_1402CB2D0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v6; // r11d
  unsigned int v7; // r9d
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // r10
  volatile signed __int32 *v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rcx
  __int64 v45; // [rsp+60h] [rbp+8h]

  v6 = a4;
  v7 = a3;
  v9 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v10 = a3;
  v45 = a3;
  v11 = 0xCDDE9462EC9DBE7FuLL * (((__int64)a1 - *(_QWORD *)(v9 + 16)) >> 6);
  v12 = qword_14001C780[a3];
  if ( v12 == 1 )
  {
    v15 = _InterlockedDecrement64((volatile signed __int64 *)(v9 + 16896));
    if ( v15 == *(_QWORD *)(v9 + 15944) || v15 == *(_QWORD *)(v9 + 15952) )
    {
      sub_1403C3E64(v9);
      v10 = v45;
      v7 = a3;
      v6 = a4;
    }
    v13 = v15 + 1;
  }
  else
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 16896), -v12);
    v14 = *(_QWORD *)(v9 + 15952);
    v15 = v13 - v12;
    if ( v13 - v12 <= v14 && v13 > v14 || (v16 = *(_QWORD *)(v9 + 15944), v15 <= v16) && v13 > v16 )
    {
      sub_1403C3E64(v9);
      v10 = v45;
      v7 = a3;
      v6 = a4;
    }
  }
  if ( v15 <= 0x420 )
  {
    v42 = *(_QWORD *)(v9 + 16600);
    if ( !v42 || !*(_BYTE *)(v42 + 52) )
    {
      sub_140596A58(v9);
      v10 = v45;
      v7 = a3;
      v6 = a4;
    }
    if ( v15 < 0xA0 && v13 >= 0xA0 && *(_DWORD *)(v9 + 1176) )
    {
      KeSetEvent((PRKEVENT)(v9 + 1032), 0, 0);
      v10 = v45;
      v7 = a3;
      v6 = a4;
    }
  }
  if ( v15 < 0x9F )
  {
    v43 = *((_DWORD *)KeGetCurrentThread() + 345);
    if ( (v43 & 0xC) == 8 )
    {
      v17 = 1;
    }
    else if ( v15 < 0x20 && (ULONG_PTR *)v9 == &StartContext )
    {
      v17 = 0;
    }
    else if ( (v43 & 2) != 0 && v15 >= 0x21 )
    {
      v17 = 1;
    }
    else
    {
      v17 = (*(unsigned __int8 *)(v9 + 4) >> 5) & 1;
    }
  }
  else
  {
    v17 = 1;
  }
  if ( (a5 & 0x20) == 0 && !v17 )
  {
    sub_140338BF0(v9, v12);
    return 0LL;
  }
  v18 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v19 = *(_QWORD **)(a2 + 8), *v19 != a2) )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  v20 = *(_BYTE *)(a2 + 34);
  if ( (v20 & 8) != 0 )
  {
    sub_140226804(a2, 1, 0);
    sub_1402E89B0(a2 + 16, v37, v38);
    v20 = *(_BYTE *)(a2 + 34);
    v10 = v45;
    v7 = a3;
    v6 = a4;
  }
  v21 = v20 & 7;
  v22 = (unsigned int)v21;
  v23 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  --a1[134 * v10 + v21];
  v24 = 2LL;
  if ( v23 < 0x100000 )
    v24 = 4LL;
  --a1[134 * v10 + v22 + v24];
  v25 = *(_QWORD *)(qword_140C51F48
                  + 8 * ((*(_QWORD *)(16 * ((a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  if ( *(_BYTE *)(v25 + 15590) )
  {
    if ( v7 == 2 )
    {
      _InterlockedExchangeAdd8((volatile signed __int8 *)(*(_QWORD *)(v25 + 15856) + (v23 >> 9)), 0xFFu);
    }
    else if ( v7 == 1 )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)(v25 + 15880) + 2 * (v23 >> 18)));
    }
  }
  v26 = (unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6;
  v27 = 134 * v10 + 4 * (v6 + 4 * (v22 + (v23 < 0x100000 ? 2 : 0)));
  v28 = 8 * v10 + 116608;
  v29 = v26 + v27;
  if ( *(_QWORD *)(v28 + 0x140000000LL) == 16LL )
  {
    v30 = v23 >> 4;
  }
  else
  {
    v30 = v23 / *(_QWORD *)(v28 + 0x140000000LL);
    v10 = v45;
  }
  v31 = (unsigned int)dword_140C507C0[v10];
  if ( v31 == 16 )
    LODWORD(v30) = v30 & 0xF;
  else
    v30 %= v31;
  v32 = 2624LL;
  --*(_QWORD *)(a1[v29 + 70] + 24LL * (unsigned int)v30 + 16);
  v33 = 2496LL;
  a1[v29 + 6] = a1[v26 + 6 + v27] - 1LL;
  if ( (_DWORD)v22 )
    v33 = 2624LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + v9), -v12);
  if ( dword_140C529CC == 1 )
  {
    v39 = v23 & 0x1F;
    v32 = v12;
    v40 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v23 >> 5));
    if ( v39 + v12 > 0x20 )
    {
      if ( (v23 & 0x1F) != 0 )
      {
        _InterlockedOr(v40, ((1 << (32 - (v23 & 0x1F))) - 1) << v39);
        v32 = v12 - (32 - (unsigned int)(v23 & 0x1F));
        ++v40;
      }
      if ( v32 >= 0x20 )
      {
        v44 = v32 >> 5;
        v32 += -32LL * (v32 >> 5);
        do
        {
          *v40++ = -1;
          --v44;
        }
        while ( v44 );
      }
      if ( !v32 )
        goto LABEL_24;
      v41 = (1 << v32) - 1;
    }
    else
    {
      if ( v12 == 32 )
      {
        *v40 = -1;
        goto LABEL_24;
      }
      v41 = ((1 << v12) - 1) << v39;
    }
    _InterlockedOr(v40, v41);
  }
LABEL_24:
  if ( !(_DWORD)v22 )
  {
    if ( *(_BYTE *)(v9 + 15589) )
    {
      LODWORD(v22) = 1;
    }
    else if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    {
      sub_1405AD468(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    }
  }
  v34 = 0LL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( (_DWORD)v22 == 1 )
    v34 = sub_1402CCC50(128LL, v32);
  v35 = *(_QWORD *)(a2 + 16);
  if ( qword_140C50780 && (v35 & 0x10) == 0 )
    v35 &= ~qword_140C50780;
  *(_QWORD *)(a2 + 16) = v34;
  if ( HIDWORD(v35) == 4294967293 )
    *(_QWORD *)(a2 + 16) = sub_14033B6A0(v34, 4294967293LL);
  if ( v12 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (dword_140D06880 & 0x30) != 0 )
  {
    sub_140397C78(v9, (unsigned int)v11, 0LL);
  }
  return 1LL;
}
