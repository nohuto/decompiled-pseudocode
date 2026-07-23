/*
 * XREFs of sub_14026FB78 @ 0x14026FB78
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140250D70 @ 0x140250D70 (sub_140250D70.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14026FB78(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  unsigned int v6; // r13d
  ULONG v7; // r14d
  int v8; // edi
  char *v9; // rsi
  ULONG v10; // r8d
  ULONG v11; // eax
  unsigned int v12; // r10d
  ULONG v13; // ecx
  char *v14; // rbx
  __int64 j; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  signed __int32 *v19; // rdx
  int v20; // r8d
  int v21; // r9d
  unsigned int m; // eax
  unsigned int v23; // edi
  _QWORD *v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rax
  char v27; // r15
  __int64 v28; // rbx
  int v29; // r12d
  __int64 v30; // rdi
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  unsigned int v33; // edi
  ULONG v34; // r9d
  char *v35; // r15
  unsigned __int64 v36; // r13
  ULONG v37; // r8d
  ULONG v38; // eax
  unsigned int v39; // r11d
  ULONG v40; // ecx
  char *v41; // rbx
  __int64 k; // rdx
  unsigned __int64 v43; // rax
  unsigned int v44; // ebx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  signed __int32 *v48; // rdx
  ULONG SizeOfBitMap; // eax
  ULONG v50; // eax
  int v51; // [rsp+20h] [rbp-89h]
  int v52; // [rsp+24h] [rbp-85h]
  __int64 v53; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-71h] BYREF
  _RTL_BITMAP v55; // [rsp+40h] [rbp-69h] BYREF
  char *i; // [rsp+50h] [rbp-59h]
  unsigned __int64 v57; // [rsp+58h] [rbp-51h]
  __int64 v58; // [rsp+60h] [rbp-49h]
  signed __int32 v59[16]; // [rsp+70h] [rbp-39h] BYREF

  v54 = a2;
  v58 = a3;
  v4 = a1;
  v57 = a1;
  *(_QWORD *)&v55.SizeOfBitMap = 512LL;
  v5 = a4;
  v53 = a4;
  v55.Buffer = (PULONG)v59;
  memset(v59, 0, sizeof(v59));
  if ( (unsigned int)sub_140250D70(v4, &v55) )
  {
    v51 = 0;
    v6 = 2;
    sub_140424FF0(v5, v4);
    v7 = 0;
    v8 = (((unsigned __int8)((unsigned __int8)&v59[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
    v9 = (char *)v59 - ((((unsigned __int8)((unsigned __int8)&v59[14] + 1) - 57) & 4) != 0LL ? 4 : 0);
    for ( i = v9; ; v9 = i )
    {
      v10 = v7 < v55.SizeOfBitMap ? v7 : 0;
      v11 = v55.SizeOfBitMap - 1;
      while ( 1 )
      {
        v12 = v8 + v11;
        v13 = v8 + v10;
        if ( v11 - v10 != -1 )
        {
          v14 = &v9[8 * ((unsigned __int64)v13 >> 6)];
          for ( j = ~*(_QWORD *)v14 | ((1LL << (v13 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v14 )
          {
            v14 += 8;
            if ( v14 > &v9[8 * ((unsigned __int64)v12 >> 6)] )
              goto LABEL_77;
          }
          _BitScanForward64(&v16, ~j);
          v17 = v16 + ((unsigned int)((v14 - v9) >> 3) << 6);
          if ( v17 <= v12 )
            break;
        }
LABEL_77:
        v17 = -1;
LABEL_81:
        if ( !v10 )
          goto LABEL_12;
        SizeOfBitMap = v7 + 1;
        if ( v7 + 1 > v55.SizeOfBitMap )
          SizeOfBitMap = v55.SizeOfBitMap;
        v11 = SizeOfBitMap - 1;
        v10 = 0;
      }
      if ( v17 == -1 )
        goto LABEL_81;
      v17 -= v8;
LABEL_12:
      if ( v17 < v7 || v17 == -1 )
      {
LABEL_44:
        v28 = 48 * v54 - 0x220000000000LL;
        v29 = v51;
        v30 = 48 * v58 - 0x220000000000LL;
        if ( v51 )
        {
          sub_140239060(48 * v54 - 0x220000000000LL);
        }
        else
        {
          LODWORD(v53) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v53);
            while ( *(__int64 *)(v28 + 24) < 0 );
          }
        }
        if ( *(_WORD *)(v28 + 32) != 2 )
        {
          ++dword_140C29D70;
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_93;
        }
        v31 = *(_QWORD *)(v28 + 24);
        if ( (unsigned __int16)v31 != (unsigned __int64)(unsigned int)(v51 + 1)
          || (v32 = v31 & 0x3FFFFFFFFFFFFFFFLL, v32 >= 0x10000) )
        {
          ++dword_140C29D6C;
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_93;
        }
        sub_140239060(v30);
        *(_QWORD *)(v30 + 24) = v32 | *(_QWORD *)(v30 + 24) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v33 = 1;
LABEL_50:
        v52 = (((unsigned __int8)((unsigned __int8)&v59[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
        v34 = 0;
        v35 = i;
        v36 = v57;
LABEL_51:
        if ( !v29 )
          return v33;
        v37 = v34 < v55.SizeOfBitMap ? v34 : 0;
        v38 = v55.SizeOfBitMap - 1;
        while ( 1 )
        {
          v39 = v38 + v52;
          v40 = v37 + v52;
          if ( v38 - v37 == -1 )
            goto LABEL_69;
          v41 = &v35[8 * ((unsigned __int64)v40 >> 6)];
          for ( k = ~*(_QWORD *)v41 | ((1LL << (v40 & 0x3F)) - 1); k == -1; k = ~*(_QWORD *)v41 )
          {
            v41 += 8;
            if ( v41 > &v35[8 * ((unsigned __int64)v39 >> 6)] )
              goto LABEL_69;
          }
          _BitScanForward64(&v43, ~k);
          v44 = v43 + ((unsigned int)((v41 - v35) >> 3) << 6);
          if ( v44 > v39 )
          {
LABEL_69:
            v44 = -1;
          }
          else if ( v44 != -1 )
          {
            v44 -= v52;
LABEL_61:
            v45 = sub_140317A10(v36 + 8LL * v44);
            v54 = v45;
            if ( (v45 & 1) != 0 )
            {
              v45 = sub_140317A10(&v54);
            }
            else if ( qword_140C50780 )
            {
              if ( (v45 & 0x10) != 0 )
                v45 &= ~0x10uLL;
              else
                v45 &= ~qword_140C50780;
            }
            v46 = 48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( v33 )
              sub_14033C3E0(v46, v58);
            --v29;
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v34 = v44 + 1;
            goto LABEL_51;
          }
          if ( !v37 )
            goto LABEL_61;
          v50 = v34 + 1;
          if ( v34 + 1 > v55.SizeOfBitMap )
            v50 = v55.SizeOfBitMap;
          v38 = v50 - 1;
          v37 = 0;
        }
      }
      if ( v17 >= 0x200 )
      {
        v20 = 0;
LABEL_79:
        v18 = 512;
        goto LABEL_32;
      }
      v18 = v17;
      v19 = &v59[(unsigned __int64)v17 >> 5];
      if ( v19 != &v59[15] && (*v19 | *((_DWORD *)qword_140015FA0 + (v17 & 0x1F))) == 0xFFFFFFFF )
      {
        v18 = v17 - (v17 & 0x1F) + 32;
        for ( ++v19; v19 < &v59[15] && *v19 == -1; ++v19 )
          v18 += 32;
        goto LABEL_21;
      }
      do
      {
        if ( !_bittest(v59, v18) )
          break;
        ++v18;
LABEL_21:
        ;
      }
      while ( v18 < 0x200 );
      v20 = 0;
      if ( v19 == &v59[15] || (v21 = v18 & 0x1F, (*v19 & ~*((_DWORD *)qword_140015FA0 + (v18 & 0x1F))) != 0) )
      {
LABEL_26:
        for ( m = v20 + v18; m < 0x200 && !_bittest(v59, m) && v20 != -1; ++m )
          ++v20;
      }
      else
      {
        v20 = 32 - v21;
        if ( v21 != 33 )
        {
          v48 = v19 + 1;
          while ( v48 < &v59[15] && !*v48 )
          {
            ++v48;
            v20 += 32;
            if ( v20 == -1 )
              goto LABEL_31;
          }
          goto LABEL_26;
        }
      }
LABEL_31:
      if ( !v20 )
        goto LABEL_79;
LABEL_32:
      v23 = v18 - v17;
      v7 = v23 + v20 + v17;
      v24 = (_QWORD *)(v4 + 8LL * v17);
      if ( v23 )
      {
        v25 = v5 - (_QWORD)v24 + 8LL * v17;
        do
        {
          v26 = sub_1402738F0(v24, v6);
          if ( v26 )
          {
            ++v51;
            v6 |= 1u;
            v27 = *(_BYTE *)(v26 + 34);
            if ( (v27 & 8) != 0 )
            {
              ++dword_140C29D68;
LABEL_86:
              v29 = v51;
LABEL_93:
              v33 = 0;
              goto LABEL_50;
            }
            if ( (sub_140317A10(v24) & 1) == 0 && (v27 & 0x20) != 0 )
            {
              ++dword_140C29D64;
              goto LABEL_86;
            }
          }
          else
          {
            _bittestandreset(v59, v17);
          }
          ++v17;
          *(_QWORD *)((char *)v24 + v25) = *v24;
          ++v24;
          --v23;
        }
        while ( v23 );
        v5 = v53;
        v4 = v57;
      }
      if ( v7 >= 0x200 )
        goto LABEL_44;
      v8 = (((unsigned __int8)((unsigned __int8)&v59[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
    }
  }
  return 0LL;
}
