/*
 * XREFs of ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x18057B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CScrollViewerHost@@UEAA@XZ @ 0x18057B048 (--1CScrollViewerHost@@UEAA@XZ.c)
 */

CScrollViewerHost *__fastcall CScrollViewerHost::`vector deleting destructor'(CScrollViewerHost *this, char a2)
{
  CScrollViewerHost::~CScrollViewerHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
