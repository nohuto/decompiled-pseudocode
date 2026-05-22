/*
 * XREFs of ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x18001B760
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18000BEB0 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18004CB20 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18004CDE4 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState(
        ActivationWatcherBamoPrincipal *this,
        __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD); // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned __int8 v7; // di
  __int64 v8; // rcx
  char v9; // al
  _QWORD v10[10]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v11 = a2;
  v10[0] = off_1801E4650;
  v10[1] = &v11;
  v10[7] = v10;
  ActivationWatcherBamoPrincipal::find_and_return_if(this, &v13, v10);
  v3 = v13;
  if ( v13 )
  {
    v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
    v5 = v4;
    if ( v4 )
      (**v4)(v4);
    if ( v5 )
      v6 = v5[11];
    else
      v6 = 0LL;
    v7 = v6 == v11;
    ActivationControllerBamoProxy::FromCookie(&v12);
    v8 = v12;
    if ( v12 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 24LL))(v12 + 8);
      v8 = v12;
      if ( v9 != v7 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 8) + 32LL))(v12 + 8, v7);
        v8 = v12;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    v3 = v13;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
