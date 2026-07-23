/*
 * XREFs of sub_140819D40 @ 0x140819D40
 * Callers:
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_1406E8E9C @ 0x1406E8E9C (sub_1406E8E9C.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_140819F40 @ 0x140819F40 (sub_140819F40.c)
 *     sub_140989788 @ 0x140989788 (sub_140989788.c)
 */

void __fastcall sub_140819D40(int a1)
{
  char v2; // bp
  int v3; // ebx
  int v4; // r14d
  int v5; // r15d
  int v6; // edi
  unsigned __int64 v7; // r12
  char v8; // cl
  int v9; // ebx
  int v10; // r9d
  _BYTE v11[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v11, 0, 0x4CuLL);
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
  v2 = 0;
  if ( (dword_140C231B0 & 3) != 0 )
  {
    sub_1407EF098(1);
    if ( !(_BYTE)xmmword_140C1F400 || (BYTE8(xmmword_140C1F400) & 8) == 0 )
    {
      sub_1407EF120();
      goto LABEL_6;
    }
    sub_1407EF120();
  }
  v2 = 1;
LABEL_6:
  v3 = dword_140C22278;
  v4 = dword_140C095F0;
  v5 = dword_140C095F4;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  sub_1407628C0(&xmmword_140C23400, (__int64)v11);
  v8 = 0;
  if ( (v3 & 0x1000000) == 0 )
    v8 = v2;
  if ( v8 )
  {
    v6 = dword_140C232E0;
    if ( dword_140C232E0 )
    {
      v9 = 4;
    }
    else
    {
      v9 = 5;
      v6 = 0;
    }
  }
  else
  {
    if ( byte_140C5AC3C )
    {
      if ( *((_DWORD *)qword_140C231B8 + 15) )
        v6 = *((_DWORD *)qword_140C231B8 + 15);
    }
    else if ( *((_DWORD *)qword_140C231B8 + 15) && (v11[3] || v11[4] || v11[5]) )
    {
      v6 = *((_DWORD *)qword_140C231B8 + 15);
    }
    else if ( *((_DWORD *)qword_140C231B8 + 22) && (unsigned __int8)sub_140989788(v11) )
    {
      v6 = v10;
    }
    v9 = v6 != 0 ? 1 : 5;
  }
  if ( a1 == 1 || a1 == 4 )
    sub_1406E8E9C(3u);
  if ( a1 == 3 )
  {
    sub_140369100(6u);
    if ( byte_140C22731 )
      sub_1405DC298();
  }
  dword_140C095F0 = v9;
  dword_140C095F4 = v6;
  qword_140C09720 = v7;
  dword_140C09728 = a1;
  dword_140C0972C = v4;
  dword_140C09730 = v5;
  sub_140819F40(a1, v4, v5, v9, v6);
  sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
}
