/*
 * XREFs of ?get_ModifiedRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z @ 0x1801915D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@?$ScalarNullable@M@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@M@Foundation@Windows@@@WRL@3@XZ @ 0x180138834 (-CreateReference@-$ScalarNullable@M@WRL2@Microsoft@@QEAA-AV-$ComPtr@U-$IReference@M@Foundation@W.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::get_ModifiedRestingScale(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL2::ScalarNullable<float>::CreateReference(a1 + 96, &v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
