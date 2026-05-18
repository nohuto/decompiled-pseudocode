/*
 * XREFs of sub_18002AD28 @ 0x18002AD28
 * Callers:
 *     sub_18002C0C0 @ 0x18002C0C0 (sub_18002C0C0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18002AFB0 @ 0x18002AFB0 (sub_18002AFB0.c)
 *     sub_18002AFDC @ 0x18002AFDC (sub_18002AFDC.c)
 *     sub_18002B050 @ 0x18002B050 (sub_18002B050.c)
 *     sub_18002B0C4 @ 0x18002B0C4 (sub_18002B0C4.c)
 *     sub_18002D438 @ 0x18002D438 (sub_18002D438.c)
 *     sub_18002D480 @ 0x18002D480 (sub_18002D480.c)
 */

__int64 __fastcall sub_18002AD28(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v7 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x1AF286BCA1AF286LL )
    sub_180011B80();
  v8 = v7 + 1;
  v9 = sub_18002D438(a1, v7 + 1);
  v10 = sub_18002AFB0(v9);
  v11 = sub_18001090C(v10);
  v12 = (unsigned __int64)((unsigned __int128)((a2 - v3) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  v13 = v11 + 152 * ((a2 - v3) / 152);
  sub_18002B0C4(v12, v13, a3);
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    sub_18002AFDC(v15, v14, v11, a1);
  }
  else
  {
    sub_18002B050(v15, a2, v11, a1);
    sub_18002B050(a2, a1[1], v13 + 152, a1);
  }
  sub_18002D480(a1, v11, v8, v9);
  return v13;
}
