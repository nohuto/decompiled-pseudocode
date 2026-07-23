/*
 * XREFs of sub_1409F1FF4 @ 0x1409F1FF4
 * Callers:
 *     sub_1409F1A68 @ 0x1409F1A68 (sub_1409F1A68.c)
 *     sub_1409F3C74 @ 0x1409F3C74 (sub_1409F3C74.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140883C0C @ 0x140883C0C (sub_140883C0C.c)
 *     sub_1409F1878 @ 0x1409F1878 (sub_1409F1878.c)
 */

__int64 __fastcall sub_1409F1FF4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // edx

  v6 = sub_140883C0C(a1, a2);
  if ( v6 < *(_DWORD *)(a1 + 32) )
  {
    v7 = a2 + a3;
    do
    {
      v8 = (_QWORD *)(16LL * v6 + *(_QWORD *)(a1 + 24));
      v9 = v8[1];
      if ( *v8 - *(_QWORD *)(v9 + 40) >= v7 )
        break;
      sub_1409F1878(*(_QWORD *)a1, v9);
      v11 = *(_DWORD *)(a1 + 32);
      if ( v11 > v6 + 1 )
      {
        memmove((void *)v10, (const void *)(v10 + 16), 16LL * (v11 - v6 - 1));
        v11 = *(_DWORD *)(a1 + 32);
      }
      *(_DWORD *)(a1 + 32) = v11 - 1;
    }
    while ( v6 < v11 - 1 );
  }
  return v6;
}
