/*
 * XREFs of ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1803106F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::HandleWindowReplaced(RTL_SRWLOCK *this, HWND a2, HWND a3)
{
  RTL_SRWLOCK *v5; // rbx
  _QWORD *Ptr; // rdi
  _QWORD *v7; // rbp
  HWND v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h]

  v5 = this + 66;
  v10 = this + 66;
  AcquireSRWLockShared(this + 66);
  Ptr = this[67].Ptr;
  v7 = &Ptr[(__int64)this[68].Ptr];
  while ( Ptr != v7 )
  {
    if ( (*(int (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)*Ptr + 72LL))(*Ptr, &v9) >= 0 && v9 == a3 )
    {
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (int (__fastcall ***)(_QWORD, GUID *, WINBOOL *))*Ptr,
        0xCu,
        0LL);
      break;
    }
    ++Ptr;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
