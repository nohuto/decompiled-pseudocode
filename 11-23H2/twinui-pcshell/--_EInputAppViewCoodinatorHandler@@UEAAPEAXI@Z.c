/*
 * XREFs of ??_EInputAppViewCoodinatorHandler@@UEAAPEAXI@Z @ 0x18050D490
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VInputAppViewCoodinatorHandler@@@std@@EEAAXXZ @ 0x18051C680 (-_Destroy@-$_Ref_count_obj2@VInputAppViewCoodinatorHandler@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1InputAppViewCoodinatorHandler@@UEAA@XZ @ 0x18050C3D4 (--1InputAppViewCoodinatorHandler@@UEAA@XZ.c)
 */

InputAppViewCoodinatorHandler *__fastcall InputAppViewCoodinatorHandler::`vector deleting destructor'(
        InputAppViewCoodinatorHandler *this,
        char a2)
{
  InputAppViewCoodinatorHandler::~InputAppViewCoodinatorHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
