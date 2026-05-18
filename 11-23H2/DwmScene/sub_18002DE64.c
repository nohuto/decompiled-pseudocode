/*
 * XREFs of sub_18002DE64 @ 0x18002DE64
 * Callers:
 *     sub_18002DE64 @ 0x18002DE64 (sub_18002DE64.c)
 *     sub_18002DF34 @ 0x18002DF34 (sub_18002DF34.c)
 * Callees:
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002DE64 @ 0x18002DE64 (sub_18002DE64.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002DE64(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax

  sub_18002A37C(a1 + 16);
  v6 = *a3;
  sub_18003E330(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  i = *(_QWORD *)(v6 + 384);
  while ( v7 != i )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_7;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_18003E330(*a3);
  v7 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v7; i += 16LL )
LABEL_7:
    result = sub_18002DE64(a1, a2, i);
  return result;
}
