/*
 * XREFs of sub_180088FB8 @ 0x180088FB8
 * Callers:
 *     sub_1800890B4 @ 0x1800890B4 (sub_1800890B4.c)
 *     sub_18008CBE4 @ 0x18008CBE4 (sub_18008CBE4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180088FB8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v6);
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
