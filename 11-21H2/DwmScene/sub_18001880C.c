/*
 * XREFs of sub_18001880C @ 0x18001880C
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_1800184C0 @ 0x1800184C0 (sub_1800184C0.c)
 */

__int64 __fastcall sub_18001880C(__int64 a1, __int64 a2)
{
  void *v4; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v4 = *(void **)(a2 + 48);
  v5 = *(_QWORD *)(a2 + 56);
  if ( v4 != (void *)v5 )
  {
    v6 = (v5 - (__int64)v4) >> 2;
    if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
    v7 = 4 * v6;
    v8 = sub_180011088(v7);
    *(_QWORD *)(a1 + 48) = v8;
    *(_QWORD *)(a1 + 56) = v8;
    *(_QWORD *)(a1 + 64) = v7 + v8;
    *(_QWORD *)(a1 + 56) = sub_1800184C0(v4, v5, *(char **)(a1 + 48));
  }
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v9 = *(_QWORD *)(a2 + 80);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return a1;
}
