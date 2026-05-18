/*
 * XREFs of ?clear@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAXXZ @ 0x1800278B8
 * Callers:
 *     ?OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026E80 (-OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x180024B64 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 */

__int64 __fastcall std::vector<std::function<void (void)>>::clear(__int64 *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<std::function<void (void)>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
