/*
 * XREFs of ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D5E8
 * Callers:
 *     ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x18009D100 (--1InteractionRecord@SnapInteraction@@QEAA@XZ.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18066FF94 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180224648 (-SendTelemetryAsync@SnapInteraction@@YA-AUfire_and_forget@winrt@@U-$com_ptr@UIApplicationView@@@.c)
 */

__int64 __fastcall SnapInteraction::InteractionRecord::SendTotalInteraction(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1[4];
  if ( v2 > 1000000000 )
  {
    v5 = *a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    result = SnapInteraction::SendTelemetryAsync(&v5, v2);
  }
  a1[4] = 0LL;
  return result;
}
