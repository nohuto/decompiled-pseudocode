/*
 * XREFs of sub_180030408 @ 0x180030408
 * Callers:
 *     sub_180030408 @ 0x180030408 (sub_180030408.c)
 *     sub_1800304D8 @ 0x1800304D8 (sub_1800304D8.c)
 * Callees:
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180030408 @ 0x180030408 (sub_180030408.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030408(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 i; // rbx

  sub_18002C73C(a1 + 16);
  v6 = *a3;
  sub_180043668(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  v8 = *(_QWORD *)(v6 + 384);
  while ( v7 != v8 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      break;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_180043668(*a3);
  v12 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v12; i += 16LL )
    result = sub_180030408(a1, a2, i);
  return result;
}
