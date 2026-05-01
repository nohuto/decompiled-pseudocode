/*
 * XREFs of ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18060B350
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18060B7D4 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1806125A8 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::AddVelocityToHistory(VirtualDesktopGestureContext *this, int a2)
{
  ULONGLONG TickCount64; // rax
  __int64 i; // r9
  unsigned __int64 v6; // rcx

  TickCount64 = GetTickCount64();
  for ( i = *((_QWORD *)this + 21); TickCount64 > i + 10; i = *((_QWORD *)this + 21) )
  {
    v6 = (*((int *)this + 41) + 1LL) % 0xFuLL;
    *((_QWORD *)this + 21) = i + 10;
    *((_DWORD *)this + 41) = v6;
    *((_DWORD *)this + (int)v6 + 26) = a2;
  }
  *((_DWORD *)this + *((int *)this + 41) + 26) = a2;
}
