/*
 * XREFs of ?v_WndProc@GhostDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805E7870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

LRESULT __fastcall GhostDivider::v_WndProc(GhostDivider *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  v6 = 0LL;
  if ( a3 != 16 )
  {
    if ( a3 == 33 )
    {
      return 3LL;
    }
    else if ( a3 == 810 && a4 == 5 && lParam == 4 )
    {
      DestroyWindow(a2);
      v7 = *((_QWORD *)this + 6);
      if ( v7 )
      {
        *((_QWORD *)this + 6) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    else
    {
      return DefWindowProcW(a2, a3, a4, lParam);
    }
  }
  return v6;
}
