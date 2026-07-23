/*
 * XREFs of sub_1405370FC @ 0x1405370FC
 * Callers:
 *     sub_140537044 @ 0x140537044 (sub_140537044.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052268C @ 0x14052268C (sub_14052268C.c)
 *     sub_140537928 @ 0x140537928 (sub_140537928.c)
 *     sub_1405380DC @ 0x1405380DC (sub_1405380DC.c)
 *     sub_140538480 @ 0x140538480 (sub_140538480.c)
 *     sub_140538580 @ 0x140538580 (sub_140538580.c)
 *     sub_1405386C4 @ 0x1405386C4 (sub_1405386C4.c)
 *     sub_140B4BF38 @ 0x140B4BF38 (sub_140B4BF38.c)
 */

__int64 __fastcall sub_1405370FC(__int64 a1, __int64 a2)
{
  char v4; // r13
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  _BYTE *v16; // rax
  int v17; // r11d
  bool v18; // cf
  _DWORD *v19; // rdx
  int v20; // eax
  unsigned int v21; // r13d
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  size_t v24; // rbx
  __int16 v25; // ax
  __int64 v26; // r8
  __int64 v32; // rcx
  char v34; // [rsp+31h] [rbp-CFh]
  int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-C4h]
  unsigned int *v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-B8h]
  int Size_4; // [rsp+4Ch] [rbp-B4h]
  _QWORD *v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v43[14]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v44[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v45[24]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v46; // [rsp+230h] [rbp+130h]

  v46 = a1;
  v42 = 0LL;
  memset(v44, 0, 0x88uLL);
  memset(v45, 0, 0xB8uLL);
  v4 = 0;
  v41 = 0LL;
  v5 = 0;
  v38 = 0LL;
  v34 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)v5;
  if ( (int)sub_1403B38C8(16LL, 0LL, 2, 16LL, &v42) >= 0 )
    sub_14042A5E0(0LL, 0LL);
  v7 = sub_1403CE24C(v6, 0x18u, &v38);
  v8 = (unsigned __int64)v38;
  v5 = v7;
  if ( v7 < 0 )
    goto LABEL_57;
  v5 = sub_140538580(a1, a2 + 4, v38);
  if ( v5 < 0 )
    goto LABEL_57;
  memset(v43, 0, 0x68uLL);
  v9 = *(_QWORD *)(a2 + 8);
  v43[0] = 0x6800000001LL;
  *(_QWORD *)&v42 = sub_1403BE7F0(v9, 544LL, 0);
  if ( !(_QWORD)v42 )
  {
    v5 = -1073741670;
LABEL_57:
    if ( v8 )
    {
      sub_1405386C4(v8);
      sub_14052268C(v32, v8);
    }
    return (unsigned int)v5;
  }
  v5 = sub_1403BE4F0(v9, 0x220u);
  if ( v5 >= 0 )
  {
    v10 = *(unsigned __int16 *)(a2 + 2) - 16;
    v43[1] = 0LL;
    Size = v10;
    LODWORD(v43[2]) = v10 + 360;
    v43[7] = v44;
    v43[8] = v45;
    v44[0] = sub_140A483A0;
    v44[1] = sub_140A63CE0;
    v44[4] = sub_140537770;
    v44[5] = sub_140531660;
    v45[13] = sub_14090B300;
    v45[0] = sub_140537860;
    v45[17] = sub_140537AE0;
    HIDWORD(v43[9]) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(v43[9]) = 2;
    LODWORD(v43[12]) = 32;
    HIDWORD(v43[2]) = 4;
    v11 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
    _BitScanReverse((unsigned int *)&v10, (v11 >> 8) & 0x1F);
    v35 = v10;
    v12 = *(_QWORD *)(v42 + 16);
    v13 = 1LL << (((unsigned __int8)(v12 >> 35) & 0x1Fu) + 1);
    if ( v13 > 0x100000 )
      LODWORD(v13) = 0x100000;
    v14 = *(_BYTE *)(a1 + 37) & 3;
    LODWORD(v43[11]) = v13;
    if ( v14 == 1 && (v12 & 0x18) == 24 )
    {
      v44[14] = sub_14052FCD0;
      v15 = 68;
      HIDWORD(v43[2]) = 68;
      v44[15] = sub_140459930;
      v44[16] = sub_14052FC00;
    }
    else
    {
      v15 = HIDWORD(v43[2]);
    }
    v16 = (_BYTE *)sub_1405380DC(a2, 0LL);
    if ( v16
      && *v16 == 1
      && v16[1] == 8
      && !v16[5]
      && v16[6] == 2
      && !v16[7]
      && !*(_WORD *)(a2 + 6)
      && (v11 & 0x3F0000) < 0x2F0000 )
    {
      if ( !byte_140C4BE90 )
      {
        v15 &= ~0x100u;
        HIDWORD(v43[2]) = v15;
      }
      if ( v17 )
        v18 = (v11 & 0x800000000LL) != 0;
      else
        v18 = (v11 & 0x400000000LL) != 0;
      if ( v18 )
      {
        v4 = 1;
        v34 = 1;
      }
    }
    if ( (v12 & 1) != 0 )
    {
      v15 |= 0x800u;
      HIDWORD(v43[2]) = v15;
    }
    v36 = 0;
    v19 = (_DWORD *)((unsigned __int64)&v36 & -(__int64)(v4 != 0));
    v20 = 1 << (2 * (v11 & 7) + 4);
    if ( v19 )
      *v19 = --v20;
    v8 = (unsigned __int64)v38;
    Size_4 = v20 - 1;
    v21 = v20 - 1 - *v38;
    v37 = *v38;
    HIDWORD(v43[11]) = v20 - 1 - v37;
    if ( (v15 & 0x20) != 0 || (v15 & 0x100) != 0 )
    {
      v15 |= 0x12u;
      v45[10] = sub_140A63C70;
      v45[11] = sub_14090B280;
      v45[12] = sub_14052EAA0;
      v45[9] = sub_140A646C0;
      HIDWORD(v43[2]) = v15;
    }
    if ( (int)sub_140538480(v46, a2) < 0 && (v15 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    v5 = sub_140B4BF38(v43, v22, &v41);
    if ( v5 >= 0 )
    {
      v23 = v41;
      *v41 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v23 + 63) = *(unsigned __int16 *)(a2 + 6);
      v23[27] = v11;
      v24 = Size;
      v23[28] = v12;
      v23[35] = v23 + 45;
      *((_DWORD *)v23 + 64) = v24;
      *((_BYTE *)v23 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v23 + 65) = Size_4;
      *((_DWORD *)v23 + 66) = v36;
      *((_DWORD *)v23 + 62) = v35;
      v23[26] = 0LL;
      v23[30] = v23 + 29;
      v23[29] = v23 + 29;
      v23[8] = v23 + 7;
      v23[7] = v23 + 7;
      v23[10] = v23 + 9;
      v23[9] = v23 + 9;
      v23[12] = v23 + 11;
      v23[11] = v23 + 11;
      v25 = WORD2(v43[2]);
      if ( (v43[2] & 0x10000000000LL) != 0 )
        *((_BYTE *)v23 + 318) = 1;
      *((_BYTE *)v23 + 320) = 0;
      if ( (v25 & 0x20) != 0 )
        *((_BYTE *)v23 + 316) = 1;
      if ( (v25 & 0x1000) != 0 )
        *((_BYTE *)v23 + 317) = 1;
      if ( v34 )
        *((_BYTE *)v23 + 319) = 1;
      v26 = v37;
      *((_DWORD *)v23 + 68) = v23[28] & 1;
      v23[43] = v8;
      v5 = sub_140537928(v23, v21, v26);
      if ( v5 >= 0 )
      {
        memmove((void *)v23[35], (const void *)(a2 + 16), v24);
        if ( *((_BYTE *)v23 + 320) )
        {
          _RAX = 1LL;
          __asm { cpuid }
          if ( (_DWORD)_RAX == 526064 )
            *((_BYTE *)v23 + 321) = 1;
        }
      }
    }
  }
  sub_1403BF310(v42, 1LL, 0LL);
  if ( v5 < 0 )
    goto LABEL_57;
  return (unsigned int)v5;
}
