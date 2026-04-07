/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1800F9700
 * Callers:
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800F9734 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800FBB18 (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D3BE0 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate(a1, a2, 0LL);
  return a1;
}
