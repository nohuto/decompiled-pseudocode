/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001BC28
 * Callers:
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x1800189E0 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18001921C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1800EF0B8 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18001BC90 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x180066364 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v5 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v6 = 2 * a3;
  memmove_0(v5, a2, 2 * a3);
  *(_WORD *)&v5[v6] = 0;
  return a1;
}
