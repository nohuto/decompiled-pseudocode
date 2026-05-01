/*
 * XREFs of ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180029760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CTaskWindow::IsPresentationReady(CTaskWindow *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v2 = 0;
  if ( !v1 )
    return 1;
  v4 = 0;
  v5 = 0LL;
  (**v1)(v1, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v5);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, &v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  if ( v4 )
    return 1;
  return v2;
}
