/*
 * XREFs of ?get_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168930
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x1801388AC (-CreateReference@-$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA-AV.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::Api::get_InitialValue(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 424);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 416) & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ScalarNullable<Windows::Foundation::Numerics::Vector3>::CreateReference(a1 - 32, &v10);
    v7 = *v6;
    *v6 = 0LL;
    *a2 = v7;
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
