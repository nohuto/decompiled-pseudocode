/*
 * XREFs of ??_GCFrameApplicationPresentation@@UEAAPEAXI@Z @ 0x1803C9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CFrameApplicationPresentation@@UEAA@XZ @ 0x1803C9A34 (--1CFrameApplicationPresentation@@UEAA@XZ.c)
 */

CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::`scalar deleting destructor'(
        CFrameApplicationPresentation *this,
        char a2)
{
  CFrameApplicationPresentation::~CFrameApplicationPresentation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
