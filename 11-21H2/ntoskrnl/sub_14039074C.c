/*
 * XREFs of sub_14039074C @ 0x14039074C
 * Callers:
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14039074C(__int64 a1, unsigned __int16 **a2, unsigned int a3, void *a4)
{
  __int64 v4; // rbx
  unsigned __int16 **v8; // r11
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // r10d
  _DWORD *v15; // rdx
  unsigned int v16; // r9d
  int i; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // ebx
  unsigned __int16 *v21; // rdx
  _QWORD v22[40]; // [rsp+20h] [rbp-168h] BYREF

  v4 = a3;
  memset(v22, 0, sizeof(v22));
  v8 = &a2[v4];
  if ( a2 < v8 )
  {
    v9 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v9 )
        v10 = 0LL;
      else
        v10 = **a2 >> 13;
      v11 = (unsigned int)v10;
      v12 = 5 * v10;
      v13 = LODWORD(v22[v12]);
      if ( (unsigned int)v13 < 4 )
      {
        v21 = *a2;
        LODWORD(v22[v12]) = v13 + 1;
        HIDWORD(v22[v12]) += *v21 & 0x1FFF;
        v22[5 * v11 + 1 + v13] = v21;
      }
      ++a2;
    }
    while ( a2 < v8 );
  }
  v14 = -1;
  v15 = (_DWORD *)&v22[35] + 1;
  v16 = 0;
  for ( i = 7; i >= 0; --i )
  {
    v18 = *(v15 - 1);
    if ( v18 > 1 && v16 < v18 * *(_DWORD *)(a1 + 816) - *v15 )
    {
      v16 = v18 * *(_DWORD *)(a1 + 816) - *v15;
      v14 = i;
    }
    v15 -= 10;
  }
  v19 = v22[5 * v14];
  if ( v19 > 4 )
    v19 = 4;
  memmove(a4, &v22[5 * v14 + 1], 8LL * v19);
  return v19;
}
