/*
 * XREFs of ?IsEqual@TaskViewFrame@@UEAA_NPEAUHWND__@@@Z @ 0x180787340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall TaskViewFrame::IsEqual(TaskViewFrame *this, HWND a2)
{
  __int64 v2; // rcx
  signed int v3; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  v5 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, HWND, char *))(*(_QWORD *)v2 + 168LL))(v2, a2, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return v5;
}
