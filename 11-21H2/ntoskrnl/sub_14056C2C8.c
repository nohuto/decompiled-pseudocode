/*
 * XREFs of sub_14056C2C8 @ 0x14056C2C8
 * Callers:
 *     sub_140235F70 @ 0x140235F70 (sub_140235F70.c)
 *     sub_1405DC7AC @ 0x1405DC7AC (sub_1405DC7AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14056C2C8(char *a1, _WORD *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r10
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r11
  unsigned __int16 v11; // dx
  char *v12; // rbp
  unsigned int v13; // r9d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  signed __int64 v17; // r14
  __int64 v18; // rdi
  _QWORD *v19; // r8
  bool v20; // zf
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE v27[272]; // [rsp+20h] [rbp-148h] BYREF

  memset(v27, 0, 0x108uLL);
  v8 = v27;
  v9 = *a2;
  v10 = 32;
  v11 = *(_WORD *)a1;
  if ( a3 )
  {
    v10 = a4;
    v8 = a3;
  }
  v12 = (char *)a2;
  v13 = 0;
  if ( *(_WORD *)a1 >= *a2 )
  {
    v11 = *a2;
    v9 = *(_WORD *)a1;
    v12 = a1;
  }
  *((_WORD *)v8 + 1) = v10;
  v14 = v9;
  if ( v9 > v10 )
    v14 = v10;
  *(_WORD *)v8 = v14;
  v15 = v10;
  if ( v11 <= v10 )
    v15 = v11;
  v16 = 0;
  if ( v9 <= v10 )
    v10 = v9;
  if ( v15 )
  {
    v17 = a1 - (char *)a2;
    v18 = v15;
    v19 = a2 + 4;
    v16 = v15;
    do
    {
      v20 = *v19 == *(_QWORD *)((char *)v19 + v17);
      *(_QWORD *)((char *)v19 + v8 - (_BYTE *)a2) = *v19 ^ *(_QWORD *)((char *)v19 + v17);
      ++v19;
      if ( !v20 )
        v13 = 1;
      --v18;
    }
    while ( v18 );
  }
  if ( v16 < v10 )
  {
    v21 = 8LL * v16;
    v22 = v10 - v16;
    v16 = v10;
    v23 = v22;
    do
    {
      v24 = *(_QWORD *)&v12[v21 + 8];
      *(_QWORD *)&v8[v21 + 8] = v24;
      v21 += 8LL;
      if ( v24 )
        v13 = 1;
      --v23;
    }
    while ( v23 );
  }
  if ( v8 != v27 )
  {
    *((_DWORD *)v8 + 1) = 0;
    while ( v16 < *((_WORD *)v8 + 1) )
    {
      v25 = v16++;
      *(_QWORD *)&v8[8 * v25 + 8] = 0LL;
    }
  }
  return v13;
}
