/*
 * XREFs of ?_Copy_assign@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1801CE650
 * Callers:
 *     ??4?$vector@HV?$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C4838 (--4-$vector@HV-$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801CE468 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

char *__fastcall std::vector<int>::_Copy_assign(char **a1, __int64 a2)
{
  const void *v3; // rbp
  char *v4; // rdi
  signed __int64 v5; // rsi
  char *result; // rax

  v3 = *(const void **)a2;
  v4 = *a1;
  v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  if ( v5 >> 2 > (unsigned __int64)((a1[2] - *a1) >> 2) )
  {
    std::vector<int>::_Clear_and_reserve_geometric((__int64)a1, v5 >> 2);
    v4 = *a1;
  }
  memmove_0(v4, v3, v5);
  result = &v4[v5];
  a1[1] = &v4[v5];
  return result;
}
