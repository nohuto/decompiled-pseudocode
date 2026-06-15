/*
 * XREFs of ??_EEffectPackConfigurationManager@@UEAAPEAXI@Z @ 0x1800EF3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x18010D97C (--1EffectPackConfigurationManager@@UEAA@XZ.c)
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
