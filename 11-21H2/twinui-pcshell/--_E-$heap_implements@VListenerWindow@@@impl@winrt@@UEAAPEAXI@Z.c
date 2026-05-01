/*
 * XREFs of ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800CC890
 * Callers:
 *     <none>
 * Callees:
 *     ??1ListenerWindow@@UEAA@XZ @ 0x1800CC8CC (--1ListenerWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
