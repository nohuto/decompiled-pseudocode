/*
 * XREFs of ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x18017CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x18017CCCC (--1CImmersiveApplicationTransitionHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
