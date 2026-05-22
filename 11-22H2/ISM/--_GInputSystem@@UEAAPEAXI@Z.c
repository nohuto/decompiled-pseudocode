/*
 * XREFs of ??_GInputSystem@@UEAAPEAXI@Z @ 0x18014A610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18014A53C (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

InputSystem *__fastcall InputSystem::`scalar deleting destructor'(InputSystem *this, char a2)
{
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl((InputSystem *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
