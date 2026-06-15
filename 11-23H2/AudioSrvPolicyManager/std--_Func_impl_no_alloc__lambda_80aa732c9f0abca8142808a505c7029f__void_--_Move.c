/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Move @ 0x18001EF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_18004D7A8;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
  return a2;
}
