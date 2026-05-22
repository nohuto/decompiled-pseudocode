/*
 * XREFs of ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x180152B2C
 * Callers:
 *     ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180152C10 (-RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD))
{
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( (__int64 (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = (__int64 (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
