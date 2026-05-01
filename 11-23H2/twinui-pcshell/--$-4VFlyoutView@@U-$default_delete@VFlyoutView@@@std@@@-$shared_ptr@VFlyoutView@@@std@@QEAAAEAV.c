/*
 * XREFs of ??$?4VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@1@@Z @ 0x1806AEBD8
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr<FlyoutView>::operator=<FlyoutView,std::default_delete<FlyoutView>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // rax
  std::_Ref_count_base *v6; // rcx

  v2 = *a2;
  if ( *a2 )
  {
    v5 = operator new(0x18uLL);
    *(_OWORD *)v5 = 0LL;
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::`vftable';
    *((_QWORD *)v5 + 2) = v2;
    *a2 = 0LL;
  }
  else
  {
    v5 = 0LL;
    v2 = 0LL;
  }
  v6 = (std::_Ref_count_base *)a1[1];
  *a1 = v2;
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
