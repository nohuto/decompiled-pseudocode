/*
 * XREFs of ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x1806FC4D8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1806F78EC (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

__int64 __fastcall std::vector<winrt::hstring>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 **v6; // rcx
  __int64 result; // rax

  v6 = *(volatile signed __int32 ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v6, *(volatile signed __int32 ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
