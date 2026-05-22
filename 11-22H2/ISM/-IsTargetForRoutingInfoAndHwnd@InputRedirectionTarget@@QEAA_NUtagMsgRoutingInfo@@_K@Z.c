/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1801DDB98
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1801DCFD0 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF

  return (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 32) + 136LL))(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           v7) >= 0
      && *(_DWORD *)a2 == v7[0]
      && *(_DWORD *)(a2 + 4) == v7[1]
      && *(_QWORD *)(a2 + 8) == v8
      && *(_QWORD *)(a2 + 16) == v9
      && IsEqualGUID((_QWORD *)(a2 + 24), &v10)
      && *(_QWORD *)(a1 + 56) == a3;
}
