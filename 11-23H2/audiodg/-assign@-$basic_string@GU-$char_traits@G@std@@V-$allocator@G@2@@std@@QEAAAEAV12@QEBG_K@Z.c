/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1400383B2
 * Callers:
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x14002D300 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400382AC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x140073524 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 * Callees:
 *     memmove_0 @ 0x14002F194 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1400647CC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
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
