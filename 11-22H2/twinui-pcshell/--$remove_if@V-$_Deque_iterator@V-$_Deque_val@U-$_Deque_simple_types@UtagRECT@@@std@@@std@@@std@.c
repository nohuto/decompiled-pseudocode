/*
 * XREFs of ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x180669B90
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1806689C8 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r11
  __int64 v5; // r9
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD **)a2;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v3 = (_QWORD *)*v3;
  v7 = *(_QWORD *)(a3 + 16);
  while ( v5 != v7 )
  {
    v8 = *(_DWORD **)(v3[1] + 8 * (v5 & (v3[2] - 1LL)));
    if ( (unsigned int)(v8[3] - v8[1]) < 0xC8 || (unsigned int)(v8[2] - *v8) < 0xC8 )
      break;
    ++v5;
  }
  v9 = v5;
  if ( v5 != v7 )
  {
    v10 = v5;
    while ( ++v10 != v7 )
    {
      v11 = *(_QWORD *)(v3[1] + 8 * (v10 & (v3[2] - 1LL)));
      if ( (unsigned int)(*(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 4)) >= 0xC8
        && (unsigned int)(*(_DWORD *)(v11 + 8) - *(_DWORD *)v11) >= 0xC8 )
      {
        v12 = v9++ & (v3[2] - 1LL);
        *(_OWORD *)*(_QWORD *)(v3[1] + 8 * v12) = *(_OWORD *)v11;
      }
    }
  }
  v13 = *(_QWORD **)a2;
  a1[1] = 0LL;
  *a1 = v13;
  result = a1;
  *(_QWORD *)(a2 + 16) = v9;
  a1[2] = v9;
  return result;
}
