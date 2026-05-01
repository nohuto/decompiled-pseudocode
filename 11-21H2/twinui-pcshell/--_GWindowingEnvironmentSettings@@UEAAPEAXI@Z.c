/*
 * XREFs of ??_GWindowingEnvironmentSettings@@UEAAPEAXI@Z @ 0x1803DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1UwpWindowingEnvironmentSettings@@UEAA@XZ @ 0x1803DF588 (--1UwpWindowingEnvironmentSettings@@UEAA@XZ.c)
 */

WindowingEnvironmentSettings *__fastcall WindowingEnvironmentSettings::`scalar deleting destructor'(
        WindowingEnvironmentSettings *this,
        char a2)
{
  UwpWindowingEnvironmentSettings::~UwpWindowingEnvironmentSettings(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
