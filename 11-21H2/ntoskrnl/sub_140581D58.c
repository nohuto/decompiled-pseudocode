/*
 * XREFs of sub_140581D58 @ 0x140581D58
 * Callers:
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_1409745FC @ 0x1409745FC (sub_1409745FC.c)
 *     sub_14097469C @ 0x14097469C (sub_14097469C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402DB710 @ 0x1402DB710 (sub_1402DB710.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_140581D58(__int64 a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  signed __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rcx
  char v25; // cl
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int64 BugCheckParameter2; // [rsp+28h] [rbp-A1h]
  unsigned __int64 v31; // [rsp+30h] [rbp-99h]
  __int64 v32; // [rsp+38h] [rbp-91h] BYREF
  __int64 v33; // [rsp+40h] [rbp-89h]
  __int64 v34; // [rsp+48h] [rbp-81h] BYREF
  __int64 v35; // [rsp+50h] [rbp-79h]
  unsigned __int64 v36; // [rsp+58h] [rbp-71h]
  __int128 v37[11]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int8 v38; // [rsp+128h] [rbp+5Fh]
  unsigned int v39; // [rsp+130h] [rbp+67h]

  v39 = a2;
  memset((char *)&v37[1] + 8, 0, 0x60uLL);
  v7 = *(_QWORD *)a1;
  v8 = 0;
  *(_QWORD *)&v37[0] = 0LL;
  v33 = 0LL;
  BugCheckParameter2 = *(_QWORD *)(v7 + 48) + ((unsigned __int64)a2 << 12);
  v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = v9;
  v10 = v9;
  if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v37[0] + 1) = 0LL;
  v12 = BugCheckParameter2;
  v35 = (a5 + 48) & -(__int64)(a5 != 0);
LABEL_4:
  v13 = 0LL;
  v38 = sub_1402CF4F0(v11);
  while ( 1 )
  {
    v15 = v39;
    v36 = v10;
    if ( v39 > a3 )
      break;
    if ( v13 )
    {
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_11;
      sub_14020D8D0(v11, v13);
    }
    v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v11, v13, 0LL, v14);
    v15 = v39;
LABEL_11:
    if ( *(_QWORD *)(a1 + 56)
      && (unsigned __int64)v15 < *(_QWORD *)(a1 + 48)
      && _bittest64(*(const signed __int64 **)(a1 + 56), v15) )
    {
      goto LABEL_46;
    }
    v34 = sub_140317A10(v10);
    if ( (v34 & 1) != 0 )
    {
      v18 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
        v18 += (v9 >> 3) & 0x1FF;
      v19 = 48 * v18 - 0x220000000000LL;
      v20 = *(_QWORD *)(v19 + 40);
      if ( v20 >= 0 )
        goto LABEL_24;
      if ( (v20 & 0x10000000000LL) != 0 || *(__int64 *)(v19 + 8) <= 0 )
      {
        if ( (*(_BYTE *)(v11 + 184) & 7) != 1 )
        {
          sub_14020D8D0(v11, v13);
          sub_1402B0CE0(v11, v38);
          sub_14033F41C(*(_QWORD *)a1, v10, v10 + 8LL * (a3 - v39), 8);
          sub_1402CF4F0(v11);
          sub_14031DE00(v11, v13, 0LL, v23);
          v12 = BugCheckParameter2;
          goto LABEL_5;
        }
LABEL_24:
        if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v39) )
        {
          LODWORD(v32) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v32, v16, v17, v14);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          v24 = 48 * v18 - 0x220000000000LL;
          if ( (*(_BYTE *)(v11 + 184) & 7) == 1 )
          {
            if ( !(unsigned int)sub_140274508(v24, 0LL, v17) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v8 = -1073741670;
              goto LABEL_57;
            }
          }
          else
          {
            sub_1402DB710(v24, v16, v17);
          }
          v25 = a4;
          if ( (a4 & 1) != 0 && ((*(_QWORD *)(v19 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v37[0] = BugCheckParameter2;
            sub_14039FDB0(v18, v37, 256);
            *(_DWORD *)(a1 + 96) |= 1u;
            v25 = a4;
          }
          if ( v35 )
            *(_QWORD *)(v35 + 8LL * v39) = v18;
          if ( (v25 & 4) != 0 )
          {
            v26 = 0LL;
          }
          else
          {
            v26 = sub_14033C2A0(48 * v18 - 0x220000000000LL);
            if ( v26 )
            {
              v27 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
              v33 = v27;
              goto LABEL_42;
            }
          }
          v27 = v33;
LABEL_42:
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v26 )
            sub_1402E20D0(v27, v26, 1);
          _bittestandset64(*(signed __int64 **)(a1 + 40), v39);
        }
        v12 = BugCheckParameter2;
        v9 = v31;
        goto LABEL_46;
      }
      v12 = BugCheckParameter2;
      v21 = sub_140316400(BugCheckParameter2, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v21 < 0 )
      {
        sub_14020D8D0(v11, v13);
        sub_1402B0CE0(v11, v38);
        sub_1405BCAF8(v11, (unsigned int)v21);
        sub_1402CF4F0(v11);
        sub_14031DE00(v11, v13, 0LL, v22);
      }
LABEL_5:
      v9 = v31;
    }
    else
    {
      sub_14020D8D0(v11, v13);
      sub_1402B0CE0(v11, v38);
      WORD4(v37[1]) = 6;
      memset(&v37[2], 0, 32);
      if ( (int)sub_14031C860(0LL, v12, 0, (ULONG_PTR)&v37[1] + 9) >= 0 )
        goto LABEL_4;
      sub_1402CF4F0(v11);
      sub_14031DE00(v11, v13, 0LL, v28);
      if ( (a4 & 2) == 0
        && (!*(_QWORD *)(a1 + 88)
         || (unsigned __int64)v39 >= *(_QWORD *)(a1 + 80)
         || !_bittest64(*(const signed __int64 **)(a1 + 88), v39)) )
      {
        v8 = -1073741701;
        goto LABEL_57;
      }
LABEL_46:
      ++v39;
      v12 += 4096LL;
      v9 += 8LL;
      BugCheckParameter2 = v12;
      v31 = v9;
      v10 = v36 + 8;
      if ( (v9 & 0xFFF) != 0 && (*(_BYTE *)(a1 + 96) & 2) != 0 )
        v10 = v36;
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_57:
  sub_14020D8D0(v11, v13);
  sub_1402B0CE0(v11, v38);
  return v8;
}
