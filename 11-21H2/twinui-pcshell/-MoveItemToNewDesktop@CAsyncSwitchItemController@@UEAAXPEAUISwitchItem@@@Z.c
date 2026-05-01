/*
 * XREFs of ?MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C61E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1804C57F8 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 */

void __fastcall CAsyncSwitchItemController::MoveItemToNewDesktop(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2)
{
  struct ISwitchItem *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v3);
  AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
    (int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2,
    (__int64) ISwitchItemController::`vcall'{80,{flat}},
    (__int64 *)&v3);
}
