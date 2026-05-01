/*
 * XREFs of ??_EWindowingEnvironmentManager@@UEAAPEAXI@Z @ 0x18003BC00
 * Callers:
 *     ??_EWindowingEnvironmentManager@@WEI@EAAPEAXI@Z @ 0x1801FCF40 (--_EWindowingEnvironmentManager@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1WindowingEnvironmentManager@@UEAA@XZ @ 0x18003BC3C (--1WindowingEnvironmentManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

WindowingEnvironmentManager *__fastcall WindowingEnvironmentManager::`vector deleting destructor'(
        WindowingEnvironmentManager *this,
        char a2)
{
  WindowingEnvironmentManager::~WindowingEnvironmentManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
