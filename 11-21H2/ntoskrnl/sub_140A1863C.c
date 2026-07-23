/*
 * XREFs of sub_140A1863C @ 0x140A1863C
 * Callers:
 *     sub_140A18724 @ 0x140A18724 (sub_140A18724.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A1863C(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  unsigned __int64 v6; // r10
  _DWORD *v7; // rcx
  unsigned __int64 i; // rdx
  unsigned int v9; // r8d
  char v10; // al

  v3 = 512;
  v4 = 4096;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 >= 0x1000 )
  {
    if ( v6 < 0x1200 )
      v3 = v6 - 4096;
  }
  else
  {
    v3 = 0;
    v4 = *(_QWORD *)(a2 + 16);
  }
  if ( v4 >= 4 )
  {
    v7 = (_DWORD *)(*(_QWORD *)(a2 + 24) + v3);
    for ( i = 0LL; i < (unsigned __int64)v4 >> 2; ++i )
    {
      v9 = *v7++ + v5;
      v10 = v9;
      v5 = v9 >> 1;
      if ( (v10 & 1) != 0 )
        v5 |= 0x80000000;
    }
  }
  *a1 = v5;
  return 0LL;
}
