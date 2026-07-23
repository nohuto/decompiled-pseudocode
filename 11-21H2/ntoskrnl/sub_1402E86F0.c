/*
 * XREFs of sub_1402E86F0 @ 0x1402E86F0
 * Callers:
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 */

void __fastcall sub_1402E86F0(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r8
  ULONG_PTR v21; // rdx
  unsigned __int64 v22; // r8
  ULONG_PTR v23; // rcx
  ULONG_PTR *v24; // rdx
  volatile LONG *v25; // rcx
  ULONG_PTR v26; // r10
  volatile signed __int32 *v27; // rdx
  unsigned int v28; // r8d
  int v29; // r12d
  unsigned __int64 v30; // rcx
  volatile signed __int32 *v31; // r9
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-38h]
  __int64 v36; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v37; // [rsp+28h] [rbp-30h]
  ULONG_PTR v38; // [rsp+60h] [rbp+8h]
  unsigned __int64 v39; // [rsp+60h] [rbp+8h]
  unsigned int v40; // [rsp+78h] [rbp+20h]

  v7 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v35 = a2;
  v37 = (unsigned __int64 *)(0x140000000LL + 8LL * a2 + 116608);
  v8 = *v37;
  v9 = *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * BugCheckParameter2) >> 4)) + 2);
  v40 = sub_1402E8990(v7);
  v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  v11 = *(_QWORD *)(v10 + 16) + 24512 * v9;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 22848));
  *(_BYTE *)(v7 + 34) &= ~8u;
  v12 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_BYTE *)(v12 + 70) = 1;
  *(_QWORD *)(v7 + 16) = sub_1402CCC50(128LL);
  if ( a4 )
  {
    if ( dword_140C529CC == 1 )
    {
      v26 = BugCheckParameter2 & 0x1F;
      v27 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (BugCheckParameter2 >> 5));
      if ( v26 + v8 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v29 = BugCheckParameter2 & 0x1F;
          _InterlockedOr(v27, ((1 << (32 - v29)) - 1) << v26);
          v8 -= (unsigned int)(32 - v29);
          ++v27;
        }
        if ( v8 >= 0x20 )
        {
          v30 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            *v27++ = -1;
            --v30;
          }
          while ( v30 );
        }
        if ( !v8 )
          goto LABEL_27;
        v28 = (1 << v8) - 1;
      }
      else
      {
        if ( v8 == 32 )
        {
          *v27 = -1;
          goto LABEL_27;
        }
        v28 = ((1 << v8) - 1) << v26;
      }
      _InterlockedOr(v27, v28);
    }
LABEL_27:
    v25 = (volatile LONG *)(v11 + 22848);
    goto LABEL_13;
  }
  v13 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
    goto LABEL_44;
  v14 = *(_QWORD **)(v7 + 8);
  if ( *v14 != v7 )
    goto LABEL_44;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( a3 )
    *(_QWORD *)(v7 + 16) = sub_14033B6A0(*(_QWORD *)(v7 + 16), 4294967293LL);
  if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    sub_1405AD468(BugCheckParameter2);
  v15 = v35;
  v16 = 1072 * v35;
  --*(_QWORD *)(1072 * v35 + v11 + 8);
  v17 = v11 + 1072 * v35 + (BugCheckParameter2 < 0x100000 ? 0x10 : 0);
  --*(_QWORD *)(v17 + 24);
  v18 = 4LL;
  v36 = 134 * v35;
  if ( BugCheckParameter2 < 0x100000 )
    v18 = 12LL;
  v19 = (unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6;
  v20 = v19 + 134 * v15 + 4 * (v40 + v18);
  v21 = 24 * (BugCheckParameter2 / *v37 % (unsigned int)dword_140C507C0[v15]);
  --*(_QWORD *)(v21 + *(_QWORD *)(v11 + 8 * v20 + 560) + 16);
  --*(_QWORD *)(v11 + 8 * v20 + 48);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2624), -(__int64)v8);
  if ( dword_140C529CC != 1 )
    goto LABEL_10;
  v31 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (BugCheckParameter2 >> 5));
  v38 = BugCheckParameter2 & 0x1F;
  if ( v38 + v8 <= 0x20 )
  {
    if ( v8 == 32 )
    {
      *v31 = -1;
      goto LABEL_10;
    }
    v32 = ((1 << v8) - 1) << v38;
    goto LABEL_42;
  }
  if ( (BugCheckParameter2 & 0x1F) != 0 )
  {
    _InterlockedOr(v31, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v38);
    v33 = v8 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    ++v31;
  }
  else
  {
    v33 = v8;
  }
  if ( v33 >= 0x20 )
  {
    v39 = v33 >> 5;
    v33 += -32LL * (v33 >> 5);
    v34 = v39;
    do
    {
      *v31++ = -1;
      --v34;
    }
    while ( v34 );
  }
  if ( v33 )
  {
    v32 = (1 << v33) - 1;
LABEL_42:
    _InterlockedOr(v31, v32);
  }
LABEL_10:
  *(_BYTE *)(v7 + 34) &= 0xF8u;
  v22 = v36 + v19 + 4 * (v40 + (unsigned __int64)(BugCheckParameter2 < 0x100000 ? 8 : 0));
  v23 = v21 + *(_QWORD *)(v11 + 8 * v22 + 560);
  v24 = *(ULONG_PTR **)(v23 + 8);
  if ( (dword_140D06880 & 0x30) == 0 )
  {
    if ( *v24 == v23 )
      goto LABEL_12;
LABEL_44:
    __fastfail(3u);
  }
  if ( *v24 != v23 )
    goto LABEL_44;
LABEL_12:
  *(_QWORD *)v7 = v23;
  *(_QWORD *)(v7 + 8) = v24;
  *v24 = v7;
  *(_QWORD *)(v23 + 8) = v7;
  ++*(_QWORD *)(v23 + 16);
  ++*(_QWORD *)(v11 + 8 * v22 + 48);
  ++*(_QWORD *)(v16 + v11);
  ++*(_QWORD *)(v17 + 16);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2496), v8);
  v25 = (volatile LONG *)(v11 + 22848);
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(v25);
}
