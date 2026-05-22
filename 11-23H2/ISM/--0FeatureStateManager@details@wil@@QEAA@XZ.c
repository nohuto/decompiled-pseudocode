/*
 * XREFs of ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x18004E8D0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800018C0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     <none>
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::FeatureStateManager(
        wil::details::FeatureStateManager *this)
{
  wil::details::FeatureStateManager *result; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = "WilStaging_02";
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 152), 0, 0);
  *((_QWORD *)this + 24) = 0LL;
  result = this;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *(_BYTE *)this = 1;
  return result;
}
