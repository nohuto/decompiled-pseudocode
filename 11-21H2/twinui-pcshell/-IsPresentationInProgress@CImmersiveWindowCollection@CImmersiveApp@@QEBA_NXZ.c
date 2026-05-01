/*
 * XREFs of ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800735D4
 * Callers:
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x1800734F8 (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  _QWORD *v1; // rbx
  char v2; // di
  _QWORD *v3; // rsi

  v1 = (_QWORD *)*((_QWORD *)this + 21);
  v2 = 0;
  v3 = &v1[*((_QWORD *)this + 22)];
  while ( v1 != v3 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 3
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 1 )
    {
      return 1;
    }
    ++v1;
  }
  return v2;
}
