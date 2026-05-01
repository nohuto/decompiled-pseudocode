/*
 * XREFs of ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x1801C4140
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 * Callees:
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??1?$_Tidy_guard@V?$vector@HV?$allocator@H@std@@@std@@@std@@QEAA@XZ @ 0x180560190 (--1-$_Tidy_guard@V-$vector@HV-$allocator@H@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x180560B2C (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<int>::vector<int>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  const void *v5; // r14
  signed __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(const void **)a2;
  *a1 = 0LL;
  v6 = v3 - (_QWORD)v5;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = v6 >> 2;
  if ( v6 >> 2 )
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<Geometry::CRect>::_Xlength();
    std::vector<int>::_Buy_raw(a1, v6 >> 2);
    v8 = *a1;
    memmove_0((void *)*a1, v5, v6);
    v10 = 0LL;
    a1[1] = v8 + 4 * v7;
    std::_Tidy_guard<std::vector<int>>::~_Tidy_guard<std::vector<int>>(&v10);
  }
  return a1;
}
