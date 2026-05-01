/*
 * XREFs of ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x180500590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804FFF70 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 */

CAutoAppTransitionRequest *__fastcall CAutoAppTransitionRequest::`scalar deleting destructor'(
        CAutoAppTransitionRequest *this,
        char a2)
{
  CAutoAppTransitionRequest::~CAutoAppTransitionRequest(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
