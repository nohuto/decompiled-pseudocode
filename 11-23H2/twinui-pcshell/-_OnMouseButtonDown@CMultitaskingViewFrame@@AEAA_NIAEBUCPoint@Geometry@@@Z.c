/*
 * XREFs of ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18056F2A0
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x18057FC14 (-GetPointerButtonForMessage@ElementHelpers@@YA-AW4PointerButton@@I@Z.c)
 */

bool __fastcall CMultitaskingViewFrame::_OnMouseButtonDown(
        HWND *this,
        unsigned int a2,
        const struct Geometry::CPoint *a3)
{
  unsigned int PointerButtonForMessage; // eax
  HWND v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+30h] [rbp-18h]

  SetCapture(this[6]);
  PointerButtonForMessage = ElementHelpers::GetPointerButtonForMessage(a2);
  v7 = this[315];
  if ( !v7 || !PointerButtonForMessage )
    return 0;
  v8 = *(_QWORD *)a3;
  v11 = 0;
  v12 = 0;
  v10 = v8;
  v13 = 4;
  return (*(__int64 (__fastcall **)(HWND, _QWORD, __int64 *))(*(_QWORD *)v7 + 192LL))(v7, PointerButtonForMessage, &v10);
}
