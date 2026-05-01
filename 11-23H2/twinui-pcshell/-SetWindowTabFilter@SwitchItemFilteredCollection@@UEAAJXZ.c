/*
 * XREFs of ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x180568230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x180568608 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::SetWindowTabFilter(SwitchItemFilteredCollection *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 112) = 1;
  v1 = SwitchItemFilteredCollection::_ApplyFilterToAllItems((SwitchItemFilteredCollection *)((char *)this - 168));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
