/*
 * XREFs of sub_1403AA8D8 @ 0x1403AA8D8
 * Callers:
 *     sub_140398ECC @ 0x140398ECC (sub_140398ECC.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 */

__int64 __fastcall sub_1403AA8D8(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rsi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax

  v2 = dword_140C0DF90 & 0xC00;
  if ( (dword_140C0DF90 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
    if ( v2 == 3072 )
    {
LABEL_9:
      xmmword_140C0DF20 = *(_OWORD *)a1;
      v5 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
      xmmword_140C0DF30 = *(_OWORD *)(a1 + 16);
      qword_140C0DF40 = *(PVOID *)(a1 + 32);
      if ( v5 == 1 )
      {
        dword_140C0DF90 |= 8u;
        LODWORD(xmmword_140C0DF30) = 5;
      }
      dword_140C0DF90 |= 2u;
      return 0LL;
    }
LABEL_8:
    sub_140AADBBC(0LL);
    goto LABEL_9;
  }
  if ( v2 == 3072 )
  {
    if ( !(_BYTE)xmmword_140C0DF48
      || !BYTE1(xmmword_140C0DF48)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_140C0DF58
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_140C0DF48 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_140C0DF48)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(qword_140C0DF68) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = qword_140C0DF68;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v7 = (unsigned int)(*(_DWORD *)(a1 + 4) * v6);
  else
    v7 = (unsigned int)(*(_DWORD *)(a1 + 8) * v6);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = v7 * ((*(_DWORD *)(a1 + 16) != 4) + 3LL);
  v10 = MmMapIoSpaceEx(v8, v9, 0x404u);
  *(_QWORD *)(a1 + 32) = v10;
  if ( v10 || (v11 = MmMapIoSpaceEx(v8, v9, 0x204u), (*(_QWORD *)(a1 + 32) = v11) != 0LL) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_140C0DF48 && BYTE1(xmmword_140C0DF48) )
    {
      v12 = DWORD1(xmmword_140C0DF48);
      if ( ((BYTE2(xmmword_140C0DF48) - 1) & 0xFD) == 0 )
        v12 = DWORD2(xmmword_140C0DF48);
      LOBYTE(v3) = (_DWORD)xmmword_140C0DF58 != 4;
      MmUnmapVideoDisplay(qword_140C0DF68, (unsigned int)(HIDWORD(xmmword_140C0DF48) * v12) * (v3 + 3));
    }
    xmmword_140C0DF48 = *(_OWORD *)a1;
    xmmword_140C0DF58 = *(_OWORD *)(a1 + 16);
    qword_140C0DF68 = *(PVOID *)(a1 + 32);
    goto LABEL_8;
  }
  return 3221225626LL;
}
