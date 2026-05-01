/*
 * XREFs of _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2_::_1_::dtor$0 @ 0x1802450BA
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__InitCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 120) + 10LL) )
  {
    *(_QWORD *)(a2 + 64) = 257LL;
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 120) - 96LL;
    operator delete(*(void **)(a2 + 72));
  }
}
