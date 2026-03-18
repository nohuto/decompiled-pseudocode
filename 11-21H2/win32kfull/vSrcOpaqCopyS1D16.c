/*
 * XREFs of vSrcOpaqCopyS1D16 @ 0x1C028DF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcOpaqCopyS1D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int16 a9,
        __int16 a10)
{
  int v10; // ebx
  char *v11; // r11
  __int64 v12; // r15
  int v13; // esi
  unsigned __int8 *v14; // r9
  __int64 v15; // r14
  char *v16; // rdi
  __int64 v17; // r10
  __int64 result; // rax
  char *v19; // r8
  unsigned __int8 v20; // dl
  char *v21; // rcx
  unsigned __int64 v22; // rax
  char *v23; // rdx
  unsigned int v24; // ecx
  unsigned __int8 v25; // cl
  unsigned __int64 v26; // rax

  v10 = a2 & 7;
  v11 = (char *)(a4 + 2LL * a5);
  v12 = a6 - a5;
  v13 = a6 - a5;
  v14 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v15 = a7 - 2 * (a6 - a5);
  v16 = &v11[a8 * a7];
  v17 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v10 )
    v13 = 8 - v10;
  LOWORD(a5) = a10;
  result = a9;
  HIWORD(a5) = a9;
  do
  {
    v19 = &v11[2 * v12];
    if ( v10 )
    {
      v20 = *v14++ << v10;
      v21 = &v11[2 * v13];
      do
      {
        v22 = v20;
        v20 *= 2;
        result = *(unsigned __int16 *)((char *)&a5 + ((v22 >> 6) & 2));
        *(_WORD *)v11 = result;
        v11 += 2;
      }
      while ( v11 != v21 );
    }
    v23 = &v11[(v19 - v11) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v11 != v23 )
    {
      v24 = *v14++;
      *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v24 >> 6) & 2));
      *((_WORD *)v11 + 1) = *(_WORD *)((char *)&a5 + ((v24 >> 5) & 2));
      *((_WORD *)v11 + 2) = *(_WORD *)((char *)&a5 + ((v24 >> 4) & 2));
      *((_WORD *)v11 + 3) = *(_WORD *)((char *)&a5 + ((v24 >> 3) & 2));
      *((_WORD *)v11 + 4) = *(_WORD *)((char *)&a5 + ((v24 >> 2) & 2));
      *((_WORD *)v11 + 5) = *(_WORD *)((char *)&a5 + ((v24 >> 1) & 2));
      *((_WORD *)v11 + 6) = *(_WORD *)((char *)&a5 + (v24 & 2));
      result = *((unsigned __int16 *)&a5 + (v24 & 1));
      *((_WORD *)v11 + 7) = result;
      v11 += 16;
    }
    if ( v11 != v19 )
    {
      v25 = *v14++;
      do
      {
        v26 = v25;
        v25 *= 2;
        result = *(unsigned __int16 *)((char *)&a5 + ((v26 >> 6) & 2));
        *(_WORD *)v11 = result;
        v11 += 2;
      }
      while ( v11 != v19 );
    }
    v11 += v15;
    v14 += v17;
  }
  while ( v11 != v16 );
  return result;
}
