/*
 * XREFs of sub_140532C98 @ 0x140532C98
 * Callers:
 *     sub_140A64A00 @ 0x140A64A00 (sub_140A64A00.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140530474 @ 0x140530474 (sub_140530474.c)
 *     sub_1405330B8 @ 0x1405330B8 (sub_1405330B8.c)
 */

__int64 __fastcall sub_140532C98(__int64 a1)
{
  int v2; // r9d
  _DWORD *v3; // rcx
  int v4; // esi
  int v5; // ebx
  __int64 i; // rbx
  int v7; // edx
  _DWORD v9[32]; // [rsp+50h] [rbp-88h] BYREF

  memset(v9, 0, 0x78uLL);
  v3 = *(_DWORD **)(a1 + 216);
  v4 = 0;
  v5 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      v4 = sub_140530474(a1, (__int64)&v3[4 * v5 + 2]);
      if ( v4 < 0 )
        break;
      v3 = *(_DWORD **)(a1 + 216);
      if ( (unsigned int)++v5 >= *v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = qword_140C4BCC0; (__int64 *)i != &qword_140C4BCC0; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 160) )
      {
        memset(&v9[1], 0, 116);
        LOBYTE(v2) = 1;
        v7 = *(_DWORD *)(i + 24);
        v9[0] = 1;
        sub_1405330B8(a1, v7, 0, v2, (__int64)v9, 1, 1);
      }
    }
  }
  return (unsigned int)v4;
}
