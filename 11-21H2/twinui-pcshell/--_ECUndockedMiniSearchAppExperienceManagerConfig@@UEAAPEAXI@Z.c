/*
 * XREFs of ??_ECUndockedMiniSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803A1260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CUndockedMiniSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803A0F60 (--1CUndockedMiniSearchAppExperienceManagerConfig@@UEAA@XZ.c)
 */

struct _TP_TIMER **__fastcall CUndockedMiniSearchAppExperienceManagerConfig::`vector deleting destructor'(
        struct _TP_TIMER **this,
        char a2)
{
  CUndockedMiniSearchAppExperienceManagerConfig::~CUndockedMiniSearchAppExperienceManagerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
