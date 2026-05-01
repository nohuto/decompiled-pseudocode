/*
 * XREFs of ?s_WndProc@CDropFeedback@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1805EBBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_WndProc@CDropFeedback@@AEAA_JI_K_J@Z @ 0x1805EBAA0 (-_WndProc@CDropFeedback@@AEAA_JI_K_J@Z.c)
 */

LRESULT __fastcall CDropFeedback::s_WndProc(HWND hWnd, UINT a2, WPARAM a3, LONG_PTR *a4)
{
  CDropFeedback *WindowLongPtrW; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rax

  WindowLongPtrW = (CDropFeedback *)GetWindowLongPtrW(hWnd, 0);
  if ( a2 == 129 )
  {
    v9 = (__int64 *)*a4;
    SetWindowLongPtrW(hWnd, 0, *a4);
    v10 = *v9;
    v9[8] = (__int64)hWnd;
    (*(void (__fastcall **)(__int64 *))(v10 + 8))(v9);
  }
  else if ( a2 == 130 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    *((_QWORD *)WindowLongPtrW + 8) = 0LL;
    if ( WindowLongPtrW )
      (*(void (__fastcall **)(CDropFeedback *))(*(_QWORD *)WindowLongPtrW + 16LL))(WindowLongPtrW);
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
  }
  if ( WindowLongPtrW )
    return CDropFeedback::_WndProc(WindowLongPtrW, a2, a3, (LPARAM)a4);
  return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
