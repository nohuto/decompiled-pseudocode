/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x18004A0BC
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180049EFC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18006FB8C (--1CExpression@@UEAA@XZ.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E01C4 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E6EA8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801F3150 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CWeakReference<CResource>>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
