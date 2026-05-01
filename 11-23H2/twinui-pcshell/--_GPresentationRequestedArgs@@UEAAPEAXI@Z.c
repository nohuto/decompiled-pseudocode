/*
 * XREFs of ??_GPresentationRequestedArgs@@UEAAPEAXI@Z @ 0x1803A55F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PresentationRequestedArgs@@UEAA@XZ @ 0x1803A54F0 (--1PresentationRequestedArgs@@UEAA@XZ.c)
 */

PresentationRequestedArgs *__fastcall PresentationRequestedArgs::`scalar deleting destructor'(
        PresentationRequestedArgs *this,
        char a2)
{
  PresentationRequestedArgs::~PresentationRequestedArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
