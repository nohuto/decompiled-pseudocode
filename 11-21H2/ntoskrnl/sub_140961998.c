/*
 * XREFs of sub_140961998 @ 0x140961998
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1402581D0 @ 0x1402581D0 (sub_1402581D0.c)
 *     sub_140418FE4 @ 0x140418FE4 (sub_140418FE4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405435CC @ 0x1405435CC (sub_1405435CC.c)
 */

__int64 __fastcall sub_140961998(void *a1, size_t Size, unsigned int *a3)
{
  size_t v3; // r15
  unsigned int v6; // r12d
  ULONG_PTR v7; // rdi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edi
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // [rsp+68h] [rbp+10h]
  unsigned __int64 Src; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size < 4 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v6 = Size;
  if ( (unsigned int)Size >= 8 )
    v6 = 8;
  *a3 = v6;
  Src = ((((xmmword_140D06920 & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)xmmword_140D06920 >> 33)) & 2 ^ ((xmmword_140D06920 & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)xmmword_140D06920 >> 33)) & 4 ^ (((xmmword_140D06920 & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)xmmword_140D06920 >> 33)) & 2 ^ ((unsigned __int64)xmmword_140D06920 >> 36) & 1;
  if ( (xmmword_140D06920 & 0x10) != 0 || (xmmword_140D06920 & 0x40) != 0 )
    LODWORD(Src) = Src | 8;
  if ( (xmmword_140D06920 & 4) != 0 )
    LODWORD(Src) = Src | 0x10;
  if ( (xmmword_140D06920 & 0x1000000000LL) != 0 && (xmmword_140D06920 & 0x2000000000LL) != 0 )
    LODWORD(Src) = Src | 0x2000;
  LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)(2 * xmmword_140D06920)) & 0x20 ^ Src;
  LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)xmmword_140D06920) & 0x40 ^ Src;
  LODWORD(Src) = Src & 0xFFFFFF7F | (4 * xmmword_140D06920) & 0x80 | 0x100;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)(4 * xmmword_140D06920)) & 0x200 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)xmmword_140D06920 >> 28)) & 0x400 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)xmmword_140D06920 >> 28)) & 0x800 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)~(16 * xmmword_140D06920)) & 0x1000 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)xmmword_140D06920 >> 27)) & 0x4000 ^ Src;
  LODWORD(Src) = (Src ^ ((unsigned __int64)xmmword_140D06920 >> 27)) & 0x8000 ^ Src;
  v7 = qword_140D06958;
  v21 = byte_140E01840;
  if ( !byte_140E01840 || (v8 = 637534208, (qword_140D06958 & 8) == 0) )
    v8 = 603979776;
  v9 = v8 | Src & 0xFCFEFFFF | ((_DWORD)qword_140D06958 << 19) & 0x1000000 | ((xmmword_140D06920 & 1 | 0x80) << 16) & 0xFDFFFFFF;
  v10 = (unsigned __int16)qword_140D06958 & 0x8000;
  if ( (qword_140D06958 & 0x8000) != 0 && dword_140D06B8C || !dword_140D06C38 )
  {
    v11 = v9 | 0x18000000;
  }
  else if ( (qword_140D06958 & 0x10000) != 0 || (qword_140D06958 & 0x28) == 8 && (unsigned int)sub_1402581D0() )
  {
    v11 = v9 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( v10 )
  {
    v11 = v9 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v11 = v9 & 0xE7FFFFFF;
  }
  if ( (v7 & 0x10000) != 0 || !dword_140D06D58 )
    v12 = 0x40000000;
  else
    v12 = 0;
  LODWORD(Src) = v12 | v11 & 0xBFFFFFFF;
  sub_1405435CC((int *)&Src);
  v13 = HIDWORD(Src) ^ (BYTE4(Src) ^ (unsigned __int8)(v7 >> 19)) & 7;
  if ( !v21 || (v14 = !sub_140418FE4(), v15 = 1048, v14) )
    v15 = 1040;
  HIDWORD(Src) = v15 | v13 & 0xFFFFFFF7;
  if ( (xmmword_140D06920 & 0x8000) != 0 )
  {
    if ( (xmmword_140D06920 & 0x400000000LL) != 0
      || (xmmword_140D06920 & 0x2000000000LL) != 0
      || (xmmword_140D06920 & 0x100000000000LL) != 0 )
    {
      v16 = HIDWORD(Src) & 0xFFFFFCFF | 0x100;
    }
    else if ( (xmmword_140D06920 & 0x800000000LL) != 0 || (xmmword_140D06920 & 0x200000000000LL) != 0 )
    {
      v16 = HIDWORD(Src) & 0xFFFFFCFF;
    }
    else
    {
      v16 = HIDWORD(Src) | 0x300;
    }
  }
  else
  {
    v16 = HIDWORD(Src) & 0xFFFFFCFF | 0x200;
  }
  HIDWORD(Src) = v16 & 0xFFFFEFFF | (((qword_140D06958 >> 4) & 1) << 12) | 0x20800;
  if ( (xmmword_140D06920 & 0x200000) != 0 )
  {
    if ( (xmmword_140D06920 & 0x400000000LL) != 0
      || (xmmword_140D06920 & 0x2000000000LL) != 0
      || (xmmword_140D06920 & 0x800000000000LL) != 0 )
    {
      v17 = HIDWORD(Src) & 0xFFF3FFFF | 0x40000;
    }
    else if ( (xmmword_140D06920 & 0x800000000LL) != 0 || (xmmword_140D06920 & 0x1000000000000LL) != 0 )
    {
      v17 = HIDWORD(Src) & 0xFFF3FFFF;
    }
    else
    {
      v17 = HIDWORD(Src) | 0xC0000;
    }
  }
  else
  {
    v17 = HIDWORD(Src) & 0xFFF3FFFF | 0x80000;
  }
  HIDWORD(Src) = v17 | 0x100000;
  v18 = v17 | 0x100000;
  if ( (xmmword_140D06920 & 0x400000) != 0 )
    v19 = v18 | 0x200000;
  else
    v19 = v18 & 0xFFDFFFFF;
  HIDWORD(Src) = v19 | 0x400000;
  if ( (xmmword_140D06920 & 0x800000) != 0 )
  {
    if ( (xmmword_140D06920 & 0x2000000000000LL) == 0 )
    {
      if ( (xmmword_140D06920 & 0x4000000000000LL) != 0 )
        HIDWORD(Src) &= 0xFE7FFFFF;
      else
        HIDWORD(Src) |= 0x1800000u;
      goto LABEL_65;
    }
    v20 = HIDWORD(Src) & 0xFE7FFFFF | 0x800000;
  }
  else
  {
    v20 = HIDWORD(Src) & 0xFE7FFFFF | 0x1000000;
  }
  HIDWORD(Src) = v20;
LABEL_65:
  if ( (xmmword_140D06920 & 0x10000) != 0 )
  {
    if ( (xmmword_140D06920 & 0x10000000000000LL) != 0 || (xmmword_140D06920 & 0x400000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x40u;
    }
    else if ( (xmmword_140D06920 & 0x20000000000000LL) != 0 || (xmmword_140D06920 & 0x800000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x80u;
    }
    else if ( (xmmword_140D06920 & 0x40000000000000LL) != 0 || (xmmword_140D06920 & 0x80000000000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x20u;
    }
  }
  memset(a1, 0, v3);
  memmove(a1, &Src, v6);
  return 0LL;
}
