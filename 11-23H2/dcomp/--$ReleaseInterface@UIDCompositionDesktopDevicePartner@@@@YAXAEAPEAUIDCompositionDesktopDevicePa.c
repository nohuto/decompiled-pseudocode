/*
 * XREFs of ??$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800162F0
 * Callers:
 *     DCompositionCreateCrossDeviceVisualHandle @ 0x180016170 (DCompositionCreateCrossDeviceVisualHandle.c)
 *     ??1CSharedTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18010DA08 (--1CSharedTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18010DBC0 (-SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<IDCompositionDesktopDevicePartner>(__int64 *a1)
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
