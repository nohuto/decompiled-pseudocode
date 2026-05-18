/*
 * XREFs of ??_EIConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DBD20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1IConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DBC84 (--1IConfigurationManager@Utils@Spectre@@UEAA@XZ.c)
 */

Spectre::Utils::IConfigurationManager *__fastcall Spectre::Utils::IConfigurationManager::`vector deleting destructor'(
        Spectre::Utils::IConfigurationManager *this,
        char a2)
{
  Spectre::Utils::IConfigurationManager::~IConfigurationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
