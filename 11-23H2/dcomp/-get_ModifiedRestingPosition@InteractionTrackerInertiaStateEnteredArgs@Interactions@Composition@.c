/*
 * XREFs of ?get_ModifiedRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180191570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x1801388AC (-CreateReference@-$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA-AV.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::get_ModifiedRestingPosition(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL2::ScalarNullable<Windows::Foundation::Numerics::Vector3>::CreateReference(a1 + 80, &v7);
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
