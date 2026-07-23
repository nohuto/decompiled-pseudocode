/*
 * XREFs of sub_1402B4AE0 @ 0x1402B4AE0
 * Callers:
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045AD66 @ 0x14045AD66 (sub_14045AD66.c)
 */

__int64 __fastcall sub_1402B4AE0(signed int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v5; // esi
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // rbx
  unsigned int v10; // ebp
  int v11; // edx
  signed int v12; // ecx
  unsigned int v13; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // r9
  _QWORD **v19; // r13
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbp
  _QWORD *v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+90h] [rbp+8h]
  signed int v39; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v41; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 34888);
  v5 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v8 = *(_BYTE *)(a2 + 35);
  v37 = v7;
  if ( (v8 & 2) != 0 && (v7 & *(_QWORD *)(a2 + 34880)) != 0 && v8 != 7 )
    v3 = 0LL;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !dword_140D06A38 && dword_140C2B994 == 4 )
      return v9;
    v10 = *(_DWORD *)(a2 + 32472);
    v11 = -2;
    v38 = -2;
    v12 = -1;
    v39 = -1;
    if ( v10 >= v5 )
    {
      _BitScanReverse((unsigned int *)&v12, v10);
      v39 = v12;
      v10 = 1 << v12;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 8);
      if ( v13 >= v5 )
      {
        _BitScanReverse((unsigned int *)&v11, v13);
        v38 = v11;
      }
      else
      {
        v11 = -2;
      }
      v12 = v39;
      if ( v11 > v39 || v11 == v39 && !_bittest((const signed __int32 *)(a2 + 32476), v39) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v40 = 0;
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v16 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v33 = *(_DWORD *)(v16 + 24);
            *(_DWORD *)(v16 + 24) = v33 + 1;
            if ( v33 == -1 )
LABEL_62:
              sub_140418E4C(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v31 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v34 = *(_DWORD *)(v31 + 24) - 1;
              *(_DWORD *)(v31 + 24) = v34;
              if ( !v34 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          do
            sub_1402F32E0(&v40);
          while ( *(_QWORD *)v3 );
          v32 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v32 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v35 = *(_DWORD *)(v32 + 24);
              *(_DWORD *)(v32 + 24) = v35 + 1;
              if ( v35 == -1 )
                goto LABEL_62;
            }
          }
        }
        v17 = *(_DWORD *)(v3 + 8);
        v18 = v37;
LABEL_17:
        v9 = 0LL;
        if ( v17 >= v5 && v17 >= v10 )
        {
          _BitScanReverse((unsigned int *)&a3, v17);
          v38 = a3;
          v19 = (_QWORD **)(v3 + 16 * ((int)a3 + 1LL));
          v17 ^= 1 << a3;
          v20 = *v19;
          v41 = *v19;
          while ( 1 )
          {
            v21 = *((unsigned __int8 *)v20 - 91);
            v9 = (__int64)(v20 - 27);
            if ( v21 >= 5 )
            {
              v21 = sub_14045AD66(v20 - 27, v20, a3, v18);
              v20 = v41;
              v18 = v37;
            }
            v22 = -1LL;
            if ( v21 )
            {
              a3 = *(_QWORD *)(a2 + 192);
              v20 = v41;
              v22 = *(_QWORD *)(*(_QWORD *)(a3 + 192)
                              + 24LL * (*(unsigned __int8 *)(v9 + 516) + v21 * *(unsigned __int8 *)(a3 + 185))
                              + 16);
            }
            if ( (v22 & *(_QWORD *)(a2 + 200)) != 0 || (v22 & *(_QWORD *)(a2 + 34880) & v18) == 0 )
              break;
            v20 = (_QWORD *)*v20;
            v41 = v20;
            if ( v20 == v19 )
              goto LABEL_17;
          }
          if ( (*(_DWORD *)(v9 + 120) & 0x400000) != 0 )
            _InterlockedAnd(*(volatile signed __int32 **)(v9 + 968), 0xFFFBFFFF);
          v23 = *(_QWORD **)(v9 + 216);
          v24 = *(_QWORD **)(v9 + 224);
          if ( v23[1] != v9 + 216 || *v24 != v9 + 216 )
LABEL_75:
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          if ( v24 == v23 )
            *(_DWORD *)(v3 + 8) ^= 1 << v38;
          --*(_DWORD *)(v3 + 672);
          *(_QWORD *)(v3 + 680) -= *(unsigned int *)(v9 + 1648);
          *(_DWORD *)(v9 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)v25 + 32) <= 1u )
          {
            v36 = *(_DWORD *)(v26 + 24) - 1;
            *(_DWORD *)(v26 + 24) = v36;
            if ( !v36 )
              sub_140418E4C(v25);
          }
        }
        if ( v9 )
        {
          if ( v38 == v39 )
            _bittestandset((signed __int32 *)(a2 + 32476), v39);
          goto LABEL_36;
        }
        v12 = v39;
        v11 = v38;
      }
    }
    if ( v12 >= a1 )
    {
      a3 = *(_QWORD *)(a2 + 16 * (v12 + 2036LL));
      v9 = a3 - 216;
      if ( (*(_DWORD *)(a3 - 96) & 0x400000) != 0 )
      {
        _InterlockedAnd(*(volatile signed __int32 **)(a3 + 752), 0xFFFBFFFF);
        v12 = v39;
        v11 = v38;
      }
      v29 = *(_QWORD **)a3;
      v30 = *(_QWORD **)(a3 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a3 + 8LL) != a3 || *v30 != a3 )
        goto LABEL_75;
      *v30 = v29;
      v29[1] = v30;
      if ( v30 == v29 )
        *(_DWORD *)(a2 + 32472) ^= 1 << v12;
      --*(_DWORD *)(a2 + 33140);
      *(_QWORD *)(a2 + 33144) -= *(unsigned int *)(a3 + 1432);
      if ( v12 == v11 )
        _bittestandreset((signed __int32 *)(a2 + 32476), v12);
    }
    if ( !v9 )
      return v9;
LABEL_36:
    v27 = *(_QWORD *)(v9 + 104);
    if ( !v27 )
      return v9;
    v28 = *(unsigned int *)(a2 + 216) + v27;
    if ( !v28 || !(unsigned int)sub_1402103E0(v9, v28, a3, 1, 0LL) )
      return v9;
    sub_140210988(a2, v28, v9, 0);
  }
}
