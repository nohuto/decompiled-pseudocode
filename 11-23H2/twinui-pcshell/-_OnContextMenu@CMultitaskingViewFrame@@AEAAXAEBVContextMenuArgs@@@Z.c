/*
 * XREFs of ?_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z @ 0x18056F160
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::_OnContextMenu(CMultitaskingViewFrame *this, const struct ContextMenuArgs *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 315);
  if ( v4 && (*(_DWORD *)a2 != -1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 304LL))(v4)) )
    (*(void (__fastcall **)(_QWORD, const struct ContextMenuArgs *))(**((_QWORD **)this + 315) + 256LL))(
      *((_QWORD *)this + 315),
      a2);
}
