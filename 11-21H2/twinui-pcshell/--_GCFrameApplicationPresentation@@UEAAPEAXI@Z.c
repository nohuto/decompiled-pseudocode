/*
 * XREFs of ??_GCFrameApplicationPresentation@@UEAAPEAXI@Z @ 0x18003C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFrameApplicationPresentation@@UEAA@XZ @ 0x18003C91C (--1CFrameApplicationPresentation@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::`scalar deleting destructor'(
        CFrameApplicationPresentation *this,
        char a2)
{
  CFrameApplicationPresentation::~CFrameApplicationPresentation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x288uLL);
  return this;
}
