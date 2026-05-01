/*
 * XREFs of ??_GWindowingEnvironmentConfig@@UEAAPEAXI@Z @ 0x180167460
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowingEnvironmentConfig@@UEAA@XZ @ 0x18016749C (--1WindowingEnvironmentConfig@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

WindowingEnvironmentConfig *__fastcall WindowingEnvironmentConfig::`scalar deleting destructor'(
        WindowingEnvironmentConfig *this,
        char a2)
{
  WindowingEnvironmentConfig::~WindowingEnvironmentConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
