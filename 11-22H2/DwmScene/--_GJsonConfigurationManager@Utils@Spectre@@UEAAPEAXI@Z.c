/*
 * XREFs of ??_GJsonConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DE430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DE264 (--1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Utils::JsonConfigurationManager::`scalar deleting destructor'(void **this, char a2)
{
  Spectre::Utils::JsonConfigurationManager::~JsonConfigurationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
