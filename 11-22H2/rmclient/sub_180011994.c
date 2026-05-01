/*
 * XREFs of sub_180011994 @ 0x180011994
 * Callers:
 *     sub_1800118FC @ 0x1800118FC (sub_1800118FC.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 */

char __fastcall sub_180011994(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  char *v4; // rax
  char *v5; // rsi
  rsize_t v7; // r14
  void *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 < a2 )
  {
    v9 = 0;
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    LastError = GetLastError();
    v4 = (char *)sub_18000F5AC(0, v3);
    v5 = v4;
    if ( !v4 )
    {
      sub_18000D168((__int64)&v9);
      return 0;
    }
    v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    memcpy_s(v4, v3, *(const void *const *)a1, v7);
    v8 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v5;
    if ( v8 )
      sub_18000DD90(v8);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = &v5[v7];
    *(_QWORD *)(a1 + 16) = &v5[v3];
    sub_18000D168((__int64)&v9);
  }
  return 1;
}
