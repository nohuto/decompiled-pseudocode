/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2_::_1_::dtor$0 @ 0x180225E0A
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 136) + 10LL) )
  {
    *(_QWORD *)(a2 + 80) = 153LL;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 136) - 96LL;
    operator delete(*(void **)(a2 + 88));
  }
}
