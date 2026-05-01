/*
 * XREFs of ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801B8660
 * Callers:
 *     <none>
 * Callees:
 *     ??1ListenerWindow@@UEAA@XZ @ 0x1801B869C (--1ListenerWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ListenerWindow *__fastcall winrt::impl::heap_implements<ListenerWindow>::`vector deleting destructor'(
        ListenerWindow *a1,
        char a2)
{
  ListenerWindow::~ListenerWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x38uLL);
  return a1;
}
