/*
 * XREFs of ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1803AFE60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803AFC4C (--1CImmersiveShellCreationBehavior@@EEAA@XZ.c)
 */

CImmersiveShellCreationBehavior *__fastcall CImmersiveShellCreationBehavior::`scalar deleting destructor'(
        CImmersiveShellCreationBehavior *this,
        char a2)
{
  CImmersiveShellCreationBehavior::~CImmersiveShellCreationBehavior(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
