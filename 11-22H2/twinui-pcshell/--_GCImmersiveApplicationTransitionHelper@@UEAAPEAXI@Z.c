/*
 * XREFs of ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x1801B9C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x1801B9C5C (--1CImmersiveApplicationTransitionHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CImmersiveApplicationTransitionHelper *__fastcall CImmersiveApplicationTransitionHelper::`scalar deleting destructor'(
        CImmersiveApplicationTransitionHelper *this,
        char a2)
{
  CImmersiveApplicationTransitionHelper::~CImmersiveApplicationTransitionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
