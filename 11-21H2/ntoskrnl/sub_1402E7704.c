/*
 * XREFs of sub_1402E7704 @ 0x1402E7704
 * Callers:
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14024253C @ 0x14024253C (sub_14024253C.c)
 *     sub_14024E640 @ 0x14024E640 (sub_14024E640.c)
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402E851C @ 0x1402E851C (sub_1402E851C.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E94F0 @ 0x1402E94F0 (sub_1402E94F0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14036C428 @ 0x14036C428 (sub_14036C428.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1402E7704(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  char v5; // r12
  unsigned int v7; // edi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  char v10; // cl
  __int64 v11; // r14
  char v12; // cl
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v16; // eax
  char v17; // cl
  int v18; // ebx
  BOOL v19; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // r12
  __int64 v24; // r9
  _QWORD *v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // r14
  __int64 v28; // rax
  int v29; // r12d
  __int64 v30; // rbx
  char v31; // al
  char result; // al
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  volatile signed __int32 *v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  bool v42; // zf
  signed __int32 v43[8]; // [rsp+0h] [rbp-F8h] BYREF
  int v44; // [rsp+20h] [rbp-D8h]
  __int64 v45; // [rsp+28h] [rbp-D0h]
  int v46; // [rsp+30h] [rbp-C8h]
  int v47; // [rsp+34h] [rbp-C4h]
  __int64 v48; // [rsp+38h] [rbp-C0h]
  _BYTE v49[112]; // [rsp+40h] [rbp-B8h] BYREF

  v46 = a3;
  v48 = a4;
  v5 = a3;
  v7 = 4 * (a3 & 1);
  memset(v49, 0, 0x68uLL);
  v44 = 0xFFFFFF;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v10 = *(_BYTE *)(BugCheckParameter2 + 34);
  v45 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v11 = *(_QWORD *)(v45 + 8LL * (v10 & 7) + 6632);
  if ( (v10 & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v12 = *(_BYTE *)(BugCheckParameter2 + 36);
    *(_BYTE *)(BugCheckParameter2 + 36) = v12 & 0xF0;
  }
  else
  {
    v12 = *(_BYTE *)(a2 + 36);
  }
  v13 = v12 & 0xF;
  v47 = v5 & 4;
  if ( (v5 & 4) == 0 )
    sub_140239060(a2);
  if ( sub_140277C50(a2) )
    v7 |= 8u;
  v14 = v7;
  sub_1402E5708(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1u);
  sub_1402E8154(a2, BugCheckParameter2);
  *(_BYTE *)(a2 + 36) = v13 | *(_BYTE *)(a2 + 36) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == v8 )
    sub_14033C3E0(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  sub_1402E7D60(
    0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
    v48,
    6LL);
  _InterlockedOr(v43, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)dword_140D31080 << 59)) & 0x3800000000000000LL;
  if ( (v46 & 2) == 0 )
  {
    v15 = *(_DWORD *)(v11 + 8);
    if ( v15 == 2 )
    {
      if ( (v7 & 4) != 0 && _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x3Bu) )
      {
        sub_140326870(BugCheckParameter2);
        v7 |= 0x10u;
        goto LABEL_30;
      }
      v16 = sub_140273234(BugCheckParameter2);
      v7 |= 2u;
      v17 = *(_BYTE *)(BugCheckParameter2 + 35);
      v11 = 88LL * v16 + v45 + 2880;
      v44 = v16;
      if ( (v17 & 8) == 0 )
        v7 = v14;
      v18 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
            + 2);
      if ( v18 == *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 2) )
      {
        sub_1403277D0(v11, BugCheckParameter2, 1LL, v49, v44);
        v19 = sub_140277C50(a2);
        v20 = v49[0];
        v21 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
        if ( !v19 )
        {
          sub_1402E8AA0(v21, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v49[0]);
          goto LABEL_17;
        }
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
        v20 = 0LL;
        v21 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
      }
      sub_1402E8AA0(v21, -1LL, v20);
      sub_1402E94F0(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), 0LL);
    }
    else
    {
      if ( v15 == 3 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
          v11 = 88LL * v13 + v45 + 5120;
        else
          v11 = sub_14024E640(a2, v45);
      }
      sub_1403277D0(v11, BugCheckParameter2, 1LL, v49, v44);
    }
LABEL_17:
    v22 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
    v23 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
    *(_QWORD *)a2 = v22 | *(_QWORD *)a2 & 0xFFFFFF0000000000uLL;
    sub_140313CA0(a2, v23, 1LL);
    if ( v22 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v11 + 24) = v9;
    }
    else
    {
      v24 = 48 * v22 - 0x220000000000LL;
      if ( v44 != 0xFFFFFF && (v7 & 2) != 0 && sub_1402C1520(v22) )
        sub_14033C3E0(v24, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
      else
        sub_140313CA0(v24, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), 0LL);
    }
    if ( v23 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v11 + 16) = v9;
    }
    else
    {
      v25 = (_QWORD *)(48 * v23 - 0x220000000000LL);
      if ( v44 != 0xFFFFFF && (v7 & 2) != 0 && sub_1402C1520(v23) )
      {
        v33 = sub_1402E7D14(v25[2], 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
        *(_QWORD *)(v34 + 16) = v33;
LABEL_26:
        if ( (v7 & 0xC) != 0 )
        {
          sub_14024253C(a2, 0);
          if ( (v7 & 4) == 0 )
          {
            sub_1403AC4E0(BugCheckParameter2);
            _InterlockedDecrement64((volatile signed __int64 *)v11);
            v35 = 15808LL;
            if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
              v35 = 6784LL;
            v36 = v45;
            _InterlockedDecrement64((volatile signed __int64 *)(v45 + v35));
            sub_140264D88(v36, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
          }
        }
        else
        {
          sub_1402E851C(BugCheckParameter2, a2, v49);
        }
LABEL_28:
        if ( dword_140C529CC == 1 )
        {
          v37 = v8 & 0x1F;
          LOBYTE(v38) = 1;
          v39 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v8 >> 5));
          if ( v37 + 1 > 0x20 )
          {
            if ( (v8 & 0x1F) != 0 )
            {
              _InterlockedOr(v39++, ((1 << (32 - (v8 & 0x1F))) - 1) << v37);
              v38 = 1LL - (32 - (unsigned int)(v8 & 0x1F));
              if ( v38 >= 0x20 )
              {
                v41 = v38 >> 5;
                v38 += -32LL * (v38 >> 5);
                do
                {
                  *v39++ = -1;
                  --v41;
                }
                while ( v41 );
              }
              if ( !v38 )
                goto LABEL_29;
            }
            v40 = (1 << v38) - 1;
          }
          else
          {
            v40 = 1 << v37;
          }
          _InterlockedOr(v39, v40);
        }
LABEL_29:
        sub_140338D00(v11, v49);
        goto LABEL_30;
      }
      *v25 ^= (v9 ^ *v25) & 0xFFFFFFFFFFLL;
    }
    if ( v44 == 0xFFFFFF )
      goto LABEL_28;
    goto LABEL_26;
  }
LABEL_30:
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  sub_140313CA0(BugCheckParameter2, 0LL, 1LL);
  _InterlockedOr(v43, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)dword_140D31080 << 59)) & 0x3800000000000000LL;
  v26 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
  if ( v26 == v8 )
  {
    v27 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v7 |= 1u;
    v27 = (_QWORD *)(sub_1402CC7C0(v26, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v28 = sub_140317A10(v27);
  v29 = 0;
  v30 = sub_1402E7D14(v28, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  if ( (unsigned int)sub_140317A80(v27) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v29 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_33;
      v42 = (v30 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_33;
      v42 = (v30 & 1) == 0;
    }
    if ( !v42 )
      v30 |= 0x8000000000000000uLL;
  }
LABEL_33:
  *v27 = v30;
  if ( v29 )
    sub_1402294F0((__int64)v27, v30);
  if ( (v7 & 1) != 0 )
  {
    sub_1402BEDD0((unsigned __int64)v27, 0x11u);
    v27 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (unsigned int)sub_14027B080((unsigned __int64)v27) == 5 )
    *(v27 - 174) = sub_14036C428(0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4));
  if ( v7 >= 0x10 )
    sub_1402BF9C0(a2, 0x800u);
  if ( !v47 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  sub_14033C300(BugCheckParameter2, 0LL);
  v31 = *(_BYTE *)(BugCheckParameter2 + 34);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) = v31 & 0xC7;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}
