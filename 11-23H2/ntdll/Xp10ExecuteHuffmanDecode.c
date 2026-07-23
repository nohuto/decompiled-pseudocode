/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x18011DBB4
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x18011BC10 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x18011F404 (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ScatteredCopyFromPrevious @ 0x180120150 (Xp10ScatteredCopyFromPrevious.c)
 *     Xp10ScatteredNextBuffer @ 0x1801201A8 (Xp10ScatteredNextBuffer.c)
 *     Xp10ScatteredReadBytes @ 0x1801201FC (Xp10ScatteredReadBytes.c)
 */

unsigned __int64 __fastcall Xp10ExecuteHuffmanDecode(unsigned __int16 **a1, __int64 a2, _QWORD *a3)
{
  __int16 v6; // r9
  int v7; // ecx
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r13d
  int v12; // edi
  unsigned __int64 result; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  __int64 v17; // r11
  __int64 v18; // r15
  unsigned int v19; // edi
  __int64 v20; // rsi
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  __int16 v25; // r15
  unsigned int v26; // edi
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // ecx
  unsigned __int16 v36; // r15
  __int64 v37; // rdx
  unsigned int v38; // edi
  __int64 v39; // r13
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // rax
  __int16 v44; // si
  unsigned __int64 v45; // r9
  unsigned int v46; // edi
  unsigned int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // edi
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // edx
  int v55; // ecx
  __int16 v56; // si
  int v57; // edx
  unsigned int v58; // esi
  unsigned int v59; // edi
  unsigned int v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // r10d
  int v64; // esi
  unsigned int v65; // esi
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // edi
  unsigned int v69; // eax
  unsigned int v70; // r15d
  unsigned int v71; // edi
  unsigned int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // edx
  int v76; // eax
  unsigned int v77; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v79; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v80; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v81; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v82; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v83; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v84; // [rsp+5Ch] [rbp-24h]
  unsigned int v85; // [rsp+60h] [rbp-20h] BYREF
  __int64 v86; // [rsp+68h] [rbp-18h]
  __int64 v87; // [rsp+70h] [rbp-10h]
  unsigned int v88; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v89; // [rsp+D8h] [rbp+58h] BYREF

  v6 = **a1;
  v7 = v6 & 0x1F;
  v8 = (unsigned __int8)v6 >> 5;
  v9 = (1 << v7) - v8 - 246;
  _BitScanReverse((unsigned int *)&v10, v9);
  v11 = 16 * (v7 + 20);
  v12 = v9 & ((1 << v7) - v8 - 247);
  v84 = v11;
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v11, (_DWORD)a3, v8, a2, (__int64)(a1 + 587));
  if ( (result & 0x80000000) == 0LL )
  {
    v16 = v10 + 1;
    if ( !v12 )
      v16 = v10;
    result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v16 + 232, v14, v15, a2, (__int64)(a1 + 2635));
    v17 = 0LL;
    if ( (result & 0x80000000) == 0LL )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          result = *(_QWORD *)a2;
          if ( !*(_QWORD *)a2 )
            return result;
          v18 = v87;
          v19 = 12;
          v20 = v87;
          if ( result < 0xC )
            v19 = *(_DWORD *)a2;
          if ( *(_DWORD *)(a2 + 16) < v19 )
          {
            v21 = Xp10ScatteredReadBytes(a2 + 24, &v88, 4LL);
            v22 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v88 << v22;
            v23 = v22 + 8 * v21;
            *(_DWORD *)(a2 + 16) = v23;
            if ( v23 < v19 )
              LOBYTE(v19) = v23;
            v17 = 0LL;
          }
          v24 = *(_QWORD *)a2;
          v25 = *(_WORD *)(v18 + 2LL * (*(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v19) - 1)));
          v26 = v25 & 0xF;
          if ( *(_QWORD *)a2 != v17 && (v25 & 0xF) != 0 )
          {
            if ( (v25 & 0xFu) > v24 )
              v26 = *(_QWORD *)a2;
            v27 = *(_DWORD *)(a2 + 16);
            if ( v27 < v26 )
            {
              v28 = Xp10ScatteredReadBytes(a2 + 24, &v89, 4LL);
              v29 = v89;
LABEL_33:
              v35 = *(_DWORD *)(a2 + 16);
              v17 = 0LL;
              *(_QWORD *)(a2 + 8) |= v29 << v35;
              v27 = v35 + 8 * v28;
              *(_DWORD *)(a2 + 16) = v27;
              if ( v27 < v26 )
                v26 = v27;
            }
            goto LABEL_35;
          }
          while ( v25 < 0 )
          {
            v30 = 6;
            if ( v24 )
            {
              if ( v24 < 6 )
                v30 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v30 )
              {
                v31 = Xp10ScatteredReadBytes(a2 + 24, &v77, 4LL);
                v32 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v77 << v32;
                v33 = v32 + 8 * v31;
                *(_DWORD *)(a2 + 16) = v33;
                if ( v33 < v30 )
                  LOBYTE(v30) = v32 + 8 * v31;
                v17 = 0LL;
              }
              v34 = *(_DWORD *)(a2 + 8) & ((1LL << v30) - 1);
            }
            else
            {
              v34 = v17;
            }
            v24 = *(_QWORD *)a2;
            v20 += 2 * (v25 & 0xFFFFFFFFFFFFFFF0uLL);
            v25 = *(_WORD *)(v20 + 2LL * v34);
            v26 = v25 & 0xF;
            if ( *(_QWORD *)a2 != v17 && (*(_WORD *)(v20 + 2LL * v34) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v20 + 2LL * v34) & 0xFu) > v24 )
                v26 = *(_QWORD *)a2;
              v27 = *(_DWORD *)(a2 + 16);
              if ( v27 < v26 )
              {
                v28 = Xp10ScatteredReadBytes(a2 + 24, &v78, 4LL);
                v29 = v78;
                goto LABEL_33;
              }
