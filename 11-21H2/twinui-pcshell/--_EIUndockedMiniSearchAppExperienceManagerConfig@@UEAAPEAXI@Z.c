/*
 * XREFs of ??_EIUndockedMiniSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803A12A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

IUndockedMiniSearchAppExperienceManagerConfig *__fastcall IUndockedMiniSearchAppExperienceManagerConfig::`vector deleting destructor'(
        IUndockedMiniSearchAppExperienceManagerConfig *this,
        char a2)
{
  *(_QWORD *)this = &IUndockedMiniSearchAppExperienceManagerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
