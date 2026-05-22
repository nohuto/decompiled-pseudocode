/*
 * XREFs of ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x180026614
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x180026A30 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800267E0 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180059300 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
  char v7; // di
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  _QWORD v11[9]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+98h] [rbp+28h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  v12 = a2;
  v11[0] = off_1802035C0;
  v11[1] = &v12;
  v11[7] = v11;
  ActivationWatcherBamoPrincipal::find_and_return_if(this, &v14, v11);
  v3 = v14;
  if ( v14 )
  {
    v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
    v5 = v4;
    if ( v4 )
      (**v4)(v4);
    if ( v5 )
      v6 = v5[11];
    else
      v6 = 0LL;
    v7 = v6 == v12;
    ActivationControllerBamoProxy::FromCookie(&v13);
    v8 = v13;
    if ( v13 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 24LL))(v13 + 8);
      v8 = v13;
      if ( v9 != v7 )
      {
        LOBYTE(v10) = v7;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13 + 8) + 32LL))(v13 + 8, v10);
        v8 = v13;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    v3 = v14;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
