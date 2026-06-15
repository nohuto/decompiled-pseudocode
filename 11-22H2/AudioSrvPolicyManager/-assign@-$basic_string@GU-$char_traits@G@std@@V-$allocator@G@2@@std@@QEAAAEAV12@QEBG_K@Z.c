/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180014360
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x1800023D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18001429C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x1800204F8 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F70 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rsi
  __int64 v5; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v4 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v5 = 2 * a3;
  memmove_0(v4, a2, 2 * a3);
  *(_WORD *)&v4[v5] = 0;
  return a1;
}
