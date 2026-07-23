/*
 * XREFs of sub_14068F7C4 @ 0x14068F7C4
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140B14B1C @ 0x140B14B1C (sub_140B14B1C.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068B68C @ 0x14068B68C (sub_14068B68C.c)
 *     sub_14068CF68 @ 0x14068CF68 (sub_14068CF68.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 *     sub_14091D508 @ 0x14091D508 (sub_14091D508.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14068F7C4(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        int *a13,
        __int64 a14)
{
  __int64 v16; // r13
  __int64 v17; // rbx
  _DWORD *v18; // rsi
  int v19; // r15d
  int v20; // eax
  __int64 v22; // rdx
  char v23; // r9
  int v24; // ebx
  __int64 v25; // rax
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  int v29; // eax
  signed int v30; // ebx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // r10d
  int v37; // r11d
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a14;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xFD617CEC) != 0
    || (unsigned int)a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a12 )
    *a12 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v16 = 4LL;
  if ( (_DWORD)a4 )
  {
    v32 = 4;
    if ( (_DWORD)a4 == 1 )
      v32 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v32;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = sub_1407C9820;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = sub_1407C97C0;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  LOBYTE(a4) = (a3 & 1) == 0;
  v17 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 200) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = (unsigned __int8)a4;
      v18 = (_DWORD *)sub_14042A5E0(*(unsigned int *)(BugCheckParameter2 + 132), a2);
      if ( v18 )
      {
        if ( (((a7 << 9) - 1) & (unsigned int)v18) == 0 )
        {
          if ( a13 )
            *a13 = 825314627;
LABEL_19:
          memset(v18, 0, 0x1000uLL);
          v18[9] = -1;
          *v18 = 1718052210;
          v18[1] = 1;
          v18[2] = 1;
          v18[8] = 1;
          v18[11] = 1;
          sub_14068B68C((__int64)v18, a8);
          v18[36] = 0;
          v19 = a3 & 0x80000;
          if ( v19 )
            v18[36] = 2;
          v18[5] = 1;
          v20 = v19 != 0 ? 6 : 3;
          v18[6] = v20;
          *(_DWORD *)(BugCheckParameter2 + 220) = v20;
          v18[41] = 1836346738;
          *(_DWORD *)(BugCheckParameter2 + 172) = 1;
          *(_DWORD *)(BugCheckParameter2 + 184) = 1;
          *(_DWORD *)(BugCheckParameter2 + 176) = 1;
          *(_QWORD *)(v18 + 3) = v17;
          if ( a10 )
          {
            *((_OWORD *)v18 + 7) = *a10;
            *((_OWORD *)v18 + 8) = *a10;
          }
          if ( a11 )
            *(_OWORD *)(v18 + 37) = *a11;
          *(_QWORD *)(BugCheckParameter2 + 64) = v18;
          v18[1022] = 0;
          return 0LL;
        }
        sub_14042A5E0(v18, *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v35) = 1;
        v18 = (_DWORD *)sub_14042A5E0(4096LL, v35);
        if ( v18 )
        {
          *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
          if ( a13 )
            *a13 = 842091843;
          goto LABEL_19;
        }
        v43 = 112;
      }
      else
      {
        v43 = 96;
      }
      goto LABEL_54;
    case 4:
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v33 = a5[5];
      v34 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = sub_1406BF400;
      *(_QWORD *)(BugCheckParameter2 + 16) = sub_1406BF450;
      *(_DWORD *)(BugCheckParameter2 + 220) = v34 + (v33 << 12);
      *(_DWORD *)(BugCheckParameter2 + 280) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 216) = 1;
      if ( a13 )
        *a13 = 0;
      return 0LL;
    case 3:
      if ( (unsigned __int8)sub_14091D508(a5, a2, 2LL, a4) )
      {
        v38 = a5[5];
        v39 = a5[6];
        *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
        *(_QWORD *)(BugCheckParameter2 + 64) = a5;
        *(_DWORD *)(BugCheckParameter2 + 216) = v37;
        *(_DWORD *)(BugCheckParameter2 + 220) = v39 - 4096 + (v38 << 12);
        a5[1022] = v36;
        v40 = a5[1];
        *(_DWORD *)(BugCheckParameter2 + 172) = v40;
        *(_DWORD *)(BugCheckParameter2 + 184) = v40;
        *(_DWORD *)(BugCheckParameter2 + 176) = v40;
        v30 = sub_14068CF68(BugCheckParameter2, a5[10], 0);
        if ( v30 >= 0 )
        {
          v30 = sub_1408410FC(BugCheckParameter2);
          if ( v30 >= 0 )
          {
            if ( a13 )
              *a13 = 0;
            return 0LL;
          }
          sub_14020A890(a14, 0, 25, v30, 0xA0u);
        }
        else
        {
          sub_14020A890(a14, 0, 25, v30, 0x90u);
        }
        return (unsigned int)v30;
      }
      v43 = 128;
LABEL_66:
      v30 = -1073741492;
      goto LABEL_56;
  }
  if ( *a5 != 1718052210
    || a5[7]
    || a5[8] != 1
    || a5[5] > 1u
    || (unsigned int)(a5[6] - 3) > 3
    || a5[10] > 0x7FFFE000u
    || (unsigned int)sub_140AB41B0(a5, a2, 2LL) != a5[127] )
  {
    v43 = 176;
    goto LABEL_66;
  }
  v24 = 858869059;
  LOBYTE(v22) = v23;
  v25 = sub_14042A5E0(*(unsigned int *)(BugCheckParameter2 + 132), v22);
  *(_QWORD *)(BugCheckParameter2 + 64) = v25;
  if ( !v25 )
  {
    v43 = 192;
    goto LABEL_54;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v25) != 0 )
  {
    sub_14042A5E0(v25, *(unsigned int *)(BugCheckParameter2 + 132));
    v24 = 875646275;
    LOBYTE(v41) = 1;
    v42 = sub_14042A5E0(4096LL, v41);
    *(_QWORD *)(BugCheckParameter2 + 64) = v42;
    if ( v42 )
    {
      *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
      goto LABEL_39;
    }
    v43 = 208;
LABEL_54:
    v30 = -1073741670;
LABEL_56:
    sub_14020A890(a14, 0, 25, v30, v43);
    return (unsigned int)v30;
  }
LABEL_39:
  if ( a13 )
    *a13 = v24;
  v26 = *(_OWORD **)(BugCheckParameter2 + 64);
  v27 = a5;
  do
  {
    *v26 = *v27;
    v26[1] = v27[1];
    v26[2] = v27[2];
    v26[3] = v27[3];
    v26[4] = v27[4];
    v26[5] = v27[5];
    v26[6] = v27[6];
    v26 += 8;
    v28 = v27[7];
    v27 += 8;
    *(v26 - 1) = v28;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
  v29 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 172) = v29;
  *(_DWORD *)(BugCheckParameter2 + 184) = v29;
  *(_DWORD *)(BugCheckParameter2 + 176) = v29;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  v30 = sub_14068CF68(BugCheckParameter2, a5[10], 0);
  if ( v30 < 0 )
  {
    sub_14042A5E0(*(_QWORD *)(BugCheckParameter2 + 64), *(unsigned int *)(BugCheckParameter2 + 132));
    *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    v43 = 224;
    goto LABEL_56;
  }
  if ( (int)sub_1408410FC(BugCheckParameter2) >= 0 )
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 64);
    if ( (*(_DWORD *)(v31 + 144) & 1) != 0 && a12 )
    {
      *a12 = 1;
      v31 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v31 + 144) &= ~1u;
    sub_14068B68C(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    return 0LL;
  }
  v30 = -1073741492;
  sub_14020A890(a14, 0, 25, 0xC000014C, 0xF0u);
  sub_14042A5E0(*(_QWORD *)(BugCheckParameter2 + 64), *(unsigned int *)(BugCheckParameter2 + 132));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  return (unsigned int)v30;
}
