/*
 * XREFs of ?_Show@CDragVisual@@AEAAXXZ @ 0x180535814
 * Callers:
 *     ?Show@CDragVisual@@UEAAXXZ @ 0x180533DC0 (-Show@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDragVisual::_Show(HWND *this)
{
  __int64 v2; // r8
  int v3; // eax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  if ( !IsWindowVisible(this[19]) )
  {
    ShowWindow(this[19], 8);
    v3 = *((_DWORD *)this + 37);
    if ( v3 == 1 || v3 == 4 )
      (*((void (__fastcall **)(char *, _QWORD))this[3] + 10))((char *)this + 24, 0LL);
    if ( *((_BYTE *)this + 272) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DragVisual_Show_Info, v2, 1u, &v4);
    }
  }
}
