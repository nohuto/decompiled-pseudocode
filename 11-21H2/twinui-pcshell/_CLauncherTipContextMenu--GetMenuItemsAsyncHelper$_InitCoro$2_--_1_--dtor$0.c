/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2_::_1_::dtor$0 @ 0x1801D8B7F
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__InitCoro_2_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 137LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 88) - 112LL;
    operator delete(*(void **)(a2 + 40));
  }
}
