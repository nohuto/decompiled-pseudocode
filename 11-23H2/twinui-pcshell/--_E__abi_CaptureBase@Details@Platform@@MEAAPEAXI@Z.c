/*
 * XREFs of ??_E__abi_CaptureBase@Details@Platform@@MEAAPEAXI@Z @ 0x18076AC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

Platform::Details::__abi_CaptureBase *__fastcall Platform::Details::__abi_CaptureBase::`vector deleting destructor'(
        Platform::Details::__abi_CaptureBase *this,
        char a2)
{
  *(_QWORD *)this = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
