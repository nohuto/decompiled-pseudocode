/*
 * XREFs of std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___ @ 0x18003231C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  __int64 **result; // rax
  unsigned __int64 v9; // rbp

  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v6 = *v4;
  else
    v6 = 0LL;
  v7 = *(_QWORD *)(a3 + 16) - v5;
  while ( (__int64)v7 > 0 )
  {
    v9 = v5 + (v7 >> 1);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v9 >> 1)))
                   + 8LL * (((_BYTE)v5 + (unsigned __int8)(v7 >> 1)) & 1)) < *a4 )
    {
      v7 >>= 1;
    }
    else
    {
      v7 += -1LL - (v7 >> 1);
      v5 = v9 + 1;
    }
  }
  a1[1] = 0LL;
  result = a1;
  *(_QWORD *)(a2 + 16) = v5;
  *a1 = v4;
  a1[2] = (__int64 *)v5;
  return result;
}
