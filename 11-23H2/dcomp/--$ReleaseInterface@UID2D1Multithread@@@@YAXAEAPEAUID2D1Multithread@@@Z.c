/*
 * XREFs of ??$ReleaseInterface@UID2D1Multithread@@@@YAXAEAPEAUID2D1Multithread@@@Z @ 0x18001B198
 * Callers:
 *     ?SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z @ 0x18001907C (-SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z.c)
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID2D1Multithread>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
