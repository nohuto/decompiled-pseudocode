/*
 * XREFs of _CVirtualDesktopManager::SwitchContextForVDAnimation$_InitCoro$2_::_1_::dtor$0 @ 0x1802159C7
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CVirtualDesktopManager::SwitchContextForVDAnimation__InitCoro_2_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 121LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 88) - 96LL;
    operator delete(*(void **)(a2 + 40));
  }
}
