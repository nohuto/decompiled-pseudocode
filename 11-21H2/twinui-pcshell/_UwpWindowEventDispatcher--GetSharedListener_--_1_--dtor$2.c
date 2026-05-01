/*
 * XREFs of _UwpWindowEventDispatcher::GetSharedListener_::_1_::dtor$2 @ 0x1803EE2B4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 */

void __fastcall UwpWindowEventDispatcher::GetSharedListener_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>(*(_QWORD *)(a2 + 104));
  }
}
