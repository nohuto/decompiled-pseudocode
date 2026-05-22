/*
 * XREFs of ??_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z @ 0x1801298F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualTouchpadControllerProxy@@UEAA@XZ @ 0x1801297C4 (--1VirtualTouchpadControllerProxy@@UEAA@XZ.c)
 */

VirtualTouchpadControllerProxy *__fastcall VirtualTouchpadControllerProxy::`vector deleting destructor'(
        VirtualTouchpadControllerProxy *this,
        char a2)
{
  VirtualTouchpadControllerProxy::~VirtualTouchpadControllerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
