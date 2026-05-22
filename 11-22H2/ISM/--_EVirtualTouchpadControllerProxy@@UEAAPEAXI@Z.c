/*
 * XREFs of ??_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z @ 0x180152300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualTouchpadControllerProxy@@UEAA@XZ @ 0x1801521D4 (--1VirtualTouchpadControllerProxy@@UEAA@XZ.c)
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
