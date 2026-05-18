/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180025D24
 * Callers:
 *     ?Notify_RenderTargetChanged@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002C958 (-Notify_RenderTargetChanged@RenderOutput@Engine@Spectre@@IEAAXXZ.c)
 *     ?Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E0080 (-Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ.c)
 *     ?SetCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0380 (-SetCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHV-$function@$$A6AXXZ@.c)
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
