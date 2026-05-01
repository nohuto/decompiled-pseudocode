/*
 * XREFs of ??$?0V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A108
 * Callers:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180433370 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEAA@AEBV0@@Z @ 0x18042CFE0 (--0_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler(
        _QWORD *a1,
        const struct _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *a2)
{
  _QWORD *v4; // rbx
  const struct _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v9 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_(
           (_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *)&v9,
           a2);
    *v4 = &Platform::Details::__abi_FunctorCapture<_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_,void,>::`vftable';
    _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_(
      (_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *)(a1 + 6),
      v5);
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      *(_QWORD *)v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  a1[37] = v4;
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
