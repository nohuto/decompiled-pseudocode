/*
 * XREFs of ??_GInputSystem@@UEAAPEAXI@Z @ 0x180120E00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180120D38 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

InputSystem *__fastcall InputSystem::`scalar deleting destructor'(InputSystem *this, char a2)
{
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl((InputSystem *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
