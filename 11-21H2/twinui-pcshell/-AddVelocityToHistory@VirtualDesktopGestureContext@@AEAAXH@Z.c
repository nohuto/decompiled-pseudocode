/*
 * XREFs of ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18054FC24
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18054FF7C (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180556400 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::AddVelocityToHistory(VirtualDesktopGestureContext *this, int a2)
{
  ULONGLONG i; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  for ( i = GetTickCount64(); i > *((_QWORD *)this + 22) + 10LL; *((_DWORD *)this + (int)v6 + 28) = a2 )
  {
    v5 = *((int *)this + 43);
    *((_QWORD *)this + 22) += 10LL;
    v6 = (v5 + 1) % 0xFuLL;
    *((_DWORD *)this + 43) = v6;
  }
  *((_DWORD *)this + *((int *)this + 43) + 28) = a2;
}
