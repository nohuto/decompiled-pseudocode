/*
 * XREFs of ??_GIUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x18038E870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

IUndockedSearchAppExperienceManagerConfig *__fastcall IUndockedSearchAppExperienceManagerConfig::`scalar deleting destructor'(
        IUndockedSearchAppExperienceManagerConfig *this,
        char a2)
{
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
