/*
 * XREFs of ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x180054310
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x1800533CC (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 */

BYTE *__fastcall CreativeFramework::Health::details::BaseScenarioEvents::`vector deleting destructor'(
        BYTE *this,
        __int64 a2,
        HKEY a3)
{
  char v3; // bl

  v3 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
