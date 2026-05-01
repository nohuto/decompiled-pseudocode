/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1803D9A60
 * Callers:
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D8EB4 (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18022D3D2 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 8);
  if ( (__int64 *)(a3 + 8) != v3 )
  {
    do
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v4 - 1, v4);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
