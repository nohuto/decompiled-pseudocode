/*
 * XREFs of ??0?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCColorBrush@@@Z @ 0x1801F67FC
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x180212604 (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::com_ptr_t<CColorBrush,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
