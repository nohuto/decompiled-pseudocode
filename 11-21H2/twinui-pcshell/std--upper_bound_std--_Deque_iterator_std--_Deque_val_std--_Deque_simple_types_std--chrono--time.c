/*
 * XREFs of std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___ @ 0x18012030C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 **v4; // rdi
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int64 *v7; // rax
  unsigned __int64 v8; // r8
  _QWORD *result; // rax
  unsigned __int64 v10; // rbp

  v4 = *(__int64 ***)a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v7 = *v4;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 16) - v6;
  while ( (__int64)v8 > 0 )
  {
    v10 = v6 + (v8 >> 1);
    if ( *(_QWORD *)(*(_QWORD *)(v7[1] + 8 * ((v7[2] - 1) & (v10 >> 1)))
                   + 8LL * (((_BYTE)v6 + (unsigned __int8)(v8 >> 1)) & 1)) < *a4 )
    {
      v8 >>= 1;
    }
    else
    {
      v8 += -1LL - (v8 >> 1);
      v6 = v10 + 1;
    }
  }
  *(_QWORD *)(a2 + 16) = v6;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    if ( *v4 )
      v5 = **v4;
    *a1 = v5;
  }
  result = a1;
  a1[2] = v6;
  return result;
}
