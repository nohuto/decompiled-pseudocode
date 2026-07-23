/*
 * XREFs of sub_140A19DE8 @ 0x140A19DE8
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140842E88 @ 0x140842E88 (sub_140842E88.c)
 *     sub_140A1A024 @ 0x140A1A024 (sub_140A1A024.c)
 *     sub_140A1A2F8 @ 0x140A1A2F8 (sub_140A1A2F8.c)
 *     sub_140A1A570 @ 0x140A1A570 (sub_140A1A570.c)
 */

__int64 __fastcall sub_140A19DE8(__int64 a1, __int64 a2)
{
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  int v7; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v11 = 0LL;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 24);
  do
  {
    if ( v5 > 0x13 && v5 != 22 && v5 != 24 && (v5 <= 0x19 || v5 > 0x1F && v5 != 33) )
      *v6 |= 2u;
    ++v5;
    v6 += 8;
  }
  while ( (int)v5 < 34 );
  v7 = sub_140A1A2F8(&v11, a2 + 8);
  if ( v7 >= 0 )
  {
    v8 = v11;
    if ( (int)sub_140A1A024(a1, v11) < 0 )
      sub_1406E0C3C(1LL, (__int64)"AslpFileLargeEnsureLargeFileMapping");
    if ( v8 )
    {
      *(_QWORD *)(a2 + 16) = v8[1];
      *(_BYTE *)(a2 + 57) = 1;
      v9 = v8[5];
      v8[1] = 0LL;
      *(_QWORD *)(a2 + 48) = v9;
      v10 = v8[2];
      v8[5] = 0LL;
      *(_QWORD *)(a2 + 32) = v10;
      *(_QWORD *)(a2 + 40) = v8[3];
      *(_WORD *)(a2 + 58) = 1;
      *(_DWORD *)(a2 + 84) = 1;
      v8[2] = 0LL;
      v8[3] = 0LL;
      sub_140A1A570(&v11);
      v7 = sub_140842E88((_QWORD *)(a2 + 8), (int *)(a2 + 64));
    }
    else
    {
      v7 = -1073741584;
    }
  }
  sub_140A1A570(&v11);
  return (unsigned int)v7;
}
