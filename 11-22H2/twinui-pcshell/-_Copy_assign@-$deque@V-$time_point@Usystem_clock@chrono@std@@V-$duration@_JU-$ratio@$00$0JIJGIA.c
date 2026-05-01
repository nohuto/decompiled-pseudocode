/*
 * XREFs of ?_Copy_assign@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180032608
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x180032694 (--$_Emplace_back_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Copy_assign(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 i; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 j; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax

  v3 = a2[3];
  v4 = v3 + a2[4];
  v5 = a1[3];
  v6 = v5 + a1[4];
  for ( i = v3; ; i = v9 + 1 )
  {
    v9 = v3;
    if ( v3 == v4 )
      break;
    if ( v5 == v6 )
    {
      do
      {
        result = std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Emplace_back_internal<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
                   a1,
                   *(_QWORD *)(a2[1] + 8 * ((a2[2] - 1LL) & (i >> 1))) + 8 * (i & 1));
        ++i;
      }
      while ( i != v4 );
      return result;
    }
    v11 = v5 & 1;
    v12 = (a1[2] - 1LL) & (v5 >> 1);
    result = *(_QWORD *)(*(_QWORD *)(a2[1] + 8 * ((a2[2] - 1LL) & (v3 >> 1))) + 8 * (v3 & 1));
    ++v5;
    *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * v12) + 8 * v11) = result;
    ++v3;
  }
  for ( j = v6 - v5; j; --j )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
