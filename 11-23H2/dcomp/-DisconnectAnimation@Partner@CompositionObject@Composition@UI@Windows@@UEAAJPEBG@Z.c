/*
 * XREFs of ?DisconnectAnimation@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBG@Z @ 0x180109630
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Partner::DisconnectAnimation(
        Windows::UI::Composition::CompositionObject::Partner *this,
        const unsigned __int16 *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // edi
  PVOID Reserved1; // rdx
  int v7; // eax
  const WCHAR *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = (char *)this - 96;
  v9 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 9);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, v4)[1].Reserved.Reserved1;
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(char *, PVOID))(*(_QWORD *)v2 + 128LL))(v2, Reserved1);
    v5 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x516u);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
