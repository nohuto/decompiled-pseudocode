/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_80aa732c9f0abca8142808a505c7029f__0_ @ 0x18001AD5C
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E710 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_80aa732c9f0abca8142808a505c7029f__0_(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_18004D7A8;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 56) = a1;
  v3 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
