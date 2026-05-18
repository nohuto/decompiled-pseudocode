/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x180024B64
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@YAPEAV?$function@$$A6AXXZ@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x180025088 (--$_Uninitialized_move@PEAV-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@s.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXXZ@2@_K1@Z @ 0x1800274E8 (-_Change_array@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std.c)
 *     ?_Tidy@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXXZ @ 0x180027784 (-_Tidy@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@AEAAXX.c)
 *     ?clear@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAXXZ @ 0x1800278B8 (-clear@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@QEAAXX.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::function<void (void)>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::_Func_class<void,>::_Tidy(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