LABEL_35:
              *(_QWORD *)(a2 + 8) >>= v26;
              *(_QWORD *)a2 -= v26;
              v24 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v27 - v26;
              continue;
            }
          }
          v36 = (unsigned __int16)v25 >> 4;
          if ( v36 >= 0x100u )
            break;
          while ( *a3 == a3[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(a3) )
              return 3221226050LL;
          }
          *(_BYTE *)(*a3)++ = v36;
        }
        if ( (v36 & 0xF) == 0xF )
        {
          v37 = v86;
          v38 = 12;
          v39 = v86;
          if ( v24 )
          {
            if ( v24 < 0xC )
              v38 = *(_DWORD *)a2;
            if ( *(_DWORD *)(a2 + 16) < v38 )
            {
              v40 = Xp10ScatteredReadBytes(a2 + 24, &v79, 4LL);
              v41 = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v79 << v41;
              v42 = v41 + 8 * v40;
              *(_DWORD *)(a2 + 16) = v42;
              if ( v42 < v38 )
                LOBYTE(v38) = v41 + 8 * v40;
              v37 = v86;
              v17 = 0LL;
            }
            v24 = *(_QWORD *)a2;
            v43 = *(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v38) - 1);
          }
          else
          {
            v43 = (unsigned int)v17;
          }
          v44 = *(_WORD *)(v37 + 2 * v43);
          v45 = v24;
          v46 = v44 & 0xF;
          if ( v24 && (*(_WORD *)(v37 + 2 * v43) & 0xF) != 0 )
          {
            if ( (*(_WORD *)(v37 + 2 * v43) & 0xFu) > v24 )
              v46 = *(_DWORD *)a2;
            v47 = *(_DWORD *)(a2 + 16);
            if ( v47 < v46 )
            {
              v48 = Xp10ScatteredReadBytes(a2 + 24, &v80, 4LL);
              v49 = v80;
LABEL_72:
              v55 = *(_DWORD *)(a2 + 16);
              v17 = 0LL;
              *(_QWORD *)(a2 + 8) |= v49 << v55;
              v47 = v55 + 8 * v48;
              *(_DWORD *)(a2 + 16) = v47;
              if ( v47 < v46 )
                v46 = v47;
            }
            goto LABEL_74;
          }
          while ( v44 < 0 )
          {
            v50 = 6;
            if ( v45 )
            {
              if ( v45 < 6 )
                v50 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v50 )
              {
                v51 = Xp10ScatteredReadBytes(a2 + 24, &v81, 4LL);
                v52 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v81 << v52;
                v53 = v52 + 8 * v51;
                *(_DWORD *)(a2 + 16) = v53;
                if ( v53 < v50 )
                  LOBYTE(v50) = v52 + 8 * v51;
                v17 = 0LL;
              }
              v54 = *(_DWORD *)(a2 + 8) & ((1LL << v50) - 1);
            }
            else
            {
              v54 = v17;
            }
            v45 = *(_QWORD *)a2;
            v39 += 2 * (v44 & 0xFFFFFFFFFFFFFFF0uLL);
            v44 = *(_WORD *)(v39 + 2LL * v54);
            v46 = v44 & 0xF;
            if ( *(_QWORD *)a2 != v17 && (*(_WORD *)(v39 + 2LL * v54) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v39 + 2LL * v54) & 0xFu) > v45 )
                v46 = *(_QWORD *)a2;
              v47 = *(_DWORD *)(a2 + 16);
              if ( v47 < v46 )
              {
                v48 = Xp10ScatteredReadBytes(a2 + 24, &v82, 4LL);
                v49 = v82;
                goto LABEL_72;
              }
