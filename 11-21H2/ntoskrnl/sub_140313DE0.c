/*
 * XREFs of sub_140313DE0 @ 0x140313DE0
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_140246CCC @ 0x140246CCC (sub_140246CCC.c)
 *     sub_1402482BC @ 0x1402482BC (sub_1402482BC.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140313DE0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v10; // rdi
  unsigned int v13; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 result; // rax
  ULONG v20; // r14d
  int v21; // esi
  unsigned int v22; // eax
  __int64 v23; // rsi
  ULONG v24; // r11d
  ULONG SizeOfBitMap; // r9d
  unsigned __int64 *v26; // r14
  unsigned __int64 v27; // rdx
  ULONG v28; // r13d
  ULONG v29; // r12d
  ULONG *v30; // r10
  ULONG *v31; // r8
  ULONG *v32; // r8
  ULONG v33; // ecx
  __int64 v34; // rcx
  unsigned __int64 v35; // r15
  unsigned int v36; // r13d
  __int16 v37; // dx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // r14
  char v54; // al
  __int64 v55; // rax
  char v56; // cl
  unsigned int v57; // edx
  unsigned int v58; // eax
  __int64 v59; // r14
  signed __int64 v60; // rax
  char v61; // al
  __int64 v62; // rbx
  __int64 v63; // r9
  bool v64; // zf
  ULONG v65; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v66; // [rsp+48h] [rbp-B8h]
  __int64 v67; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h]
  ULONG v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  unsigned int v73; // [rsp+80h] [rbp-80h]
  int v74; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  unsigned __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-48h]
  __int128 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  __int128 v87; // [rsp+110h] [rbp+10h]
  _RTL_BITMAP BitMapHeader; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v89[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]

  v10 = *(_QWORD *)(a1 + 168);
  v76 = a8;
  v79 = *(_QWORD *)(a1 + 232);
  v70 = a1;
  BitMapHeader.Buffer = (PULONG)v89;
  v72 = a4;
  v71 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v89, 0, sizeof(v89));
  v90 = 0LL;
  v91 = 0;
  v81 = v10;
  RtlSetAllBits(&BitMapHeader);
  v78 = 0LL;
  v13 = 0;
  for ( i = a2; i <= a3; i += 8LL )
  {
    if ( sub_140317A10(i) == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)i >> 3) & 0x1FF);
      ++v13;
    }
  }
  v15 = v13;
  if ( v13 > a5 )
    v15 = a5;
  if ( a6 == -1 )
  {
    v67 = 0LL;
    v16 = 0LL;
  }
  else
  {
    sub_140313CA0(48 * a6 - 0x220000000000LL, 0x3FFFFFFFFFLL, 0);
    v67 = 48 * a6 - 0x220000000000LL;
    v16 = 1LL;
  }
  v68 = v16;
  if ( v16 == v15 )
  {
    v18 = v76;
  }
  else
  {
    v17 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C50780 && (v10 & 0x10) == 0 )
        v17 = v10 & ~qword_140C50780;
      v78 = 48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v17 = *(_QWORD *)(v78 + 16);
    }
    v18 = v76;
    sub_14033E280((unsigned int)&v67, v15, v72, v76, a9, v70, v17, a10);
    v16 = v68;
  }
  if ( v16 == v13 )
    goto LABEL_26;
  if ( v16 )
  {
    v20 = ((unsigned int)v79 >> 3) & 0x1FF;
    v21 = v13 - sub_140246CCC(&BitMapHeader, v20, v13 - (unsigned int)v16);
    if ( v16 != v21 )
      sub_1402482BC(&BitMapHeader, v20, v21 - v16);
LABEL_26:
    v75 = v16;
    v22 = sub_14033D7D0(a7);
    v23 = v70;
    v24 = 0;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v73 = v22;
    v26 = (unsigned __int64 *)(v70 + 320);
    if ( !BitMapHeader.SizeOfBitMap )
    {
LABEL_119:
      result = v75;
      *(_DWORD *)(v23 + 184) = (unsigned int)(((__int64)v26 - v23 - 320) >> 3) << 12;
      return result;
    }
    v27 = v71 & 0xFFFFFFFFFFFFF000uLL;
    v71 &= 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v65 = v24;
      v28 = v24;
      if ( SizeOfBitMap <= v24 )
      {
        v29 = 0;
        goto LABEL_52;
      }
      v30 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v31 = &BitMapHeader.Buffer[(unsigned __int64)v24 >> 5];
      if ( v31 != v30 && (*v31 | *((_DWORD *)qword_140015FA0 + (v24 & 0x1F))) == 0xFFFFFFFF )
      {
        ++v31;
        v28 = v24 - (v24 & 0x1F) + 32;
        v65 = v28;
        if ( v31 < v30 )
        {
          do
          {
            if ( *v31 != -1 )
              break;
            ++v31;
            v28 += 32;
          }
          while ( v31 < v30 );
          v65 = v28;
        }
      }
      if ( v28 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v28) )
            break;
          v65 = ++v28;
        }
        while ( v28 < BitMapHeader.SizeOfBitMap );
      }
      v29 = 0;
      if ( v31 == v30 )
        goto LABEL_47;
      if ( (~*((_DWORD *)qword_140015FA0 + (v28 & 0x1F)) & *v31) != 0 )
        goto LABEL_46;
      v29 = 32 - (v28 & 0x1F);
      if ( v29 != -1 )
        break;
LABEL_61:
      v16 = v68;
LABEL_51:
      v27 = v71;
LABEL_52:
      v69 = v29;
      if ( v24 )
      {
        if ( v28 != v24 )
        {
          v34 = v28 - v24;
          do
          {
            *v26++ = qword_140C53288;
            --v34;
          }
          while ( v34 );
        }
        *(_DWORD *)(v23 + 192) |= 0x20000u;
      }
      v35 = v27 + 8LL * v28;
      RtlSetBits(&BitMapHeader, v28, v29);
      if ( v29 )
      {
        v36 = v73;
        v37 = v10;
        v38 = v23 + 32;
        v39 = v37 & 0x400;
        v40 = v29;
        v41 = (_QWORD *)v76;
        v72 = v40;
        v80 = (unsigned int)v39;
        while ( 1 )
        {
          v42 = v67;
          v43 = *(_QWORD *)(v67 + 24) & 0xFFFFFFFFFFLL;
          if ( v43 == 0x3FFFFFFFFFLL )
            v67 = 0LL;
          else
            v67 = 48 * v43 - 0x220000000000LL;
          v68 = v16 - 1;
          v44 = 0xAAAAAAAAAAAAAAABuLL * ((v42 + 0x220000000000LL) >> 4);
          *v26 = v44;
          v66 = v26 + 1;
          if ( v39 )
            v45 = sub_140317A10(v35);
          else
            v45 = *(_QWORD *)(v78 + 16);
          *(_QWORD *)(v42 + 16) = v45;
          if ( v41 )
            sub_140232E08(v41);
          v46 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v47 = 0xFFFFF6FB7DBED000uLL;
          v48 = *(_QWORD *)v46;
          v49 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v46 >= 0xFFFFF6FB7DBED000uLL
            && v46 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)sub_140229550()
            && (v48 & 1) != 0
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v50 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 8 * ((v46 >> 3) & 0x1FF));
              v46 = v48 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v46 = v48;
              v48 = v46;
              if ( (v51 & 0x42) != 0 )
                v48 = v46 | 0x42;
            }
          }
          v77 = v48;
          if ( (unsigned __int64)&v77 >= v47
            && (unsigned __int64)&v77 <= v49
            && (unsigned int)sub_140229550()
            && (v48 & 1) != 0
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v46 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v46 )
            {
              v52 = *(_QWORD *)(v46 + 8 * (((unsigned __int64)&v77 >> 3) & 0x1FF));
              v46 = v48 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v46 = v48;
              v48 = v46;
              if ( (v52 & 0x42) != 0 )
                v48 = v46 | 0x42;
            }
          }
          v53 = v48 >> 12;
          v74 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v74, v46, v49, v47);
            while ( *(__int64 *)(v42 + 24) < 0 );
          }
          v54 = *(_BYTE *)(v42 + 34) | 0x20;
          *(_QWORD *)(v42 + 24) &= 0xFFFFFF0000000000uLL;
          *(_QWORD *)(v42 + 40) |= 0x8000000000000000uLL;
          *(_WORD *)(v42 + 32) = 1;
          *(_BYTE *)(v42 + 34) = v54;
          v55 = v70;
          *(_QWORD *)v42 = v38;
          v56 = *(_BYTE *)(v42 + 35) & 0xF8;
          LODWORD(v55) = *(_DWORD *)(v55 + 192);
          v57 = (unsigned int)v55 >> 12;
          v58 = (unsigned int)v55 >> 9;
          v84 = 0LL;
          if ( v35 == v79 )
            LOBYTE(v57) = v58;
          v59 = v53 & 0xFFFFFFFFFFLL;
          *(_BYTE *)(v42 + 35) = v56 | v57 & 7;
          *((_QWORD *)&v84 + 1) = *(_QWORD *)(v42 + 40);
          v82 = 0LL;
          v83 = 0LL;
          v85 = 0LL;
          v86 = 0LL;
          v87 = 0LL;
          v60 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v42 + 40),
                  v59 | *((_QWORD *)&v84 + 1) & 0xFFFFFF0000000000uLL,
                  *((signed __int64 *)&v84 + 1));
          for ( *((_QWORD *)&v87 + 1) = v60; *((_QWORD *)&v84 + 1) != v60; *((_QWORD *)&v87 + 1) = v60 )
          {
            *((_QWORD *)&v84 + 1) = v60;
            v60 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v42 + 40),
                    v59 | v60 & 0xFFFFFF0000000000uLL,
                    v60);
          }
          v61 = *(_BYTE *)(v42 + 34) & 0xFA;
          *(_QWORD *)(v42 + 8) = v35;
          *(_BYTE *)(v42 + 34) = v61 | 2;
          if ( *(unsigned __int8 *)(v42 + 34) >> 6 != v36 )
            sub_140267E78(v42, v36, 1);
          *(_QWORD *)(v42 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v39 = v80;
          if ( !v80 )
            goto LABEL_115;
          v62 = 32 * (a7 & 0x1F | ((v44 & 0xFFFFFFFFFFLL) << 7) | 0x40);
          if ( qword_140C50780 )
          {
            if ( (qword_140C50780 & v62) != 0 )
              v62 |= 0x10uLL;
            else
              v62 |= qword_140C50780;
          }
          if ( v35 >= 0xFFFFF6FB7DBED000uLL && v35 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v62 & 1) != 0 )
                v62 |= v63;
              *(_QWORD *)v35 = v62;
              sub_1402294F0(v35, v62);
              v39 = v80;
              goto LABEL_115;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v62 & 1) != 0 )
              v62 |= v63;
          }
          *(_QWORD *)v35 = v62;
LABEL_115:
          v16 = v68;
          v35 += 8LL;
          v64 = v72-- == 1;
          v26 = v66;
          if ( v64 )
          {
            LOWORD(v10) = v81;
            v29 = v69;
            v28 = v65;
            v23 = v70;
            break;
          }
        }
      }
      if ( v16 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v24 = v29 + v28;
        v27 = v71;
        if ( v29 + v28 != BitMapHeader.SizeOfBitMap )
          continue;
      }
      goto LABEL_119;
    }
    v32 = v31 + 1;
    while ( v32 < v30 )
    {
      if ( *v32 )
        break;
      ++v32;
      v29 += 32;
      if ( v29 == -1 )
        goto LABEL_61;
    }
LABEL_46:
    v16 = v68;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_47:
    v33 = v29 + v28;
    if ( v29 + v28 < SizeOfBitMap )
    {
      do
      {
        if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v33) )
          break;
        if ( v29 == -1 )
          break;
        ++v33;
        ++v29;
      }
      while ( v33 < BitMapHeader.SizeOfBitMap );
    }
    goto LABEL_51;
  }
  if ( v18 )
  {
    if ( !*(_QWORD *)(a9 + 120) )
      *(_BYTE *)(v18 + 1) = 2;
  }
  return 0LL;
}
