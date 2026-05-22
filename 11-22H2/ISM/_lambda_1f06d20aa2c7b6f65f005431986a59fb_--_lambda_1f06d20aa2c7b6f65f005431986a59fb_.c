/*
 * XREFs of _lambda_1f06d20aa2c7b6f65f005431986a59fb_::_lambda_1f06d20aa2c7b6f65f005431986a59fb_ @ 0x180073DA8
 * Callers:
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180165E98 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_1f06d20aa2c7b6f65f005431986a59fb_::_lambda_1f06d20aa2c7b6f65f005431986a59fb_(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD))
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (**v3)(v3);
  return a1;
}