LABEL_74:
              *(_QWORD *)a2 -= v46;
              *(_QWORD *)(a2 + 8) >>= v46;
              v45 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v47 - v46;
              continue;
            }
          }
          v56 = (unsigned __int16)v44 >> 4;
          v57 = (unsigned __int8)v56;
          if ( (unsigned __int8)v56 <= 0xE8u )
          {
            v64 = ((**a1 >> 5) & 7) + 15;
          }
          else
          {
            v58 = (unsigned __int8)v56 - 232;
            v59 = v57 - 232;
            if ( v45 && v58 )
            {
              if ( v58 > v45 )
                v59 = *(_DWORD *)a2;
              v60 = *(_DWORD *)(a2 + 16);
              if ( v60 < v59 )
              {
                v61 = Xp10ScatteredReadBytes(a2 + 24, &v83, 4LL);
                v62 = *(_DWORD *)(a2 + 16);
                LODWORD(v17) = 0;
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v83 << v62;
                v60 = v62 + 8 * v61;
                *(_DWORD *)(a2 + 16) = v60;
                if ( v60 < v59 )
                  v59 = v60;
              }
              v63 = *(_DWORD *)(a2 + 8) & ((1LL << v59) - 1);
              *(_QWORD *)a2 -= v59;
              *(_QWORD *)(a2 + 8) >>= v59;
              v45 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v60 - v59;
            }
            else
            {
              v63 = v17;
              v59 = v17;
            }
            if ( v59 < v58 )
              return 3221226050LL;
            v57 = 1 << v58;
            v64 = v63 + ((**a1 >> 5) & 7) + 246;
          }
          v11 = v84;
          v65 = v57 + v64;
          v66 = v36;
        }
        else
        {
          v45 = v24;
          v66 = v36;
          v65 = (v36 & 0xF) + ((**a1 >> 5) & 7);
        }
        if ( v36 >= 0x140u )
          break;
        v67 = (int)(v66 - 256) / 16;
        v68 = *((_DWORD *)a1 + v67 + 2);
        if ( v67 )
        {
          if ( v67 < 3 )
          {
            if ( v67 >= 2 )
LABEL_111:
              *((_DWORD *)a1 + 4) = *((_DWORD *)a1 + 3);
            v76 = *((_DWORD *)a1 + 2);
            *((_DWORD *)a1 + 2) = v68;
            *((_DWORD *)a1 + 3) = v76;
            goto LABEL_113;
          }
LABEL_110:
          *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 4);
          goto LABEL_111;
        }
LABEL_113:
        if ( !v68 )
          return 3221226050LL;
        while ( v65 > v68 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v68, v68) != v68 )
            return 3221226050LL;
          v65 -= v68;
        }
        if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v68, v65) != v65 )
          return 3221226050LL;
        v17 = 0LL;
      }
      if ( v66 >= v11 )
        return 3221226050LL;
      if ( v36 <= 0x14Fu )
      {
        v68 = 1;
      }
      else
      {
        v69 = (int)(v66 - 320) / 16;
        v70 = v69;
        v71 = v69;
        if ( v45 && v69 )
        {
          if ( v69 > v45 )
            v71 = *(_DWORD *)a2;
          v72 = *(_DWORD *)(a2 + 16);
          if ( v72 < v71 )
          {
            v73 = Xp10ScatteredReadBytes(a2 + 24, &v85, 4LL);
            v74 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v85 << v74;
            v72 = v74 + 8 * v73;
            *(_DWORD *)(a2 + 16) = v72;
            if ( v72 < v71 )
              v71 = v72;
          }
          v75 = *(_DWORD *)(a2 + 8) & ((1LL << v71) - 1);
          *(_QWORD *)(a2 + 8) >>= v71;
          *(_QWORD *)a2 -= v71;
          *(_DWORD *)(a2 + 16) = v72 - v71;
        }
        else
        {
          v75 = v17;
          v71 = v17;
        }
        if ( v71 < v70 )
          return 3221226050LL;
        v68 = v75 + (1 << v70);
      }
      goto LABEL_110;
    }
  }
  return result;
}
