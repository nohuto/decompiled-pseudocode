/*
 * XREFs of ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x180466CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x180466474 (--1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ.c)
 */

CUndockedSearchAppExperienceManagerConfig *__fastcall CUndockedSearchAppExperienceManagerConfig::`scalar deleting destructor'(
        CUndockedSearchAppExperienceManagerConfig *this,
        char a2)
{
  CUndockedSearchAppExperienceManagerConfig::~CUndockedSearchAppExperienceManagerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
