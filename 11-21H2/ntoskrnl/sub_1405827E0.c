/*
 * XREFs of sub_1405827E0 @ 0x1405827E0
 * Callers:
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405827E0(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  BOOL v6; // ecx
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // bp
  unsigned __int64 v13; // r15
  char v14; // r8
  int v15; // eax
  __int16 v16; // r9
  ULONG_PTR v17; // r10
  __int16 v18; // r13
  __int64 v19; // rbp
  ULONG_PTR v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  ULONG_PTR *v28; // rcx
  struct _KPRCB *v29; // r8
  __int64 v30; // rdx
  signed __int32 v31; // eax
  unsigned int v33; // [rsp+24h] [rbp-84h]
  int v34; // [rsp+28h] [rbp-80h]
  __int128 v36; // [rsp+40h] [rbp-68h] BYREF
  __int128 v37; // [rsp+50h] [rbp-58h]

  v4 = a4;
  v5 = a1;
  v6 = (a4 & 0x200) == 0;
  v33 = v6;
  v7 = a2;
  v8 = a3 - a2;
  v36 = 0LL;
  v37 = 0LL;
  if ( (a4 & 0x3000) != 0 )
  {
    v9 = (a4 >> 12) & 1;
    v34 = sub_1403B78C4(v6, (a4 >> 12) & 1);
    v10 = qword_14001C780[v9];
    v11 = 48 * v7 - 0x220000000000LL;
    if ( !(v8 / v10) )
      goto LABEL_23;
    v12 = ~(_BYTE)v9 & 3;
    v13 = v8 / v10;
    do
    {
      sub_1402F2700(v11);
      *(_BYTE *)(v11 + 36) = v12 | *(_BYTE *)(v11 + 36) & 0xFC;
      *(_QWORD *)(v11 + 16) = sub_14033B6A0(*(_QWORD *)(v11 + 16), -(__int64)(v34 != 0) & 0xFFFFFFFDLL);
      *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 6;
      v37 = 0LL;
      *(_QWORD *)&v36 = v7;
      *((_QWORD *)&v36 + 1) = v33;
      LOBYTE(v37) = v14;
      sub_1402BEEA0((__int64)&v36);
      if ( *((_QWORD *)&v37 + 1) )
        v8 -= *((_QWORD *)&v37 + 1);
      v11 += 48 * v10;
      v7 += v10;
      --v13;
    }
    while ( v13 );
    v4 = a4;
    goto LABEL_22;
  }
  v15 = sub_1403B78C4(v6, 3u);
  v18 = v16 | 0x400;
  if ( !v15 )
    v18 = v16;
  v8 = 0LL;
  v19 = 48 * v7 - 0x220000000000LL;
  if ( v7 < v17 )
  {
    v20 = v17;
    do
    {
      v21 = v8++;
      v22 = (unsigned __int8)sub_1402F2700(v19);
      if ( (*(_BYTE *)(v19 + 35) & 0x40) != 0 )
        v8 = v21;
      sub_1402C6EB0(v7, v18);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = *((_QWORD *)CurrentPrcb + 4375);
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v26;
            if ( v27 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v22);
      ++v7;
      v19 += 48LL;
    }
    while ( v7 < v20 );
LABEL_22:
    v5 = a1;
  }
LABEL_23:
  if ( (v4 & 8) == 0 )
  {
    v28 = &StartContext;
LABEL_28:
    sub_14028CE10((__int64)v28, v8);
    goto LABEL_29;
  }
  if ( (v4 & 0x40000) != 0 || (v4 & 0x10000) != 0 )
  {
    v28 = (ULONG_PTR *)v5;
    goto LABEL_28;
  }
LABEL_29:
  if ( (ULONG_PTR *)v5 == &StartContext )
  {
    v29 = KeGetCurrentPrcb();
    v30 = *((int *)v29 + 8615);
    if ( (_DWORD)v30 != -1 )
    {
      if ( v8 + v30 <= 0x100 )
      {
        do
        {
          if ( v8 >= 0x80000 )
            break;
          v31 = _InterlockedCompareExchange((volatile signed __int32 *)v29 + 8615, v8 + v30, v30);
          v27 = (_DWORD)v30 == v31;
          LODWORD(v30) = v31;
          if ( v27 )
            return;
        }
        while ( v31 != -1 && v8 + v31 <= 0x100 );
      }
      if ( (int)v30 > 192 && (_DWORD)v30 == _InterlockedCompareExchange((volatile signed __int32 *)v29 + 8615, 192, v30) )
        v8 += (int)v30 - 192;
    }
  }
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v8);
}
