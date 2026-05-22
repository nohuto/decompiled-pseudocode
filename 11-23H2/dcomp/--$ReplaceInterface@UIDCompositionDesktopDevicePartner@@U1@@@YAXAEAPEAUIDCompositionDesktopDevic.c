/*
 * XREFs of ??$ReplaceInterface@UIDCompositionDesktopDevicePartner@@U1@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@PEAU0@@Z @ 0x18010D998
 * Callers:
 *     ?SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18010DBC0 (-SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IDCompositionDesktopDevicePartner,IDCompositionDesktopDevicePartner>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
