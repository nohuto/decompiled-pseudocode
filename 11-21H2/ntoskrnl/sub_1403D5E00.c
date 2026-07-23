/*
 * XREFs of sub_1403D5E00 @ 0x1403D5E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C9F0 @ 0x14020C9F0 (sub_14020C9F0.c)
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140418B44 @ 0x140418B44 (sub_140418B44.c)
 *     sub_140418BA4 @ 0x140418BA4 (sub_140418BA4.c)
 *     sub_140418BD8 @ 0x140418BD8 (sub_140418BD8.c)
 *     sub_140418C84 @ 0x140418C84 (sub_140418C84.c)
 *     sub_140418C9C @ 0x140418C9C (sub_140418C9C.c)
 *     sub_140418CD8 @ 0x140418CD8 (sub_140418CD8.c)
 *     sub_140418D80 @ 0x140418D80 (sub_140418D80.c)
 *     sub_140418DB8 @ 0x140418DB8 (sub_140418DB8.c)
 *     sub_140543410 @ 0x140543410 (sub_140543410.c)
 *     sub_140543490 @ 0x140543490 (sub_140543490.c)
 *     sub_140571314 @ 0x140571314 (sub_140571314.c)
 *     sub_14057132C @ 0x14057132C (sub_14057132C.c)
 */

