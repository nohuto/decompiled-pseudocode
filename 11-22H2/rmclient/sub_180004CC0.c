/*
 * XREFs of sub_180004CC0 @ 0x180004CC0
 * Callers:
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 * Callees:
 *     unknown_libname_1 @ 0x180009CF0 (unknown_libname_1.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000BAF0 (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_180019200 @ 0x180019200 (sub_180019200.c)
 */

__int64 __fastcall sub_180004CC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new(v6, (const struct std::nothrow_t *)&unk_180026378);
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = a2;
    *v7 = a2;
    for ( i = v7 + 1; v9; --v9 )
      unknown_libname_1(i++);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v8;
  v11 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v11 = -1LL;
  v12 = operator new(v11, (const struct std::nothrow_t *)&unk_180026378);
  v13 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = v12;
  if ( v13 )
  {
    if ( v12 )
    {
      *(_QWORD *)(a1 + 24) = v13;
      return 0LL;
    }
    sub_180019200();
  }
  j_free(*(void **)(a1 + 32));
  result = 2147942414LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
