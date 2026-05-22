/*
 * XREFs of ?SetActualSize@VisualTreeIsland@Composition@UI@Windows@@UEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006DA80
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::SetActualSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  void *v6; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v4[0] = v2 + 268;
  v4[1] = &v5;
  v4[2] = &v5;
  v6 = &Windows::UI::Composition::Visual::sc_Size;
  return Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
           v2,
           v4,
           &v6);
}
