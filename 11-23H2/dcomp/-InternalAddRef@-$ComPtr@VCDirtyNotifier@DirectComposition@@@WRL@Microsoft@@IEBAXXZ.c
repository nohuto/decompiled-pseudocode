/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEBAXXZ @ 0x180084B68
 * Callers:
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ??$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@0PEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EAC0 (--$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalAddRef(
        __int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
