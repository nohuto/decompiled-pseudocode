/*
 * XREFs of sub_14099DAA8 @ 0x14099DAA8
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14099788C @ 0x14099788C (sub_14099788C.c)
 */

void sub_14099DAA8()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140C232CC;
  v1 = 0LL;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  v2 = 2LL;
  v3 = off_140C03040 + 5;
  do
  {
    v4 = *v3 | v3[534];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 & 0x3CFFFFD8030FC0LL;
  sub_14099788C(
    &v5,
    (__int64)off_140C03040 + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFEF50uLL) + 4312,
    (__int64)&off_140C03040[534 * v0 + 5]);
}