ULONG_PTR __fastcall sub_1403D5E00(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  signed __int32 v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int16 v14; // r10
  __int16 v15; // ax
  __int16 v16; // ax
  _WORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  signed __int32 v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  char v26; // cl
  unsigned __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  signed __int32 v37; // eax
  unsigned int v38; // edi
  __int16 v39; // ax
  unsigned int v40; // eax
  _DWORD v42[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v43; // [rsp+80h] [rbp+48h] BYREF
  int v44; // [rsp+88h] [rbp+50h] BYREF
  int v45; // [rsp+90h] [rbp+58h] BYREF
  int v46; // [rsp+98h] [rbp+60h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)CurrentPrcb + 4364);
  if ( ((v3 - 1) & v3) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 2uLL);
  if ( byte_140D0688B && (unsigned __int8)((__int64 (*)(void))sub_140543410)() )
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 2uLL);
  v4 = 0x10000000000LL;
  if ( (dword_140C2AF00 & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x10000000000uLL);
  if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
    sub_14057132C(CurrentPrcb, &xmmword_140D06920);
  v5 = 0x4000000000LL;
  v6 = 0x8000000000LL;
  v7 = 256LL;
  if ( (xmmword_140D06920 & 0x80) != 0 && (xmmword_140D06920 & 0x100) == 0 )
  {
    if ( (dword_140C2AF00 & 8) != 0 )
      goto LABEL_16;
    if ( (dword_140C2AF00 & 0x10) == 0 )
      goto LABEL_17;
    if ( dword_140C09828 != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x8000000000uLL);
  }
LABEL_17:
  if ( (xmmword_140D06920 & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x800000000uLL);
  if ( (dword_140C2AF00 & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x400000000uLL);
  }
  else if ( (dword_140C2AF00 & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x400000000uLL);
    if ( byte_140D0688B )
    {
      if ( (dword_140D0688C & 2) != 0
        && (unsigned __int8)sub_140543410(v4, v3, 256LL, 0x8000000000LL)
        && (xmmword_140D06920 & 0x40) != 0 )
      {
        *((_WORD *)CurrentPrcb + 883) = 2;
        *((_WORD *)CurrentPrcb + 885) = 2;
        *((_WORD *)CurrentPrcb + 872) = 2;
      }
    }
  }
  v8 = 0x8000000000000LL;
  if ( (xmmword_140D06920 & 0x800000) != 0 )
  {
    if ( !(unsigned int)sub_140418C9C(0x8000000000000LL, &xmmword_140D06920, v7, v6) )
    {
      v9 = 0x4000000000000LL;
LABEL_32:
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v9);
      goto LABEL_35;
    }
    if ( !(unsigned int)sub_140418C84() )
    {
      v9 = 0x2000000000000LL;
      goto LABEL_32;
    }
    if ( !byte_140E01840 )
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v8);
  }
LABEL_35:
  if ( ((unsigned __int64)xmmword_140D06920 & v8) != 0 )
  {
    *((_WORD *)CurrentPrcb + 880) |= v7;
    *((_WORD *)CurrentPrcb + 20309) = 24;
  }
  v10 = 0x80000000LL;
  if ( Argument )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      v13 = *(_DWORD *)Argument & 0x80000000;
      v44 = 0;
      if ( v13 != v12 )
      {
        do
        {
          sub_1402F32E0(&v44, v3, 0x80000000LL, v6);
          v10 = 0x80000000LL;
        }
        while ( (*(_DWORD *)Argument & 0x80000000) != v12 );
        v6 = 0x8000000000LL;
        v5 = 0x4000000000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = v12 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (xmmword_140D06920 & 0x400000000LL) != 0 || (xmmword_140D06920 & 0x800000000LL) != 0 )
  {
    if ( ((unsigned __int64)xmmword_140D06920 & v6) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v5);
      _InterlockedAnd64((volatile signed __int64 *)&xmmword_140D06920, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( ((unsigned __int64)xmmword_140D06920 & v5) != 0 )
    {
      v43 = *((_WORD *)CurrentPrcb + 883);
      sub_140571314(&v43, v3, 0x80000000LL);
      v39 = v43;
      *((_WORD *)CurrentPrcb + 883) = v43;
      *((_WORD *)CurrentPrcb + 885) = v39;
    }
    goto LABEL_160;
  }
  _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x1000000000uLL);
  *((_BYTE *)CurrentPrcb + 1762) |= 2u;
  v14 = 1024;
  if ( (xmmword_140D06920 & 1) != 0 )
  {
    v43 = 1;
    if ( (xmmword_140D06920 & 0x4000) != 0 )
    {
      v15 = 3;
      v43 = 3;
    }
    else
    {
      v15 = v43;
    }
    *((_WORD *)CurrentPrcb + 883) = v15;
    *((_WORD *)CurrentPrcb + 885) = v15;
    *((_WORD *)CurrentPrcb + 872) = v15;
    if ( ((unsigned __int64)xmmword_140D06920 & v5) != 0 || ((unsigned __int64)xmmword_140D06920 & v6) != 0 )
    {
      v43 = *((_WORD *)CurrentPrcb + 883);
      sub_140571314(&v43, v3, 0x80000000LL);
      v16 = v43;
      *((_WORD *)CurrentPrcb + 883) = v43;
      *((_WORD *)CurrentPrcb + 885) = v16;
      *((_WORD *)CurrentPrcb + 872) = v16;
    }
    v17 = (_WORD *)((char *)CurrentPrcb + 1768);
    *((_WORD *)CurrentPrcb + 884) = 1;
    if ( ((unsigned __int64)xmmword_140D06920 & v5) != 0 || ((unsigned __int64)xmmword_140D06920 & v6) != 0 )
      sub_140571314(v17, v3, v10);
    if ( (xmmword_140D06920 & 0x4000) != 0 )
      *v17 |= 2u;
    if ( (xmmword_140D06920 & 0x2000) != 0 )
      *v17 |= 0x80u;
    if ( (xmmword_140D06920 & 0x10000) != 0 )
    {
      if ( (dword_140C2AF00 & 0x800000) != 0 )
      {
        if ( BYTE12(xmmword_140D06920) )
        {
          _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x80000000000000uLL);
          *((_BYTE *)CurrentPrcb + 1762) ^= (*((_BYTE *)CurrentPrcb + 1762) ^ (16 * BYTE12(xmmword_140D06920))) & 0x30;
          goto LABEL_68;
        }
        if ( (xmmword_140D06920 & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x40000000000000uLL);
          *((_WORD *)CurrentPrcb + 883) |= v14;
          *((_WORD *)CurrentPrcb + 872) |= v14;
          *((_WORD *)CurrentPrcb + 885) |= v14;
          *v17 |= v14;
          goto LABEL_68;
        }
        v18 = 0x20000000000000LL;
      }
      else
      {
        v18 = 0x10000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v18);
    }
LABEL_68:
    if ( ((unsigned __int64)xmmword_140D06920 & v6) == 0 )
      goto LABEL_160;
  }
  if ( (xmmword_140D06920 & 0x10) != 0 )
  {
    *((_WORD *)CurrentPrcb + 884) = 1;
  }
  else if ( (xmmword_140D06920 & 0x40) != 0 && (xmmword_140D06920 & 2) != 0 )
  {
    *((_WORD *)CurrentPrcb + 884) = 2;
  }
  v19 = (__int64)CurrentPrcb + 1768;
  if ( (xmmword_140D06920 & 0x4000) != 0 )
    *(_WORD *)v19 |= 2u;
  if ( (xmmword_140D06920 & 0x2000) != 0 )
  {
    v19 = (__int64)CurrentPrcb + 1768;
    *((_WORD *)CurrentPrcb + 884) |= 0x80u;
  }
  if ( ((unsigned __int64)xmmword_140D06920 & v5) != 0 || ((unsigned __int64)xmmword_140D06920 & v6) != 0 )
    sub_140571314(v19, v3, v10);
  if ( (xmmword_140D06920 & 1) == 0 )
  {
    if ( Argument )
    {
      v20 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v21 = v10 & ~v20;
      if ( (v20 & 0x7FFFFFFF) != 0 )
      {
        v22 = v10 & *(_DWORD *)Argument;
        v45 = 0;
        while ( v22 != v21 )
        {
          sub_1402F32E0(&v45, v3, v10, v6);
          v22 = *(_DWORD *)Argument & 0x80000000;
        }
      }
      else
      {
        *(_DWORD *)Argument = v21 | *(_DWORD *)(Argument + 4);
      }
    }
    if ( (xmmword_140D06920 & 0x20000000000LL) != 0 )
    {
      *((_BYTE *)CurrentPrcb + 1750) |= 4u;
      sub_14024B6F8(v19, v3, v10);
    }
    if ( (xmmword_140D06920 & 2) != 0
      && (xmmword_140D06920 & 0x4000) == 0
      && !byte_140D0688B
      && ((xmmword_140D06920 & 0x10) != 0 || (xmmword_140D06920 & 0x40) != 0) )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x200000000uLL);
      *((_BYTE *)CurrentPrcb + 1762) |= 1u;
    }
    v23 = 0LL;
    if ( (xmmword_140D06920 & 2) != 0
      && (xmmword_140D06920 & 0x40) != 0
      && (xmmword_140D06920 & 0x10) != 0
      && (xmmword_140D06920 & 0x4000) == 0
      && (xmmword_140D06920 & 0x10000000000LL) == 0 )
    {
      v10 = *((_QWORD *)CurrentPrcb + 4364);
      v24 = v10 - ((v10 >> 1) & 0x5555555555555555LL);
      v3 = v24 & 0x3333333333333333LL;
      v25 = ((v24 & 0x3333333333333333LL)
           + ((v24 >> 2) & 0x3333333333333333LL)
           + (((v24 & 0x3333333333333333LL) + ((v24 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
      v19 = 0x101010101010101LL;
      if ( (0x101010101010101LL * v25) >> 56 == 2
        && (!byte_140D0688B
         || !(unsigned __int8)sub_140543410(0x101010101010101LL, v3, v10, 0LL)
         || (dword_140D0688C & 2) != 0 && (unsigned __int8)sub_140543490()) )
      {
        v26 = *((_BYTE *)CurrentPrcb + 209) + 1;
        _BitScanForward64(&v27, __ROR8__(v10, v26));
        v28 = ((_BYTE)v27 + v26) & 0x3F;
        v29 = v28 + (*((unsigned __int8 *)CurrentPrcb + 208) << 6);
        v46 = v28;
        *((_QWORD *)CurrentPrcb + 1462) = sub_140348800(dword_140D105E0[v29]);
        v23 = 1LL;
        *((_WORD *)CurrentPrcb + 886) = 6;
      }
    }
    if ( (dword_140C2AF00 & 0x20) != 0 && (xmmword_140D06920 & 2) != 0 && (xmmword_140D06920 & 0x40) != 0
      || (xmmword_140D06920 & 2) != 0
      && (xmmword_140D06920 & 0x40) != 0
      && !(_DWORD)v23
      && (xmmword_140D06920 & 0x10000000000LL) == 0
      && byte_140D0688B
      && (unsigned __int8)sub_140543410(v19, v3, v10, v23) )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x100000000uLL);
    }
    if ( (xmmword_140D06920 & 2) != 0
      && (xmmword_140D06920 & 0x40) != 0
      && (xmmword_140D06920 & 0x4000) != 0
      && !(_DWORD)v23
      && (xmmword_140D06920 & 0x10000000000LL) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x80000000000uLL);
    }
    if ( *((_BYTE *)CurrentPrcb + 141) == 1 && (xmmword_140D06920 & 0x10) == 0 && (dword_140C2AF00 & 0x40) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x2000000000uLL);
LABEL_127:
      v5 = 0x4000000000LL;
      goto LABEL_160;
    }
    if ( (unsigned int)sub_140418BD8(CurrentPrcb, v3, v10, v23) )
    {
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x8000uLL);
      if ( (unsigned int)sub_140418B44(CurrentPrcb, &xmmword_140D06920) )
      {
        if ( (unsigned int)sub_140418BA4(v31, &xmmword_140D06920) )
          goto LABEL_134;
        v34 = 0x200000000000LL;
      }
      else
      {
        v34 = 0x100000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v34);
    }
