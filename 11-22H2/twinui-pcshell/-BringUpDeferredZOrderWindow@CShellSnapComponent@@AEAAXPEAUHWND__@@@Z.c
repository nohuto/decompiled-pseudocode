/*
 * XREFs of ?BringUpDeferredZOrderWindow@CShellSnapComponent@@AEAAXPEAUHWND__@@@Z @ 0x18065FD5C
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CShellSnapComponent::BringUpDeferredZOrderWindow(CShellSnapComponent *this, HWND a2)
{
  _QWORD *i; // rbx

  if ( a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 95); i != *((_QWORD **)this + 96); i += 2 )
    {
      if ( (HWND)*i == a2 )
      {
        if ( a2 != GetForegroundWindow() )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, int))(**((_QWORD **)this + 49) + 24LL))(
            *((_QWORD *)this + 49),
            *i,
            i[1],
            0LL,
            3,
            1,
            2);
        memmove_0(i, i + 2, *((_QWORD *)this + 96) - (_QWORD)(i + 2));
        *((_QWORD *)this + 96) -= 16LL;
        return;
      }
    }
  }
}
