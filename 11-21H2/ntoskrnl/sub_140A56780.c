/*
 * XREFs of sub_140A56780 @ 0x140A56780
 * Callers:
 *     DriverEntry @ 0x140A47010 (DriverEntry.c)
 * Callees:
 *     sub_1403BF914 @ 0x1403BF914 (sub_1403BF914.c)
 *     sub_1403BF980 @ 0x1403BF980 (sub_1403BF980.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A55CC0 @ 0x140A55CC0 (sub_140A55CC0.c)
 *     sub_140A55D78 @ 0x140A55D78 (sub_140A55D78.c)
 *     sub_140A55DCC @ 0x140A55DCC (sub_140A55DCC.c)
 *     sub_140A56014 @ 0x140A56014 (sub_140A56014.c)
 */

__int64 __fastcall sub_140A56780(__int64 a1, int a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  char v6; // al
  __int64 v7; // rcx
  ULONG_PTR *v8; // rax
  _OWORD *v9; // r8
  __int128 v10; // xmm1
  unsigned int v11; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1[106]; // [rsp+40h] [rbp-C0h] BYREF

  BugCheckParameter3[0] = 0LL;
  if ( !a2 )
    sub_140A55CC0(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, 0x348uLL);
  sub_1403BF980((__int64)BugCheckParameter1);
  sub_1403BF914((_DWORD *)BugCheckParameter3 + 1, BugCheckParameter3);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0]
      || (BugCheckParameter1[103] & MEMORY[0xFFFFF78000000710]) != MEMORY[0xFFFFF78000000710]
      || (BugCheckParameter1[2] & 0x100000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 1) != 0
      || (BugCheckParameter1[2] & 0x200000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 2) != 0
      || (BugCheckParameter1[2] & 0x400000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 4) != 0 )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
    result = BugCheckParameter3[0] & (unsigned int)dword_140D06964;
    if ( (_DWORD)result != (_DWORD)dword_140D06964 )
      KeBugCheckEx(
        0x3Eu,
        (unsigned int)dword_140D06A10,
        (unsigned int)dword_140D06964,
        HIDWORD(BugCheckParameter3[0]),
        LODWORD(BugCheckParameter3[0]));
  }
  else
  {
    sub_140A55D78(a1, (__int64 *)BugCheckParameter1);
    sub_140A55DCC(a1, (__int64 *)BugCheckParameter1);
    v5 = BugCheckParameter1[0];
    if ( qword_140D01508 )
    {
      v5 = ~qword_140D01508 & BugCheckParameter1[0];
      BugCheckParameter1[67] &= ~qword_140D01508;
      BugCheckParameter1[0] = v5;
    }
    v6 = BYTE4(BugCheckParameter1[2]);
    if ( byte_140D01510 )
    {
      v5 = 0LL;
      BugCheckParameter1[67] = 0LL;
      v6 = BYTE4(BugCheckParameter1[2]) & 0xF8;
      BugCheckParameter1[0] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFF8;
    }
    if ( (v5 & 0x40000) != 0 )
    {
      if ( (v6 & 2) != 0 && (v6 & 4) != 0 )
        v5 &= LODWORD(BugCheckParameter1[103]) | 0xFFFFFFFFFFFBFFFFuLL;
      else
        v5 &= ~0x40000uLL;
      BugCheckParameter1[0] = v5;
    }
    if ( (((unsigned __int8)(v5 >> 17) ^ (unsigned __int8)(v5 >> 18)) & 1) != 0 )
      BugCheckParameter1[0] = v5 & 0xFFFFFFFFFFF9FFFFuLL;
    sub_140A56014((__int64 *)BugCheckParameter1);
    v7 = 6LL;
    v8 = BugCheckParameter1;
    v9 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v9[6] = *((_OWORD *)v8 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v8 + 7);
      v8 += 16;
      *(v9 - 1) = v10;
      --v7;
    }
    while ( v7 );
    *v9 = *(_OWORD *)v8;
    v9[1] = *((_OWORD *)v8 + 1);
    v9[2] = *((_OWORD *)v8 + 2);
    v9[3] = *((_OWORD *)v8 + 3);
    *((_QWORD *)v9 + 8) = v8[8];
    qword_140D06A68 = BugCheckParameter1[67];
    if ( BugCheckParameter1[0] )
    {
      dword_140D050A0 = MEMORY[0xFFFFF78000000600];
      dword_140D0518C = MEMORY[0xFFFFF78000000600];
      dword_140D050FC = MEMORY[0xFFFFF78000000718];
    }
    if ( (BugCheckParameter1[0] & 0x40000) != 0 )
    {
      v11 = (MEMORY[0xFFFFF78000000600] + 63) & 0xFFFFFFC0;
      LODWORD(dword_140D06A0C) = v11;
      if ( v11 > 0x3000 )
        KeBugCheckEx(0x131u, 5uLL, v11, 0x3000uLL, 0LL);
    }
    result = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(result + 2872) & 0x20) != 0 )
    {
      dword_140D050FC += HIDWORD(BugCheckParameter3[0]);
      result = LODWORD(BugCheckParameter3[0]);
      dword_140D0518C += HIDWORD(BugCheckParameter3[0]);
      LODWORD(dword_140D06A10) = HIDWORD(BugCheckParameter3[0]);
      LODWORD(dword_140D06964) = BugCheckParameter3[0];
    }
  }
  return result;
}
