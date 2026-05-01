/*
 * XREFs of ??_GCImmersiveShellComponent@@UEAAPEAXI@Z @ 0x180392BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CImmersiveShellComponent *__fastcall CImmersiveShellComponent::`scalar deleting destructor'(
        CImmersiveShellComponent *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
