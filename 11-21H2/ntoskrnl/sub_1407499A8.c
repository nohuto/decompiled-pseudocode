/*
 * XREFs of sub_1407499A8 @ 0x1407499A8
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140747C74 @ 0x140747C74 (sub_140747C74.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407499A8(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int128 *v4; // rbx
  unsigned int v5; // esi
  _WORD v7[36]; // [rsp+30h] [rbp-58h] BYREF
  __int128 *v8; // [rsp+90h] [rbp+8h] BYREF

  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(a1 + 32);
  v7[0] = 5403;
  v3 = sub_14074CA9C(v2, (unsigned int)v7, -1073741637, 0, (__int64)&v8);
  v4 = v8;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_WORD *)(a1 + 464) = sub_140747C74(v8);
    *(_DWORD *)(a1 + 456) = *((_DWORD *)v4 + 4);
    *(_DWORD *)(a1 + 460) = *((_DWORD *)v4 + 5);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  return v5;
}
