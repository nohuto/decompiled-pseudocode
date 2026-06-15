/*
 * XREFs of ??_EEffectPackConfigurationManager@@UEAAPEAXI@Z @ 0x1800EF440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x18010D9CC (--1EffectPackConfigurationManager@@UEAA@XZ.c)
 */

EffectPackConfigurationManager *__fastcall EffectPackConfigurationManager::`vector deleting destructor'(
        EffectPackConfigurationManager *this,
        char a2)
{
  EffectPackConfigurationManager::~EffectPackConfigurationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
