/*
 * XREFs of sub_140264720 @ 0x140264720
 * Callers:
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 * Callees:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_140264E64 @ 0x140264E64 (sub_140264E64.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140338BF0 @ 0x140338BF0 (sub_140338BF0.c)
 *     InterlockedPushListSList @ 0x140429930 (InterlockedPushListSList.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

__int64 __fastcall sub_140264720(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbx
  _SLIST_ENTRY *v17; // rsi
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 result; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  volatile signed __int32 *v27; // r10
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  int v30; // r8d
  unsigned __int64 v31; // rcx
  int v32; // eax
  int v33; // [rsp+20h] [rbp-78h]
  unsigned int v34; // [rsp+24h] [rbp-74h]
  unsigned __int64 v35; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v36; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  _SLIST_ENTRY *List; // [rsp+50h] [rbp-48h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]
  unsigned int v43; // [rsp+B0h] [rbp+18h]
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v5 = (int)a2;
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    goto LABEL_39;
  v38 = 16LL * (unsigned int)a3;
  v39 = *(_QWORD *)(a1 + 8LL * (int)a2 + 6616);
  v6 = *(unsigned __int16 *)(v38 + v39);
  v7 = *(unsigned int *)(a1 + 16188);
  v8 = (unsigned int)a3;
  if ( v6 >= v7 )
    goto LABEL_39;
  v9 = (int)v7 - v6;
  if ( (dword_140D0689C & 0x200000) != 0 )
  {
    v33 = 1;
    v29 = (unsigned int)(*(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 4));
    if ( v9 < v29 )
      v29 = v9;
    v9 = v29;
  }
  else
  {
    v33 = 0;
  }
  v10 = v9 + 64;
  v41 = *(_QWORD *)(a1 + 16) + 24512 * ((unsigned __int64)(unsigned int)a3 >> byte_140C506CC);
  v34 = (unsigned __int8)(byte_140D069E2 & ((unsigned int)a3 >> byte_140C506CD));
  if ( (_DWORD)a2 )
  {
    v11 = *(_QWORD *)(a1 + 2440);
    v36 = (volatile signed __int64 *)(a1 + 2624);
    if ( sub_140264BD8(v41, v34, 4096LL) < v10 )
      goto LABEL_39;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 2432);
    v36 = (volatile signed __int64 *)(a1 + 2496);
    if ( sub_140264BD8(v41, v34, 4098LL) < v10 || *(_BYTE *)(a1 + 15589) )
      goto LABEL_39;
  }
  v12 = (unsigned __int64 *)(v11 + 88 * v8);
  v37 = v12;
  if ( v9 > *v12 )
    v9 = *v12;
  if ( *(_QWORD *)(a1 + 16896) - v9 >= 0x420 )
  {
    v13 = a1;
    v35 = v9;
    v14 = 0LL;
    if ( !(unsigned int)sub_140264D88(a1, v9, 1056LL, 0LL) )
      goto LABEL_37;
    v15 = v12[2];
    v16 = 48 * v15 - 0x220000000000LL;
    a2 = 0xFFFFFFFE00000000uLL;
    v17 = 0LL;
    List = (_SLIST_ENTRY *)v16;
    v18 = 0xAAAAAAAAAAAAAAABuLL;
    a3 = 0xFFFFFFFFFFLL;
    a4 = 0x3FFFFFFFFFLL;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
LABEL_30:
        v35 -= v14;
        if ( v14 )
        {
          if ( *(_DWORD *)(v44 + 4) )
          {
            sub_1405B7E7C(v44, 0xFFFFFFFE00000000uLL, a3, a4);
            a4 = 0x3FFFFFFFFFLL;
          }
          v37[2] = v15;
          if ( v15 == a4 )
          {
            v13 = a1;
            sub_140264E64(a1, (unsigned int)v5, v43, 0LL);
            v37[3] = 0x3FFFFFFFFFLL;
          }
          else
          {
            sub_140313CA0(v16, a4, 0LL);
            v13 = a1;
          }
          InterlockedPushListSList((PSLIST_HEADER)(v38 + v39), List, v17, v14);
          v21 = *v37 - v14;
          v22 = -v14;
          *v37 = v21;
          _InterlockedExchangeAdd64(v36, v22);
          a2 = v41;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8 * v5 + 22560), v22);
          if ( (unsigned int)dword_140D05004 > 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8 * (v5 + 2LL * v34) + 22720), v22);
        }
        else
        {
          v13 = a1;
        }
LABEL_37:
        if ( v35 )
          sub_140338BF0(v13, v35);
        goto LABEL_39;
      }
      v17 = (_SLIST_ENTRY *)v16;
      if ( !(_DWORD)v5 && (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
      {
        sub_1405AD468(v18 * ((v16 + 0x220000000000LL) >> 4));
        a4 = 0x3FFFFFFFFFLL;
        a2 = 0xFFFFFFFE00000000uLL;
        a3 = 0xFFFFFFFFFFLL;
        v18 = 0xAAAAAAAAAAAAAAABuLL;
      }
      if ( dword_140C529CC == 1 )
        break;
LABEL_17:
      *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
      {
        sub_140226804(v16, 1, 0);
        a4 = 0x3FFFFFFFFFLL;
        a2 = 0xFFFFFFFE00000000uLL;
        a3 = 0xFFFFFFFFFFLL;
        v18 = 0xAAAAAAAAAAAAAAABuLL;
      }
      *(_QWORD *)(v16 + 24) &= 0xFFFFFF0000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v33 )
      {
        v32 = sub_140268620(v16, 0xFFFFFFFE00000000uLL, a3, a4);
        a2 = 0xFFFFFFFE00000000uLL;
        if ( v32 )
          *(_QWORD *)(v44 + 8LL * (unsigned int)(*(_DWORD *)(v44 + 4))++ + 16) = v15 << 12;
      }
      v15 = a3 & *(_QWORD *)v16;
      if ( v15 == a4 )
        v16 = 0LL;
      else
        v16 = 48 * v15 - 0x220000000000LL;
      v19 = (__int64)v17[1].Next ^ (LODWORD(v17[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
      if ( v19 )
      {
        if ( qword_140C50780 )
        {
          if ( (v19 & 0x10) != 0 )
            LODWORD(v19) = v19 & 0xFFFFFFEF;
          else
            LODWORD(v19) = ~(_DWORD)qword_140C50780 & v19;
        }
      }
      else
      {
        LODWORD(v19) = 0;
      }
      v20 = (unsigned int)v19 | 0xFFFFFFFE00000000uLL;
      if ( qword_140C50780 )
      {
        if ( (qword_140C50780 & v20) != 0 )
          v20 = (unsigned int)v19 | 0xFFFFFFFE00000010uLL;
        else
          v20 |= qword_140C50780;
      }
      ++v14;
      v17[1].Next = (_SLIST_ENTRY *)v20;
      v17->Next = (_SLIST_ENTRY *)v16;
      if ( !--v9 )
        goto LABEL_30;
    }
    LOBYTE(v24) = 1;
    v25 = v18 * ((v16 + 0x220000000000LL) >> 4);
    v26 = ((_BYTE)v18 * (unsigned __int8)((v16 + 0x220000000000LL) >> 4)) & 0x1F;
    v27 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v25 >> 5));
    if ( (unsigned __int64)(v26 + 1) > 0x20 )
    {
      if ( v26 )
      {
        v30 = v25 & 0x1F;
        _InterlockedOr(v27++, ((1 << (32 - v30)) - 1) << v26);
        v24 = 1LL - (unsigned int)(32 - v30);
        if ( v24 >= 0x20 )
        {
          v31 = v24 >> 5;
          v24 += -32LL * (v24 >> 5);
          do
          {
            *v27++ = -1;
            --v31;
          }
          while ( v31 );
        }
        if ( !v24 )
          goto LABEL_48;
      }
      v28 = (1 << v24) - 1;
    }
    else
    {
      v28 = 1 << v26;
    }
    _InterlockedOr(v27, v28);
LABEL_48:
    a4 = 0x3FFFFFFFFFLL;
    a2 = 0xFFFFFFFE00000000uLL;
    a3 = 0xFFFFFFFFFFLL;
    v18 = 0xAAAAAAAAAAAAAAABuLL;
    goto LABEL_17;
  }
LABEL_39:
  result = v44;
  if ( *(_DWORD *)(v44 + 4) )
    return sub_1405B7E7C(v44, a2, a3, a4);
  return result;
}
