/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180020390
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18002029C (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180021218 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp *)((char *)this + 176), a2, &v4) >= 0 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 43) + 8 * v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  }
  CImmersiveApp::_UpdateWindowTitleAndButtons((int (__fastcall ***)(CImmersiveApp *, GUID *, __int64 *))this - 14);
  CImmersiveApp::_QueuePresentationChangeNotification((__int64)this - 112, 2);
}
