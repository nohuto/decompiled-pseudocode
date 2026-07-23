/*
 * XREFs of sub_140A29C1C @ 0x140A29C1C
 * Callers:
 *     sub_140A2A8B4 @ 0x140A2A8B4 (sub_140A2A8B4.c)
 * Callees:
 *     sub_1406D0858 @ 0x1406D0858 (sub_1406D0858.c)
 *     sub_140A29D04 @ 0x140A29D04 (sub_140A29D04.c)
 */

__int64 __fastcall sub_140A29C1C(int a1, int a2, const WCHAR *a3, __int64 a4, __int64 a5, unsigned int a6, _DWORD *a7)
{
  __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // ebp
  __int64 v13; // rax
  int v14; // esi
  char v15; // al
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v19; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v7) = a5;
  v8 = 0;
  v9 = a6;
  v10 = (int)a3;
  v19 = 0;
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = 2 * v13 + 2;
  if ( a5 )
  {
    v19 = a6;
    v15 = sub_1406D0858((_WORD *)a5, &v19, a3, &a5);
    v7 = a5 & -(__int64)(v15 != 0);
    v9 -= v14;
  }
  v16 = sub_140A29D04(a1, a2, v10, v7, v9, (__int64)&v19);
  v17 = v16;
  if ( v16 == -1073741772 )
  {
    v17 = 0;
LABEL_10:
    *a7 = v8 + v14;
    return v17;
  }
  if ( (int)(v16 + 0x80000000) < 0 || v16 == -1073741789 )
  {
    v8 = v19;
    goto LABEL_10;
  }
  return v17;
}
