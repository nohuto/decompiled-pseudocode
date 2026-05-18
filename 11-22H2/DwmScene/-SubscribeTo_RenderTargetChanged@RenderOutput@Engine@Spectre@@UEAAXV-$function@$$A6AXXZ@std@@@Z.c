/*
 * XREFs of ?SubscribeTo_RenderTargetChanged@RenderOutput@Engine@Spectre@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x18002CC20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18001D074 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x180024B9C (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::RenderOutput::SubscribeTo_RenderTargetChanged(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx

  v4 = a1 + 16;
  if ( a1[17] == a1[18] )
  {
    std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)> const &>(v4, a1[17], a2);
  }
  else
  {
    std::function<void (void)>::function<void (void)>(a1[17], a2);
    a1[17] += 64LL;
  }
  return std::_Func_class<void,>::_Tidy(a2, v5);
}
