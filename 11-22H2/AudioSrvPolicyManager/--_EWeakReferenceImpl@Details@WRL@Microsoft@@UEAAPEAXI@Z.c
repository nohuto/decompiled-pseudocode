/*
 * XREFs of ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003D470
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18003E500 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspect.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        char a2)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 4) = -1073741823;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
