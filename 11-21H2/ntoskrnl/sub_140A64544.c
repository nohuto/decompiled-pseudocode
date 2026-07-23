/*
 * XREFs of sub_140A64544 @ 0x140A64544
 * Callers:
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405180B8 @ 0x1405180B8 (sub_1405180B8.c)
 *     sub_14052DEFC @ 0x14052DEFC (sub_14052DEFC.c)
 *     sub_140530270 @ 0x140530270 (sub_140530270.c)
 *     sub_140A650A8 @ 0x140A650A8 (sub_140A650A8.c)
 */

__int64 __fastcall sub_140A64544(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edi
  unsigned int i; // ebx
  __int64 *v5; // r14
  __int64 j; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+38h] [rbp-A0h]
  _DWORD v15[32]; // [rsp+50h] [rbp-88h] BYREF
  __int64 *v16; // [rsp+E0h] [rbp+8h] BYREF

  memset(v15, 0, 0x78uLL);
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  v16 = 0LL;
  for ( i = 0; i < *v2; ++i )
  {
    v3 = sub_140A650A8(a1, &v2[4 * i + 2]);
    if ( v3 < 0 )
      break;
    v2 = *(unsigned int **)(a1 + 352);
  }
  if ( v3 >= 0 )
  {
    v5 = sub_1405180B8();
    for ( j = *v5; (__int64 *)j != v5; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset(&v15[2], 0, 0x70uLL);
        v7 = *(_QWORD *)(j + 24);
        v15[1] = 0;
        v15[0] = 1;
        result = sub_14052DEFC(a1, v7, v8, v9, &v16);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        sub_140530270(a1, *(_DWORD *)(j + 24), v11, v16, v12, v13, (__int64)v15, v14, 1, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
