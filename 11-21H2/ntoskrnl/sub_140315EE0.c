/*
 * XREFs of sub_140315EE0 @ 0x140315EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 */

__int64 __fastcall sub_140315EE0(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // rbp
  int v5; // r15d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // r13
  char v9; // bl
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  char v12; // di
  unsigned __int64 v13; // rbp
  char v14; // bl
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  __int16 v19; // r10
  __int64 v20; // rax
  __int16 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // r14
  unsigned __int64 v24; // rdx
  __int64 *v25; // r10
  __int64 v26; // r12
  __int64 v27; // r9
  __int64 *v28; // r8
  __int64 v29; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // rax
  char v36; // cl
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v42; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v43; // [rsp+28h] [rbp-40h]
  unsigned __int64 v44; // [rsp+70h] [rbp+8h] BYREF
  int v45; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v44 = *(_QWORD *)(v3 + 16);
  if ( !a3 )
  {
    v5 = 0;
    v6 = 0LL;
    v42 = *(_QWORD *)(v3 + 24);
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    do
    {
      v10 = sub_140317A10(a2);
      v46 = v10;
      v11 = v10;
      if ( (v10 & 1) != 0 )
      {
        v31 = ((unsigned __int64)sub_140317A10(&v46) >> 12) & 0xFFFFFFFFFFLL;
        if ( v31 > qword_140C50840 || (*(_QWORD *)(48 * v31 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 0LL;
        v8 = 48 * v31 - 0x220000000000LL;
        if ( *(__int64 *)(v8 + 40) >= 0 )
        {
          if ( (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != a2 )
            return 0LL;
          v45 = 0;
          v14 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v45, v32, v33, v34);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v8 + 34) & 8) != 0 )
            goto LABEL_61;
          v15 = *(_QWORD *)(v8 + 16);
          if ( (v15 & 2) != 0 )
          {
            v6 = *(_QWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( !*(_DWORD *)(v3 + 144)
            && (*(_WORD *)(v8 + 32) != 1
             || (*(_BYTE *)(v44 + 184) & 7) == 0
             && (sub_14033A410(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16) & 0xF) == 8) )
          {
            goto LABEL_61;
          }
          if ( (v46 & 0x42) == 0 && (*(_BYTE *)(v8 + 34) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v8 + 16) & 4) == 0 )
              goto LABEL_61;
            v14 = 3;
          }
          v7 = sub_14033C2A0(v8);
          v16 = *(_BYTE *)(v8 + 34) >> 6;
          if ( v16 != 1 )
          {
            if ( v16 == 2 )
            {
              v14 |= 4u;
            }
            else if ( !v16 )
            {
              v14 |= 8u;
            }
          }
          if ( *(_DWORD *)(v3 + 32) == -1 )
          {
            v44 = *(_QWORD *)(v8 + 16);
            sub_14033C3A0(&v44, 0LL);
            v18 = v44;
            if ( (v19 & 0x400) == 0 )
            {
              v18 = v44 & 0xFFFFFFFFFFFFFFF9uLL;
              v44 &= 0xFFFFFFFFFFFFFFF9uLL;
            }
            if ( v17 )
            {
              if ( v18 )
                v20 = sub_14033B6A0(v18, 0xFFFFFFFFLL);
              else
                v20 = sub_1402CCC50(0xFFFFFFFF00000000uLL);
              v18 = v20 ^ (unsigned __int16)(v20 ^ (v21 << 12)) & 0xF000;
              v44 = v18;
            }
            v46 = v18;
            *(_QWORD *)(v8 + 16) = v18;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v22 = *(unsigned int *)(v3 + 32);
          v9 = v14 & 0xFE;
          v23 = *(_QWORD **)v3;
          if ( (_DWORD)v22 != -1 )
          {
            v43 = (unsigned __int64 *)(16 * v22 + v3 + 40);
            if ( (unsigned int)v22 >= 5 || !*(_DWORD *)(16 * v22 + v3 + 40 + 8) )
              goto LABEL_38;
            sub_14033B190(v42, a2, 128LL);
            v38 = *v43;
            if ( qword_140C50780 && (v38 & 0x10) == 0 )
              v38 &= ~qword_140C50780;
            v39 = sub_14033B6A0(*v43, HIDWORD(v38) + 1);
            *(_QWORD *)v40 = v39;
            if ( (*(_DWORD *)(v40 + 8))-- == 1 )
              ++*(_DWORD *)(v3 + 32);
            v9 |= 0x10u;
          }
        }
        else
        {
          v23 = *(_QWORD **)(v3 + 8);
          if ( !v23 )
            return 0LL;
        }
        v24 = v23[2];
        if ( v24 < v23[1] )
        {
          v25 = (__int64 *)(*v23 + 16 * v24);
          v26 = (__int64)(a2 << 25) >> 16;
          if ( !v24 || (v27 = *(v25 - 1), v28 = v25 - 1, v27 + *(v25 - 2) != v26) )
          {
            v27 = 0LL;
            v23[2] = v24 + 1;
            v28 = v25 + 1;
            *v25 = v26;
            v25[1] = 0LL;
          }
          *v28 = v27 + 4096;
          ++v23[3];
          if ( (v9 & 2) != 0 )
            ++*(_QWORD *)(v3 + 136);
          if ( (v9 & 4) != 0 )
          {
            ++*(_QWORD *)(v3 + 120);
          }
          else if ( (v9 & 8) != 0 )
          {
            ++*(_QWORD *)(v3 + 128);
          }
        }
        goto LABEL_38;
      }
      if ( (v10 & 0x400) != 0 )
        return 0LL;
      if ( (v10 & 0x800) == 0 )
      {
        if ( (v10 & 2) == 0 )
          return 0LL;
        v12 = v10 & 0xFD;
        v46 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
        v13 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)sub_140317A80(a2) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            v5 = 1;
            if ( HIBYTE(word_140C51864) || (v12 & 1) == 0 )
              goto LABEL_8;
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 || (v12 & 1) == 0 )
          {
            goto LABEL_8;
          }
          v13 = v11 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
        }
LABEL_8:
        *(_QWORD *)a2 = v13;
        v6 = v11;
        if ( !v5 )
          goto LABEL_39;
        sub_1402294F0(a2, v13);
LABEL_38:
        if ( (v9 & 1) == 0 )
          goto LABEL_39;
LABEL_61:
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_39;
      }
      v35 = sub_140315D60(a2, 0LL, 0);
      v8 = v35;
    }
    while ( !v35 );
    v36 = *(_BYTE *)(v35 + 34);
    if ( (v36 & 0x28) != 0 )
      goto LABEL_61;
    v37 = *(_QWORD *)(v35 + 16);
    if ( (v37 & 2) == 0 )
      goto LABEL_61;
    v6 = *(_QWORD *)(v35 + 16);
    if ( !*(_WORD *)(v35 + 32) && (v36 & 7) == 3 )
    {
      sub_140326870(v35);
      *(_QWORD *)(v8 + 16) &= ~2uLL;
      sub_1402BF9C0(v8, 8u);
      goto LABEL_61;
    }
    *(_QWORD *)(v35 + 16) = v37 & 0xFFFFFFFFFFFFFFFDuLL;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_39:
    if ( v6 )
    {
      if ( (v6 & 4) != 0 )
        v6 &= ~4uLL;
      v29 = v42;
      sub_1402E20D0(v42, v6, 0);
    }
    else
    {
      v29 = v42;
    }
    if ( v7 )
      sub_1402E20D0(v29, v7, 0);
  }
  return 0LL;
}
