/*
 * XREFs of ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x180669E28
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x18066B9B0 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Buy_raw@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18066D5F0 (-_Buy_raw@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<unsigned __int64>::vector<unsigned __int64>(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v6; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<unsigned __int64>::_Buy_raw();
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    a1[1] = v6 + 8 * (v5 >> 3);
  }
  return a1;
}