LABEL_134:
    if ( (xmmword_140D06920 & 0x200000) == 0 )
      goto LABEL_140;
    if ( (unsigned int)sub_140418D80(v31, &xmmword_140D06920) )
    {
      if ( (unsigned int)sub_140418CD8(CurrentPrcb, &xmmword_140D06920) )
        goto LABEL_140;
      v35 = 0x800000000000LL;
    }
    else
    {
      v35 = 0x1000000000000LL;
    }
    _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v35);
LABEL_140:
    if ( (xmmword_140D06920 & 0x10000) != 0 )
    {
      if ( (dword_140C2AF00 & 0x800000) == 0 )
      {
        v36 = 0x10000000000000LL;
LABEL_148:
        _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, v36);
        goto LABEL_149;
      }
      if ( BYTE12(xmmword_140D06920) )
      {
        _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x80000000000000uLL);
        *((_BYTE *)CurrentPrcb + 1762) ^= (*((_BYTE *)CurrentPrcb + 1762) ^ (16 * BYTE12(xmmword_140D06920))) & 0x30;
      }
      else
      {
        if ( (xmmword_140D06920 & 0x20000) == 0 )
        {
          v36 = 0x20000000000000LL;
          goto LABEL_148;
        }
        _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x40000000000000uLL);
        *((_WORD *)CurrentPrcb + 883) |= 0x400u;
        *((_WORD *)CurrentPrcb + 872) |= 0x400u;
        *((_WORD *)CurrentPrcb + 885) |= 0x400u;
        *((_WORD *)CurrentPrcb + 884) |= 0x400u;
      }
    }
LABEL_149:
    if ( Argument )
    {
      v37 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v38 = ~v37 & 0x80000000;
      if ( (v37 & 0x7FFFFFFF) != 0 )
      {
        v42[0] = 0;
        while ( (*(_DWORD *)Argument & 0x80000000) != v38 )
          sub_1402F32E0(v42, v30, v32, v33);
      }
      else
      {
        *(_DWORD *)Argument = v38 | *(_DWORD *)(Argument + 4);
      }
    }
    sub_14020C9F0(*((_QWORD *)KeGetCurrentThread() + 23));
    goto LABEL_127;
  }
LABEL_160:
  v40 = *((unsigned __int16 *)CurrentPrcb + 883);
  *((_WORD *)CurrentPrcb + 882) = v40;
  if ( (_WORD)v40 )
    __writemsr(0x48u, v40);
  if ( ((unsigned __int64)xmmword_140D06920 & v5) != 0 && dword_140C09828 != 72 )
    __writemsr(dword_140C09828, qword_140C09820 | __readmsr(dword_140C09828));
  sub_140418DB8(CurrentPrcb);
  return 0LL;
}
