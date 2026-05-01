/*
 * XREFs of ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x180567CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E1296 (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1802E12CC (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v5 = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 180), a2);
  if ( v3 )
    SwitchItemFilteredCollection::_ApplyFilterToItem(
      (SwitchItemFilteredCollection *)v3,
      *(struct IObservableItem **)(v2 + 24),
      0);
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v5);
}
